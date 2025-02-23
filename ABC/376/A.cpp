#include <bits/stdc++.h>
#define rep(i, s, n)    for (int i = (s); i < (int)n; i++)
#define sort(vec) sort(vec.begin(), vec.end());
#define reverse(vec) reverse(vec.begin(), vec.end());
using namespace std;

int main(){
  int N, C, buf, now, cnt=1;
  cin >> N >> C >> buf;
  rep(i, 0, N-1){
    cin >> now;
    if(now-buf>=C){
      cnt++;
      buf = now;
    }
  }
  cout << cnt << endl;
  return 0;
}