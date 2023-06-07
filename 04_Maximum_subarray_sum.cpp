#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    long long ans = INT_MIN;
        long long sum = 0;
        for(int i=0;i<n;i++){
            sum += arr[i];
            ans = max(ans, sum);
            if(sum < 0) sum = 0;
            if(ans < 0) ans = 0;
        }
        return ans;
}