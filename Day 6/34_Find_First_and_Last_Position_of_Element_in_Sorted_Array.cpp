/*
LeetCode: 34 - Find First and Last Position of Element in Sorted Array
Difficulty: Medium
Day 6 - #100DaysOfLeetCode

Approach:
1. Use Binary Search to find the first occurrence.
2. Use Binary Search again to find the last occurrence.
3. Return both indices as the answer.

Time Complexity: O(log n)
Space Complexity: O(1)
*/

class Solution {
public:

    int firstOcc(vector<int>& nums, int target) {

        int s = 0;
        int e = nums.size() - 1;
        int ans = -1;

        while(s <= e) {

            int mid = s + (e - s) / 2;

            if(nums[mid] == target) {
                ans = mid;
                e = mid - 1;
            }

            else if(nums[mid] > target) {
                e = mid - 1;
            }

            else {
                s = mid + 1;
            }
        }

        return ans;
    }

    int lastOcc(vector<int>& nums, int target) {

        int s = 0;
        int e = nums.size() - 1;
        int ans = -1;

        while(s <= e) {

            int mid = s + (e - s) / 2;

            if(nums[mid] == target) {
                ans = mid;
                s = mid + 1;
            }

            else if(nums[mid] > target) {
                e = mid - 1;
            }

            else {
                s = mid + 1;
            }
        }

        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {

        int first = firstOcc(nums, target);
        int last = lastOcc(nums, target);

        return {first, last};
    }
};