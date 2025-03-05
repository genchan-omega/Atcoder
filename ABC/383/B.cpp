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
  int64 h, w, d, ans=-1e9;
  cin >> h >> w >> d;
  vector<string> s(h);
  rep(i, h)
    cin >> s[i];
  rep(i1, h)rep(j1, w){
    if(s[i1][j1]=='#')
      continue;
    rep(i2, h)rep(j2, w){
      if(s[i2][j2]=='#')
        continue;
      if(i1==i2 and j1==j2)
        continue;
      // 確認するマス
      int64 cnt=0;
      rep(i3, h)rep(j3, w){
        if(s[i3][j3]=='#')
          continue;
        bool flag=false;
        if(abs(i3-i1)+abs(j3-j1) <= d)  
          flag=true;
        if(abs(i3-i2)+abs(j3-j2) <= d)
          flag=true;
        if(flag)
          cnt++;
      }
      chmax(ans, cnt);
    }
  }
  cout << ans << endl;  
  return 0;
}