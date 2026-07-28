/*
LeetCode: 231
Problem: Power of Two
Difficulty: Easy
Day 3 - #100DaysOfLeetCode
*/


//First Solution
/*
class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        if(n>0 && (n & (n-1)) ==0){
            return true;
        }
        return false;
    }
    
};
*/

//Second Solution
class Solution {
public:
    bool isPowerOfTwo(int n) {
        for(int i=0;i<=30;i++){
            int num=pow(2,i);
            if(num==n){
                return true;
            }
        }
        return false;
    }
};