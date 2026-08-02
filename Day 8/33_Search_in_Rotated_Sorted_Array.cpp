/*
LeetCode: 33 - Search in Rotated Sorted Array
Difficulty: Medium
Day 8 - #100DaysOfLeetCode

Approach:
1. Find the pivot element using Binary Search.
2. Decide which sorted half may contain the target.
3. Apply Binary Search on that half.

Time Complexity: O(log n)
Space Complexity: O(1)
*/


class Solution {
public:
int pivotEle(vector<int>& nums,int size){
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(nums[mid]>=nums[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}
int binarySearch(vector<int>& nums,int s,int e, int key){
    int start=s;
    int end=e;
    int mid=start+(end - start)/2;
    while(start<=end){
        if(nums[mid]==key){
            return mid;
        }
        if(key>nums[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end - start)/2;
    }
    return -1;
}
    int search(vector<int>& nums, int target) {
        int pivot=pivotEle(nums,nums.size());
        if(target>=nums[pivot] && target<=nums[nums.size()-1]){
            return binarySearch(nums,pivot,nums.size()-1,target);
        }
        else{
            return binarySearch(nums,0,pivot-1,target);
        }
    }
};