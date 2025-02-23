#include <bits/stdc++.h>
#define rep(i, s, n)    for (int i = (s); i < (int)n; i++)
#define sort(vec) sort(vec.begin(), vec.end());
#define reverse(vec) reverse(vec.begin(), vec.end());
#define v( vec, m)    vector<int> vec(m);
#define vv(vec, m, n) vector<vector<int>> vec(m, vector<int>(n));
using namespace std;

int main(){
  string S;
  bool flag;
  cin >> S;
  rep(i, 1, S.size()){
    if(S[i] == 'A'){
      int j = i;
      flag=false;
      while(S[j-1] == 'W'){
        S[j]   = 'C';
        S[j-1] = 'A';
        j--;
        flag =true;
      }
    }
  }
  cout << S << endl;
  return 0;
}