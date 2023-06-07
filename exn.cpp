#include <bits/stdc++.h>
using namespace std;
         
int main(){
         
  vector<int>arr = {3,6,9,1,3,2,2,1,8};
  sort(arr.begin(),arr.end());
	int cnt = 1;
	for(int i=1;i<arr.size();i++){
		if(arr[i] == arr[i-1]){
			continue;
		}
		cnt++;
	}
	cout << "Size of array is "<<cnt<<endl;
    for(auto i: arr){
        cout << i << " ";
    }
      
  return 0;
} 