#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &permutation, int n)
{
         int ind = -1;
        // finding the breakpoint
        for(int i=n-2;i>=0;i--){
            if(permutation[i] < permutation[i+1]){
                ind  = i;
                break;
            }
        }
        if(ind == -1){
            reverse(permutation.begin(), permutation.end());
        }else{
            // finding the smallest element form rest of array
        for(int i=n-1;i>ind;i--){
            if(permutation[i] > permutation[ind]){
                swap(permutation[i], permutation[ind]);
                break;
            }
        }
        // taking the minimum element from rest of array
        // 2 3 | 5 4 1 0 0
        reverse(permutation.begin()+ind+1, permutation.end());
        }
        return permutation;
}