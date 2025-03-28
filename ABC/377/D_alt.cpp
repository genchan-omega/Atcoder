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
#define pd(ans)            printf("%.12Lf\n", ans);
#define inf                100100100100100100LL

using namespace std;
using ll = int64_t;
struct edge{
  ll to;
  ll cost;
  edge(ll to, ll cost) : to(to), cost(cost) {}
};
using G = vector<vector<edge>>;
using P = pair<ll, ll>;
const ll mod = 1000000007LL;

template<class T, class U>
inline bool chmax(T& a, U b) {
    if (a < b) {
        a = static_cast<T>(b);
        return true;
    }
    return false;
}
template<class T, class U>
inline bool chmin(T& a, U b) {
    if (a > b) {
        a = static_cast<T>(b);
        return true;
    }
    return false;
}
template<class T> inline T ceil(T a, T b){return (a+b-1)/b;}

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
int main(){
  ll n, m;
  cin >> n >> m;
  vector<ll> r2l(m+1, -1);
  rep(i, n){
    ll l, r;
    cin >> l >> r;
    l--, r;
    chmax(r2l[r], l);
  }
  ll ans=0;
  for(ll l=0, r=0; l<m; l++){
    // lがrを追い越すことを考慮
    chmax(r, l);
    while(r<m and l>r2l[r+1])
      r++;
    //　この時点の[lを含む要素を全て数え上げ
    ans += r-l;
    cout << "l: " << l << ", r: " << r << endl;
  }
  cout << ans << endl;
  return 0;
}