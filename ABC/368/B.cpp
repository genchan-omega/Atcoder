#include <bits/stdc++.h>
#define rep(i, s, n)    for (int i = (s); i < (int)n; i++)
#define sort(vec) sort(vec.begin(), vec.end());
#define reverse(vec) reverse(vec.begin(), vec.end());
using namespace std;

int main(){
  int N, ans=0;
  cin >> N;
  vector<int> A(N);

  // 入力
  rep(i, 0, N)
    cin >> A[i];

  while(1){
    sort(A);
    reverse(A);

    // 終了処理
    if(A[1]==0 or A[0] == 0){
      cout << ans << endl;
      return 0;
    }
    A[1]--;  A[0]--;
    ans++;
  }
}