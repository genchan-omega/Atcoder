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

template<class T> inline bool chmax(T& a, T b){if(a < b) {a = b; return 1;} return 0;}
template<class T> inline bool chmin(T& a, T b){if(a > b) {a = b; return 1;} return 0;}
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
  ll n;
  cin >> n;
  G graph(n);
  rep(i, n-1){
    ll a, b;
    cin >> a >> b;
    a--, b--;
    graph[a].emplace_back(b, 1);
    graph[b].emplace_back(a, 1);
  }

  auto bfs = [&](ll x)->P{
    vector<ll> dist(n, -1);
    queue<ll> q;
    dist[x]=0;
    q.emplace(x);
    while(q.size()){
      ll v = q.front();
      q.pop();
      for(auto [nv, w]:graph[v]){
        if(dist[nv]!=-1)
          continue;
        dist[nv] = dist[v] + w;
        q.emplace(nv);
      }
    }
    auto it = max_element(dist.begin(), dist.end()) - dist.begin();
    auto max_num = *max_element(dist.begin(), dist.end());
    return {it, max_num};
  };
  auto [max_1, ig_1] = bfs(0);
  auto [ig_2, ans]   = bfs(max_1);
  cout << ans+1 << endl;
  return 0;
}