#include <bits/stdc++.h> 
void findsubsetsWithDup(int index, vector<int> &nums, vector<int> &ds, vector<vector<int>> &ans){

        ans.push_back(ds);
        for(int i=index ; i<nums.size() ; i++){
            if(i!=index && nums[i]==nums[i-1]) continue;
            ds.push_back(nums[i]);
            findsubsetsWithDup(i+1, nums, ds, ans);
            ds.pop_back();
        }

    }
vector<vector<int>> uniqueSubsets(int n, vector<int> &nums)
{
     vector<vector<int>> ans;
      vector<int> ds;
      sort(nums.begin(), nums.end());
      findsubsetsWithDup(0, nums, ds, ans);
      return ans;   
}