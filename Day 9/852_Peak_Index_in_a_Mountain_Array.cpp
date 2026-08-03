/*
LeetCode: 852 - Peak Index in a Mountain Array
Difficulty: Medium
Day 9 - #100DaysOfLeetCode

Approach:
1. Apply Binary Search.
2. Compare arr[mid] with arr[mid + 1].
3. Move towards the increasing side until the peak is found.

Time Complexity: O(log n)
Space Complexity: O(1)
*/


class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int s=0;
        int e=arr.size()-1;
        int mid=s+(e-s)/2;
        while(s<e){
            if(arr[mid]<arr[mid+1]){
                s=mid+1;
            }
            else{
                e=mid;
            }
            mid=s+(e-s)/2;
        }
        return s;
    }
};