#include <bits/stdc++.h>
#define rep(i, s, n)    for (int i = (s); i < (int)n; i++)
#define sort(vec) sort(vec.begin(), vec.end());
#define reverse(vec) reverse(vec.begin(), vec.end());
#define test_print(vec, n) rep(i, 0, n) cout << vec[i] << " "; cout << endl;
using namespace std;

int main() {
  int N;
  long long int result=0, buf=0;
  cin >> N;
  vector<string> S(N);
  // 入力
  rep(i, 0, N)
    cin >> S[i];
  // 計算
  rep(i, 0, N-1){
    rep(j, i+1, N){
      buf = stoll(A[i]+A[j]);
      result += (buf%998244353);
    }
  }
  // 出力
  cout << (result%998244353) << endl;
}