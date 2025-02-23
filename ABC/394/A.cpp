#include <bits/stdc++.h>
#define rep(i, s, n)    for (int i = (s); i < (int)n; i++)
#define sort(vec) sort(vec.begin(), vec.end());
#define reverse(vec) reverse(vec.begin(), vec.end());
#define v( vec, m)    vector<int> vec(m);
#define vv(vec, m, n) vector<vector<int>> vec(m, vector<int>(n));
using namespace std;

int main(){
  int N, D, cnt=0;
  string S;
  cin >> S;
  for(char c: S)
    if(c == '2')
      cout << '2';
  cout << endl;
  return 0;
}