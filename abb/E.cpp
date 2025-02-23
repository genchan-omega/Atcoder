#include <bits/stdc++.h>
#define rep(i, s, n)    for (long i = (s); i < (long)n; i++)
#define sort(vec) sort(vec.begin(), vec.end());
#define reverse(vec) reverse(vec.begin(), vec.end());
using namespace std;

int main(){
  long long N, low_cnt, high_cnt, ans=0;
  // 入力
  cin >> N;
  vector<long long> A(N);
  rep(i, 0, N)
    cin >> A[i];

  // 処理
  rep(i, 1, N){
    low_cnt = i - count(A.begin(), A.begin() + i, A[i]);
    high_cnt = count(A.begin() + (i+1), A.end(), A[i]);
    ans += low_cnt * high_cnt; 
  }

  // 出力
  cout << ans << endl;
  return 0;
}