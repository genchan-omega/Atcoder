#include <bits/stdc++.h>
#define rep(i, s, n)    for (int i = (s); i < (int)n; i++)
#define sort(vec) sort(vec.begin(), vec.end());
#define reverse(vec) reverse(vec.begin(), vec.end());
#define v( vec, m)    vector<int> vec(m);
#define vv(vec, m, n) vector<vector<int>> vec(m, vector<int>(n));
using namespace std;

int main(){
  int cnt=0;
  string S;
  cin >> S;
  rep(i, 0, S.size()){
    if(S[i] == 'A'){
      rep(j, i+1, S.size()){
        if(S[j] == 'B' and S[2*j-i] == 'C'){
          cnt++;
        }
      }
    }
  }
  cout << cnt << endl;
  return 0;
}