#include <bits/stdc++.h>
#define rep(i, s, n)    for (int i = (s); i < (int)n; i++)
#define sort(vec) sort(vec.begin(), vec.end());
// #define reverse(vec) reverse(vec.begin(), vec.end());
using namespace std;

int main(){
  int N, M=0;
  cin >> N;
  vector<string> S(N);

  // 入力
  rep(i, 0, N){
    cin >> S[i];
    M = max((int)S[i].size(), M);
  }

  // 処理
  vector<string> T(M);
  rep(i, 0, M){
    rep(j, 0, N){
      if(S[N-j-1][i])
        T[i][j] = '*';
      else
        T[i][j] = S[N-j-1][i];
    }
  }

  // 出力
  rep(i, 0, M)
    cout << T[i] << endl;
  cout << M << endl;
}