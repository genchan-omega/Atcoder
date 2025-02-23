#include <bits/stdc++.h>
#define rep(i, s, n)    for (int i = (s); i < (int)n; i++)
#define sort(vec) sort(vec.begin(), vec.end());
#define reverse(vec) reverse(vec.begin(), vec.end());
using namespace std;

int main(){
  int N, a, b;

  // 入力
  cin >> N;
  vector<vector<int>> A(N, vector<int>(N));
  rep(i, 0, N)
    rep(j, 0, i+1)
      cin >> A[i][j];
  
  // 処理
  a=0;
  rep(i, 0, N){
    b=i;
    if(a<b)
      swap(a, b);
    a=A[a][b]-1;
  }
  cout << a+1 << endl;
  return 0;
}