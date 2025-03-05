//      (((                  )))
//    (((                      )))
//   (((                        )))
//  ((((                        ))))
//  ((((          (())          ))))
//   ((((      ((((  ))))      ))))
//     ((((   ((((    ))))   ))))
//        (((((          )))))

#include <bits/stdc++.h>
#define rep(i, n)          for(int64 i = 0; i < (int64)n; ++i)
#define sort(vec)          sort(vec.begin(), vec.end());
#define reverse(vec)       reverse(vec.begin(), vec.end());
#define make_v( vec, m)    vector<int64> vec(m);
#define make_vv(vec, m, n) vector<vector<int64>> vec(m, vector<int64>(n));
#define yes(flag)          cout << (flag ? "Yes" : "No") << endl;
#define inf 1e9
using int64 = int64_t;
using namespace std;

template<class T> inline bool chmax(T& a, T b){if(a < b) {a = b; return 1;} return 0;}
template<class T> inline bool chmin(T& a, T b){if(a > b) {a = b; return 1;} return 0;}

int main() {
  int n;
  cin >> n;
  vector<int> h(n);
  vector<int> dp(n, inf);
  rep(i, n)
    cin >> h[i];
  dp[0] = 0;
  for(int64 i=1; i<n; ++i) {
    chmin(dp[i], dp[i-1] + abs(h[i]-h[i-1]));
    if(i>1)
      chmin(dp[i], dp[i-2] + abs(h[i] - h[i-2]));
  }
  cout << dp[n-1] << endl;
}