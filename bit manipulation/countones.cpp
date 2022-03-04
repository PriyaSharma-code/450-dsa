//Given a positive integer N, print count of set bits in it. 

//https://practice.geeksforgeeks.org/problems/set-bits0143/1

class Solution {
  public:
    int setBits(int N) {
        // Write Your Code here
        
        int count = 0;
        while(N){
            N = N & (N-1);
            count++;
        }
        return count;
    }
};