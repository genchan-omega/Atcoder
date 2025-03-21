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
  cout << "[ " << endl;
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
const ll dx[] = {0, -1, 0, 1};
const ll dy[] = {-1, 0, 1, 0};

int main(){
  ll h, w;
  cin >> h >> w;
  vector<vector<char>> maze(h, vector<char>(w));
  rep(i, h)rep(j, w)
    cin >> maze[i][j];
  
  ll ans = 0;
  auto dfs = [&](auto dfs, P s, P g, vector<vector<char>> maze, ll cnt)->void{
    rep(i, 4){
      ll nx = s.first  + dx[i];
      ll ny = s.second + dy[i];
      if(nx<0 or nx>=h or ny<0 or ny>=w)
        continue;
      if(nx==g.first and ny==g.second)
        chmax(ans, cnt);
      if(maze[nx][ny]=='#')
        continue;
      maze[s.first][s.second] = '#';
      dfs(dfs, {nx, ny}, {g.first, g.second}, maze, cnt+1);
    }
  };
  rep(i, h)rep(j, w)
    if(maze[i][j]!='#')
      dfs(dfs, {i, j}, {i, j}, maze, 0);
  if(ans<3)
    cout << -1 << endl;
  else
    cout << ans+1 << endl;

  return 0;
}