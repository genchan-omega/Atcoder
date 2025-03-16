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
int main(){
  ll n, mg, mh;
  set<P> g;
  set<P> h;
  map<P, ll> weight;
  cin >> n >> mg;
  rep(i, mg){
    ll a, b;
    cin >> a >> b;
    a--, b--;
    g.emplace(a, b);
  }
  cin >> mh;
  rep(i, mh){
    ll a, b;
    cin >> a >> b;
    a--, b--;
    h.emplace(a, b);
  }
  // aの入力
  rep(i, n-1){
    for(int j=i+1; j<n; j++){
      ll w;
      cin >> w;
      weight[{i, j}] = w;
    }
  }

  ll ans=0;
  for(auto p:g){
    if(h.count(p))
      continue;
    ans += weight[p];
    cout << "add:" << p.first << ", " << p.second << endl;
  }
  for(auto p:h){
    if(g.count(p))
      continue;
    ans += weight[p];
  }
  cout << ans << endl;
  return 0;
}