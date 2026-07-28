/*
LeetCode: 1009
Problem: Complement of Base 10 Integer
Difficulty: Easy
Day 3 - #100DaysOfLeetCode
*/

class Solution {
public:
    int reverse(int x) {
        int number=0;
        while(x!=0){
            if((number>INT_MAX/10)||(number<INT_MIN/10)){
                return 0;
            }
            int digit=x%10;
            number=number*10 + digit;
            x=x/10;
        }
        return number;
    }
};