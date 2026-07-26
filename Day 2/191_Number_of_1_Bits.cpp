/*
LeetCode: 191
Problem: Number of 1 Bits
Difficulty: Easy

Day 2 - #100DaysOfLeetCode
*/

class Solution {
public:
    int hammingWeight(int n) {
        // Solve And Shift the bit to the right
        int count=0;
        while(n!=0){
            if(n&1){
                count++;
            }
            n=n>>1;
        }
        return count;
    }
};