#include <bits/stdc++.h>
#define rep(i, s, n)    for (int i = (s); i < (int)n; i++)
#define sort(vec) sort(vec.begin(), vec.end());
#define reverse(vec) reverse(vec.begin(), vec.end());
using namespace std;

int main(){
  int N, Q, T, L=1, R=2, ans=0;
  char H;
  cin >> N >> Q;
  rep(i, 0, Q){
    cin >> H >> T;
    // 動かすのがLのとき
    if(H == 'L'){
      if(L%N < R%N < T%N)
        ans += L%N + N - T;
      else
        ans += T%N + N -L;
    }
    // 動かすのがRのとき
    else{
      if(R%N < L%N < T%N)
        ans += R%N + N - T;
      else
        ans += T%N + N -R;
    }
    cout << ans << endl;
  }
  cout << ans << endl;
  return 0;
}