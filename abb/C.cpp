#include <bits/stdc++.h>
#define rep(i, s, n)    for (int i = (s); i < (int)n; i++)
#define sort(vec) sort(vec.begin(), vec.end());
#define reverse(vec) reverse(vec.begin(), vec.end());
using namespace std;

int main(){
  string _M;
  unsigned long long N, M;
  // 入力
  cin >> N >> _M;
  vector<vector<unsigned long long>> A(N, vector<unsigned long long>(N));
  if(_M.size() < 2)
    M = stoi(_M);
  else
    M = stoi(_M.substr(_M.length()-2));

  M %= 100;

  // 処理
  rep(i, 0, N)
    rep(j, 0, N)
      A[i][j] = ((M+i)*(M+j))%100;

  // 出力
  rep(i, 0, N){
    rep(j, 0, N){
      if(0 <= A[i][j] and A[i][j] <= 9)
        cout << "0" << A[i][j];
      else 
        cout << A[i][j];
      if(j != N-1)
        cout << " ";
    }
    cout << endl;
  }
  return 0;
}