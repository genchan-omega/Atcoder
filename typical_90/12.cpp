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
const int dx[] = {0, -1, 0, 1};
const int dy[] = {-1, 0, 1, 0};

int main(){
  ll h, w, q;
  cin >> h >> w >> q;
  vector<vector<char>> maze(h, vector<char>(w, '#'));
  
  auto dfs = [&](auto dfs, P a, P b, vector<vector<char>> maze){
    if(a==b)
      return true;
    rep(i, 4){
      ll nx = a.first + dx[i];
      ll ny = a.second + dy[i];
      if(nx<0 or nx>= h or ny<0 or ny>=w)
        continue;
      if(maze[nx][ny]=='#')
        continue;
      maze[a.first][a.second]='#';
      if(dfs(dfs, {nx, ny}, b, maze))
        return true;
    }
    return false;
  };

  rep(qi, q){
    ll type;
    P a, b;
    cin >> type;
    switch(type){
    case 1:
      cin >> a.first >> a.second;
      a.first--, a.second--;
      maze[a.first][a.second] = '-';
      break;

    case 2:
      cin >> a.first >> a.second >> b.first >> b.second;
      a.first--, a.second--, b.first--, b.second--;
      if(maze[a.first][a.second]=='#' or maze[b.first][b.second]=='#')
        cout << "No" << endl;
      else{
        if(dfs(dfs, a, b, maze))
          cout << "Yes" << endl;
        else
          cout << "No" << endl;
      }
      break;
    }
  }
  return 0;
}