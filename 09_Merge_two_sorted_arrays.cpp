vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	int ind = arr1.size()-1;
	int i = m-1;
	int j = n-1;
	while(i>=0 && j>=0){
		if(arr1[i] < arr2[j]){
			arr1[ind] = arr2[j];
			ind--;
			j--;
		}else{
			arr1[ind] = arr1[i];
			ind--;
			i--;
		}
	}
	while(j>=0){
		arr1[ind--] = arr2[j--];
	}
	return arr1;
}