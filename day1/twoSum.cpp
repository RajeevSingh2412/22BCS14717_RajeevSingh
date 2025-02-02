#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> m;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
           if(m[nums[i]]){
             ans.push_back(i);
             ans.push_back(m[nums[i]]-1);
            }
            m[target-nums[i]]=i+1;
        }
        return ans;
        
    }
};