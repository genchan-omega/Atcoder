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
int main(){
  ll n;
  cin >> n;
  vector<vector<ll>> a(n, vector<ll>(n));
  rep(i, n)rep(j, n)
    cin >> a[i][j];
  ll m;
  cin >> m;
  set<P> rumor;
  rep(i, m){
    ll x, y;
    cin >> x >> y;
    x--, y--;
    rumor.emplace(x, y);
    rumor.emplace(y, x);
  }
  ll ans = inf;
  vector<ll> runner(n);
  rep(i, n)
    runner[i] = i;
  do{
    bool flag=true;
    ll now=0;
    rep(i, n-1){
      if(rumor.count({runner[i], runner[i+1]}))
        flag = false;
    }
    if(flag){
      rep(i, n)
        now += a[runner[i]][i];
      chmin(ans, now);
    }
      
  }while (next_permutation(runner.begin(), runner.end()));
  
  if(ans==inf)
    cout << -1 << endl;
  else
    cout << ans << endl;
  return 0;
}