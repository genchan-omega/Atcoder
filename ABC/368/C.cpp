#include <bits/stdc++.h>
#define rep(i, s, n)    for (int i = (s); i < (int)n; i++)
#define sort(vec) sort(vec.begin(), vec.end());
#define reverse(vec) reverse(vec.begin(), vec.end());
using namespace std;

int main(){
  int N;
  long ans=0;
  cin >> N;
  vector<int> H(N);

  // 入力
  rep(i, 0, N)
    cin >> H[i];

  rep(i, 0, N){
    ans += H[i]/5*3;
    H[i] %= 5;
    while(H[i]>0){
      ans++;
      if(ans%3)
        H[i]--;
      else
        H[i] -= 3;
    }
  }
  cout << ans << endl;
}