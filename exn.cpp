#include <bits/stdc++.h>
using namespace std;
         
int main(){
         
  int i = 1;
  int carry = 0;
  while(i<=5){
    cout << i+carry << endl;
    carry = i + carry;
    i++;
  }
      
  return 0;
} 