#include <bits/stdc++.h>
using namespace std;
         
int main(){
         
  vector<int>arr1 = {3,6,9,0,0};
  vector<int>arr2 = {4,10};
  int m = 3;
  int n = 2;
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
    for(auto i: arr1){
        cout << i << " ";
    }
      
  return 0;
} 