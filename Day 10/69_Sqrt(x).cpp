/*
LeetCode: 69 - Sqrt(x)
Difficulty: Easy
Day 10 - #100DaysOfLeetCode

Approach:
1. Apply Binary Search on the range [0, x].
2. Compare mid * mid with x.
3. Return the floor value of the square root.

Time Complexity: O(log n)
Space Complexity: O(1)
*/

class Solution {
public:
long long int binarySearch(int n){
    int s=0;
    int e=n;
    long long int mid=s+(e-s)/2;
    long long int ans=-1;
    while(s<=e){
        long long square=mid*mid;
        if (square==n){
            return mid;
        }
        if(square<n){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;

}
    int mySqrt(int x) {
        return binarySearch(x);
    }
};