//workbreak.cpp
//https://practice.geeksforgeeks.org/problems/word-break-part-23249/1#

/* Given a string s and a dictionary of words dict of length n, add spaces in s to 
construct a sentence where each word is a valid dictionary word. Each dictionary word 
can be used more than once. Return all such possible sentences.*/

void fill(int pos,string s,string str,int n,set<string> &dict, vector<string> &v){
        if(pos==s.length()){
            v.push_back(str);
            return;
        }
        string out="";
        for(int i=pos;i<s.length();i++){
            out+=s[i];
            if(dict.find(out)!=dict.end()){
                if(str.length()==0){
                    fill(i+1,s,str+out,n,dict,v);
                }
                else fill(i+1,s,str+" "+out,n,dict,v);
            }
        }
    }
    vector<string> wordBreak(int n, vector<string>& dict, string s)
    {
        vector<string> v;
        
        set<string> di;
        for(auto i:dict){
            di.insert(i);
        }
        
        string str="";
        
        fill(0,s,str,n,di,v);
        
        return v;
    }