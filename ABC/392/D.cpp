//      (((                  )))
//    (((                      )))
//   (((                        )))
//  ((((                        ))))
//  ((((          (())          ))))
//   ((((      ((((  ))))      ))))
//     ((((   ((((    ))))   ))))
//        (((((          )))))

#include <bits/stdc++.h>
#define rep(i, n)    for (int i = 0; i < (int)n; i++)
#define sort(vec) sort(vec.begin(), vec.end());
#define reverse(vec) reverse(vec.begin(), vec.end());
#define v( vec, m)    vector<int> vec(m);
#define vv(vec, m, n) vector<vector<int>> vec(m, vector<int>(n));
using int64 = int64_t;
using namespace std;


int main(){
  int64 n;
  double ans=-1e9;
  cin >> n;
  vector<vector<int>> a(n);
  vector<int> k(n);
  rep(i, n){
    cin >> k[i];
    a[i] = vector<int>(k[i]);
    rep(j, k[i])
      cin >> a[i][j];
  }
  rep(i, n)rep(j, i){
    map<int, int> cnt;
    double now=0;
    for(int na : a[j])
      cnt[na]++;
    for(int na : a[i])
      now += cnt[na];
    now /= (a[i].size() * a[j].size());
    ans = max(ans, now);
  }
  printf("%.10f\n", ans);
  return 0;
}