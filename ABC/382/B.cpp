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
  cin >> N >> D >> S;
  rep(i, 0, D){
    rep(j, 0, N){
      if(S[N-j-1] == '@'){
        S[N-j-1] = '.';
        break;
      }
    }
  }
  cout << S << endl;
  return 0;
}