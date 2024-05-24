#include <bits/stdc++.h>
#define rep(i, s, n)    for (int i = (s); i < (int)n; i++)
#define sort(vec) sort(vec.begin(), vec.end());
#define reverse(vec) reverse(vec.begin(), vec.end());
#define v(vec, h) vector<int> vec(h, 0);
#define vv(vec, h, w) vector<vector<int>> vec(h, vector<int>(w, 0));
using namespace std;

int main() {
  int H, W, sum;
  cin >> H >> W;
  vv(A, H, W);
  v(buf_h, H);
  v(buf_w, W);
  // 入力
  rep(i, 0, H)
    rep(j, 0, W)
      cin >> A[i][j];
  
  // 横の計算
  rep(i, 0, H)
    rep(j, 0, W)
      buf_h[i] += A[i][j];

  // 縦の計算
  rep(i, 0, W)
    rep(j, 0, H)
      buf_w[i] += A[j][i];

  // 出力
  rep(i, 0, H){
    rep(j, 0, W)
      cout << buf_h[i]+buf_w[j]-A[i][j] << " ";
    cout << endl;
  }
}