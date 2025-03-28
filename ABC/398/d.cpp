//      (((                  )))
//    (((                      )))
//   (((                        )))
//  ((((                        ))))
//  ((((          (())          ))))
//   ((((      ((((  ))))      ))))
//     ((((   ((((    ))))   ))))
//        (((((          )))))

#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < (ll)n; ++i)
#define sort(vec) sort(vec.begin(), vec.end());
#define reverse(vec) reverse(vec.begin(), vec.end());
#define make_v(vec, m) vector<ll> vec(m);
#define make_vv(vec, m, n) vector<vector<ll>> vec(m, vector<ll>(n));
#define yes(flag) cout << (flag ? "Yes" : "No") << endl;
#define pd(ans) printf("%.12Lf\n", ans);
#define inf 100100100100100100LL

using namespace std;
using ll = int64_t;
struct edge {
  ll to;
  ll cost;
  edge(ll to, ll cost)
      : to(to), cost(cost) {}
};
using G = vector<vector<edge>>;
using P = pair<ll, ll>;
const ll mod = 1000000007LL;

template <class T, class U>
inline bool chmax(T& a, U b) {
  if(a < b) {
    a = static_cast<T>(b);
    return true;
  }
  return false;
}
template <class T, class U>
inline bool chmin(T& a, U b) {
  if(a > b) {
    a = static_cast<T>(b);
    return true;
  }
  return false;
}
template <class T>
inline T ceil(T a, T b) {
  return (a + b - 1) / b;
}

// Debug
void print_v(auto& vec) {
  cout << "[ ";
  for(auto v : vec)
    cout << v << " ";
  cout << ']' << endl;
  return;
}

void print_vv(auto& vec) {
  cout << "[ ";
  for(auto v : vec) {
    for(auto k : v)
      cout << k << " ";
    cout << endl;
  }
  cout << ']' << endl;
  return;
}

void print_rle(auto& rle) {
  cout << "[character : length]" << endl;
  for(auto [c, len] : rle)
    cout << c << " : " << len << endl;
  ;
  return;
}

// Make Code
const int dx[] = {-1, 0, 1, 0};
const int dy[] = {0, -1, 0, 1};

int main() {
  ll n, r, c;
  string s;
  cin >> n >> r >> c >> s;
  r--, c--;
  ll smoke_x = -r, smoke_y = -c;
  r+=n;
  c+=n;
  vector<vector<ll>> maze(2*n+1, vector<ll>(2*n+1, 0));
  maze[r][c]=1;

  auto num = [&](char c)->ll{
    // 煙と逆方向に移動
    if(c=='S')
      return 0;
    if(c=='E')
      return 1;
    if(c=='N')
      return 2;
    if(c=='W')
      return 3;
  };

  vector<ll> ans;
  rep(i, s.size()){
    ll buf = num(s[i]);
    // 人が移動する
    r+=dx[buf];
    c+=dy[buf];
    // 移動先に煙があるのかを判定
    if(maze[r][c]==1)
      ans.emplace_back(1);
    else
      ans.emplace_back(0);
    // 煙を生やす
    // 煙までの相対位置を更新
    smoke_x-=dx[buf];
    smoke_y-=dy[buf];
    maze[r+smoke_x][c+smoke_y]=1;
  }
  rep(i, n)
    cout << ans[i];
  cout << endl;
  return 0;
}