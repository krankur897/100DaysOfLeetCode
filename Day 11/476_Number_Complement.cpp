/*
LeetCode: 476 - Number Complement
Difficulty: Easy
Day 11 - #100DaysOfLeetCode

Approach:
1. Create a bitmask with all bits set to 1.
2. XOR the number with the bitmask.
3. The result is the complement of the given number.

Time Complexity: O(log n)
Space Complexity: O(1)
*/


class Solution {
public:
    int findComplement(int num) {
        int mask=0;
        int temp=num;
        while(temp){
            mask=(mask<<1) | 1;
            temp=temp>>1;
        }
        return num^mask;
    }
};