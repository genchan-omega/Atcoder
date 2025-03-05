//      (((                  )))
//    (((                      )))
//   (((                        )))
//  ((((                        ))))
//  ((((          (())          ))))
//   ((((      ((((  ))))      ))))
//     ((((   ((((    ))))   ))))
//        (((((          )))))

#include <bits/stdc++.h>
#define rep(i, n)    for (int i = 0; i < (int)n; i++)
#define sort(vec) sort(vec.begin(), vec.end());
#define reverse(vec) reverse(vec.begin(), vec.end());
#define v( vec, m)    vector<int> vec(m);
#define vv(vec, m, n) vector<vector<int>> vec(m, vector<int>(n));
using int64 = int64_t;
using namespace std;

int main(){
  int64 n, m;
  cin >> n >> m;
  vector<vector<char>> s(n, vector<char>(n));
  vector<vector<char>> t(n, vector<char>(n));
  rep(i, n)rep(j, n)
    cin >> s[i][j];
  rep(i, m)rep(j, m)
    cin >> t[i][j];
  rep(i, n)rep(j, n){
    bool flag=true;
    if(s[i][j] == t[0][0]){
      rep(k, m){
        rep(l, m){
        if(s[i+k][j+l]!=t[k][l])
          flag = false;
        }
      }
      if(flag){
        cout << i+1 << ' ' << j+1 << endl;
        return 0;
      }
    }
  }
  return 0;
}