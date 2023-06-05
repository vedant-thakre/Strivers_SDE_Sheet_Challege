int removeDuplicates(vector<int> &nums, int n) {
	   int i = 0;
       for(int j=i+1;j<nums.size();j++){
           if(nums[i]!=nums[j]){
               nums[i+1] = nums[j];
               i++;
           }
       }
       return i+1;
}