#include <bits/stdc++.h>
#include<iostream>
#include<vector>
#define rep(i, s, n)    for (int i = (s); i < (int)n; i++)
#define sort(vec) sort(vec.begin(), vec.end());
// #define reverse(vec) reverse(vec.begin(), vec.end());
using namespace std;

int main() {
  string S;
  bool flag =false;
  cin >> S;
  rep(i, 0, S.size()){
    if(S[i] == 'R')
        flag=true;
    if(S[i] == 'M' and flag == true){
        cout << "Yes" << endl;
        return 0;
    }
  }
    cout << "No" << endl;
  return 0;
}