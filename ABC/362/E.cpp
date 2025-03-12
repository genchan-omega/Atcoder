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

struct edge{
  int64 to;
  int64 cost;
};

using namespace std;
using int64 = int64_t;
using G = vector<vector<edge>>;
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
  int64 n, m, x, u, v;
  cin >> n >> m >> x;

  G graph(n); //nは頂点の個数
  vector<int> dist(n, inf); // nは頂点の個数
  priority_queue<P, vector<P>, greater<P>> pq; // (距離，コスト)

  //初期条件
  dist[0] = 0; //初期地点までのコストは0
  pq.emplace(0, 0);

  rep(i, m){
    cin >> u >> v;
    graph[i].emplace_back(u, v); // uからvへの辺を張る
  }
  





  return 0;
}