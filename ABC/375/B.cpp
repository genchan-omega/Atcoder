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
#define pd(ans) cout << fixed << setprecision(8) << ans << endl;
#define inf 1e9

using namespace std;
using int64 = int64_t;
using G = vector<vector<int64>>;
using P = pair<int64,int64>;

template<class T> inline bool chmax(T& a, T b){if(a < b) {a = b; return 1;} return 0;}
template<class T> inline bool chmin(T& a, T b){if(a > b) {a = b; return 1;} return 0;}

// Debug
void print_v(auto& vec){
  cout << "[ ";
  for(auto v:vec)
    cout << v << " ";
  cout << ']' << endl;
  return;
}

void print_vv(auto& vec){
  cout << "[ ";
  for(auto v:vec){
    for(auto k:v)
      cout << k << " " << endl;
    cout << endl;
  }
  cout << ']' << endl;
  return;
}

void print_rle(auto& rle){
  cout << "[character : length]" << endl;
  for(auto [c, len]:rle)
    cout << c << " : " << len << endl;;
  return;
}

// Make Code
int main(){
  int64 n, x1=0, y1=0, x2, y2;
  double ans=0;
  cin >> n ;
  rep(i, n){
    cin >> x2 >> y2;
    int64 dx = abs(x2-x1), dy = abs(y2-y1);
    ans += sqrt(dx*dx+dy*dy);
    x1=x2;y1=y2;
  }
  x1=0, y1=0;
  int64 dx = abs(x2-x1), dy = abs(y2-y1);
  ans += sqrt(dx*dx+dy*dy);
  pd(ans);
  return 0;
}