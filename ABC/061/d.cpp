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
  ll n, m;
  cin >> n >> m;
  G graph(n);
  rep(i, m){
    ll u, v, w;
    cin >> u >> v >> w;
    u--, v--;
    graph[u].emplace_back(v, w);
  }
  vector<ll> dist(n, -1e18);
  dist[0] = 0; 
  // n回繰り返す
  rep(i, n)
    // 着目する頂点を決定する
    rep(pos, n)
      // その頂点からいける全ての頂点までの距離を更新
      for(auto [next_v, w]:graph[pos])
        dist[next_v] = max(dist[next_v], dist[pos]+w);
  // 正閉路の存在
  vector<bool> circuit(n);
  // n回繰り返してもまだ大きくできるなら
  rep(pos, n)
    for(auto [next_v, w]:graph[pos])
      if(dist[next_v]<dist[pos]+w)
        circuit[next_v]=true;
  rep(i, n)
    rep(pos, n)
      // 閉路に接続した部分について
      if(circuit[pos])
        for(auto [next_v, w]:graph[pos])
          circuit[next_v] = true;
  if(circuit[n-1])
    cout << "inf" << endl;
  else
    cout << dist[n-1] << endl;
  return 0;
}