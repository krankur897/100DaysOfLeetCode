/*
LeetCode: 349 - Intersection of Two Arrays
Difficulty: Easy
Day 7 - #100DaysOfLeetCode

Approach:
1. Traverse each element of nums1.
2. Search for it in nums2.
3. Before adding to the answer, ensure it is not already present.

Time Complexity: O(n × m + k)
Space Complexity: O(k)
*/


class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for(int i=0;i<nums1.size();i++){
            int element=nums1[i];
            for(int j=0;j<nums2.size();j++){
                if(element==nums2[j]){
                    bool alreadyPresent=false;
                    for(int k=0;k<ans.size();k++){
                        if(ans[k]==element){
                            alreadyPresent=true;
                            break;
                        }
                    }
                    if(alreadyPresent==false){
                        ans.push_back(element);
                    }
                    break;
                }
            }
        }
        return ans;
    }
};