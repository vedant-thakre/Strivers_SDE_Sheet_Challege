vector<int> majorityElementII(vector<int> &arr)
{  
   int n = arr.size()/3;
   vector<int>ans;
   map<int,int>mp;
   for(int i=0;i<arr.size();i++){
       mp[arr[i]]++;
   }
   for(auto i:mp){
       if(i.second > n){
      ans.push_back(i.first);
       }
   }
   return ans;
}