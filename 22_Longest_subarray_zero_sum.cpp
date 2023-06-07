#include <bits/stdc++.h>

int LongestSubsetWithZeroSum(vector < int > nums) {

  map<int, int>mp; 
  int k = 0;
  int sum = 0;
  int maxlen = 0;
  for(int i=0;i<nums.size();i++){
      sum += nums[i];
      if(sum == k){
        maxlen = max(maxlen, i+1);
      }
      int rem = sum - k;
      if(mp.find(rem) != mp.end()){
        int len = i - mp[rem];
        maxlen = max(len, maxlen);
      }
      if(mp.find(sum) == mp.end()){ // -- > for element pos , 0 , neg
        mp[sum] = i; // -- > for element > zero only
      }
  }
  return maxlen;

}