int findDuplicate(vector<int> &arr, int n){
    unordered_map<int,int>mp;
	for(int i=0;i<n;i++){
		mp[arr[i]]++;
	}
	int ans = 0;
	for(auto i: mp){
		if(i.second > 1){
		   ans = i.first;
		}
	}
	return ans;
}
