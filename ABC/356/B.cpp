#include <bits/stdc++.h>
#define rep(i, s, n)    for (int i = (s); i < (int)n; i++)
#define sort(vec) sort(vec.begin(), vec.end());
#define reverse(vec) reverse(vec.begin(), vec.end());
#define test_print(vec, n) rep(i, 0, n) cout << vec[i] << " "; cout << endl;
using namespace std;

int main() {
  int N, M, sum;
  cin >> N >> M;
  vector<int> A(N);
  vector<vector<int>> X(N, vector<int> (M));
  // 入力
  rep(i, 0, M)
    cin >> A[i];
  rep(i, 0, N)
    rep(j, 0, M)
      cin >> X[i][j];
  // 計算
  rep(i, 0, M){
    sum=0;
    rep(j, 0, N){
      sum+=X[j][i];
    }
    if(sum < A[i]){
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
}