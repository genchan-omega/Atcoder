//      (((                  )))
//    (((                      )))
//   (((                        )))
//  ((((                        ))))
//  ((((          (())          ))))
//   ((((      ((((  ))))      ))))
//     ((((   ((((    ))))   ))))
//        (((((          )))))

#include <bits/stdc++.h>
#define rep(i, n)          for(ll i = 0; i < (ll)n; ++i)
#define sort(vec)          sort(vec.begin(), vec.end());
#define reverse(vec)       reverse(vec.begin(), vec.end());
#define make_v( vec, m)    vector<ll> vec(m);
#define make_vv(vec, m, n) vector<vector<ll>> vec(m, vector<ll>(n));
#define yes(flag)          cout << (flag ? "Yes" : "No") << endl;
#define pd(ans) printf("%.12Lf\n", ans);
#define inf 1e18

using namespace std;
using ll = int64_t;
struct edge{
  ll to;
  ll cost;
  edge(ll to, ll cost) : to(to), cost(cost) {}
};
using G = vector<vector<edge>>;
using P = pair<ll, ll>;

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
      cout << k << " ";
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
const long double PI = 3.14159265358979;

struct pos{
  long double x, y, z;
};

int main(){
  long double t, l, x, y, q;
  cin >> t >> l >> x >> y >> q;

  auto leng = [&](pos a, pos b) -> long double{
    long double x, y, z;
    x = abs(a.x-b.x);
    y = abs(a.y-b.y);
    z = abs(a.z-b.z);
    return sqrt(x*x+y*y+z*z);
  };

  rep(qi, q){
    long double e;
    cin >> e;
    pos a, b, c;
    a.x = 0;
    a.y = -l/2.0*sin(2.0*M_PI*e/t);
    a.z = l/2.0*(1.0-cos(2.0*PI*e/t));
    b.x = x;
    b.y = y;
    b.z = l/2.0*(1.0-cos(2.0*PI*e/t));
    c.x = x;
    c.y = y;
    c.z = 0.0;
    long double ans = atan(leng(b, c)/leng(a, b));
    ans *= 180.0/PI;
    pd(ans);
  }
  return 0;
}