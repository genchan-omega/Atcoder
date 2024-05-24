#include <bits/stdc++.h>
#define rep(i, s, n)    for (int i = (s); i < (int)n; i++)
#define sort(vec) sort(vec.begin(), vec.end());
#define reverse(vec) reverse(vec.begin(), vec.end());
#define test_print(vec, n) rep(i, 0, n) cout << vec[i] << " "; cout << endl;
using namespace std;

int main() {
  int N, result=0, mod=1e8, buf=0, hoge=0;
  cin >> N;
  vector<int> A(N);
  // 入力
  rep(i, 0, N)
    cin >> A[i];
  // 計算
  rep(i, 0, N-1){
    rep(j, i+1, N){
      buf += (A[i]+A[j]);
      if(buf >= mod){
        result += hoge;
        result += (A[i]+A[j])%mod;
        buf=hoge=0;
      }
      else
        hoge=buf;
    }
  }
  // 出力
  cout << result+(buf%mod) << endl;
}