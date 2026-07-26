/*
    LeetCode 1281
    Problem: Subtract the Product and Sum of Digits of an Integer
    Difficulty: Easy
    Day 1 - #100DaysOfLeetCode
*/

class Solution {
public:
    int subtractProductAndSum(int n) {
        int Product=1;
        int Sum=0;
        while(n!=0){
            int digit=n%10;
            Product=Product*digit;
            Sum=Sum+digit;
            n = n/10;
        }

        int answer =Product-Sum;
        return answer;
    }
};