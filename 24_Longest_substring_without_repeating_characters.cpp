#include <bits/stdc++.h> 
int uniqueSubstrings(string input)
{
    int length=0 , maxlength=0,j=0;
        map<char ,int> mp;
        for(int i=0 ;i<input.size(); i++){
            mp[input[i]]++;
            length++;
                while(mp[input[i]]>1){
                    mp[input[j++]]--;
                    length--;
                }
            maxlength = max(maxlength,length);
        }
        return maxlength;
}