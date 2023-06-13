int longestSubSeg(vector<int> &nums , int n, int k){
    int maxi = 0;
    int cnt0 = 0;
    for(int i = 0, j = 0; i < n; i++){
        if(nums[i] == 0){
            cnt0++;
        }

        while(cnt0 > k){
           if(nums[j] == 0){
               cnt0--;
           }
           j++;
        }
        maxi = max(maxi, i-j+1);
    }
    return maxi;
}
