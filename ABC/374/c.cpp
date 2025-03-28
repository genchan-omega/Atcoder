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
#define pd(ans) cout << fixed << setprecision(8) << ans << endl;
#define inf LLONG_MAX
#define minf LLONG_MIN

using namespace std;
using ll = int64_t;
using G = vector<vector<edge>>;
using P = pair<ll, ll>;

struct edge{
  ll to;
  ll cost;
  edge(ll to, ll cost) : to(to), cost(cost) {}
};

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
int main(){
  ll n, ans=inf;
  cin >> n;
  vector<ll> k(n);
  rep(i, n)
    cin >> k[i];
  for(int bit=0; bit<(1<<n); bit++){
    ll suma=0, sumb=0;
    rep(i,n){
      if((bit>>i) & 1)
        suma += k[i];
      else
        sumb += k[i];
    }
    ll now = max(suma, sumb);
    chmin(ans, now);
  }
  cout << ans << endl;
  return 0;
}