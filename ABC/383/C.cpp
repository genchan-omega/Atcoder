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
#define inf 1e9
using int64 = int64_t;
using namespace std;

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
      cout << k << " " << endl;
    cout << endl;
  }
  cout << ']' << endl;
  return;
}

// Make Code
int main(){
  int64 h, w, d, ans=0;
  cin >> h >> w >> d;
  vector<string> s(h);
  rep(i, h)
    cin >> s[i];
  int di[] = {-1, 0, 1, 0};
  int dj[] = {0, -1, 0, 1};
  // BFS
  vector<vector<int>> dict(h, vector<int>(w, inf));
  queue<pair<int, int>> que;
  rep(i, h)rep(j, w)
    if(s[i][j] == 'H'){
      que.emplace(i, j);
      dict[i][j]=0;
    } 
  while(!que.empty()){
    auto [i, j] = que.front();
    que.pop();
    rep(k, 4){
      int64 ni = i+di[k], nj = j+dj[k];
      if(ni<0 or h<=ni or nj<0 or w<=nj)
        continue;
      if(s[ni][nj]=='#')
        continue;
      if(dict[ni][nj] != inf)
        continue;
      dict[ni][nj] = dict[i][j] + 1;
      que.emplace(ni, nj);
    }
  }
  rep(i, h)rep(j, w)
    if(dict[i][j] <= d)
      ans++;
  cout << ans << endl;  
  return 0;
}