#include <bits/stdc++.h>
#define rep(i, s, n)    for (int i = (s); i < (int)n; i++)
#define sort(vec) sort(vec.begin(), vec.end());
#define reverse(vec) reverse(vec.begin(), vec.end());
using namespace std;

double distance(double x, double z, double y, double w){
  return sqrt(pow(x-y, 2) + pow(z-w, 2));
}

int main(){
  int N;
  double a, b, c, d, ans=0;
  // 入力
  cin >> N;
  a = b = 0;
  // 処理
  rep(i, 0, N){
    cin >> c >> d;
    ans += distance(a, b, c, d);
    if(i==N-1)
      ans += distance(0, 0, c, d);
    a=c;b=d;
  }
  cout << fixed << setprecision(10);
  cout << ans << endl;
  return 0;
}