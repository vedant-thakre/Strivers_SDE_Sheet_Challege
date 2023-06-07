#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
   if(n==0) return 0;
    unordered_set<int>st;
    int len = 1;
    for(int i=0;i<n;i++){
        st.insert(arr[i]);
    }
    for(auto it: st){
        if(st.find(it - 1) == st.end()){
        int cnt = 1;
        int x = it;
        while(st.find(x+1) != st.end()){
            x = x + 1;
            cnt++;
        }
        len = max(len,cnt);
        }
    }
    return len;
}