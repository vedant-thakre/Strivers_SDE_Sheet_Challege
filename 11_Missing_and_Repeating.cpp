#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	sort(arr.begin(), arr.end());
	int sum = arr[0];
	int M,R=-1;
	int realsum = (n * (n + 1)) / 2;
	for(int i=1;i<n;i++){
		if(arr[i] == arr[i-1]){
          R = arr[i];
		}
		sum += arr[i];
    }
	sum = sum - R;
	M = realsum - sum;
	return {M,R};
}