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

void print_rle(auto& rle){
  cout << "[character : length]" << endl;
  for(auto [c, len]:rle)
    cout << c << " : " << len << endl;;
  return;
}

// Make Code
const int si[] = {-1,  0, 1, 0};
const int sj[] = { 0, -1, 0, 1};
int64 h, w;

// (現在の座標), 移動回数, maze
int64 dfs(int64 ni, int64 nj, int64 k, vector<string> maze){
  if(k==0)
    return 1;
  int64 num=0;
  maze[ni][nj]='#';
  rep(i, 4){
    int64 nni = ni+si[i], nnj = nj + sj[i];
    if(nni<0 or h<=nni or nnj<0 or w<=nnj)
      continue;
    if(maze[nni][nnj]=='#')
      continue;
    num += dfs(nni, nnj, k-1, maze);
  }
  return num;
}

int main(){
  int64 k, ans=0;
  cin >> h >> w >> k;
  vector<string> maze(h);
  rep(i, h)
    cin >> maze[i];
  rep(i, h)rep(j, w){
    if(maze[i][j]=='#')
      continue;
    ans += dfs(i, j, k, maze);
  }
  cout << ans << endl;
  return 0;
}