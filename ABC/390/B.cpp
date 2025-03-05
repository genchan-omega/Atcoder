//      (((                  )))
//    (((                      )))
//   (((                        )))
//  ((((                        ))))
//  ((((          (())          ))))
//   ((((      ((((  ))))      ))))
//     ((((   ((((    ))))   ))))
//        (((((          )))))

#include <bits/stdc++.h>
#define rep(i, n)    for (int64 i = 0; i < (int)n; ++i)
#define sort(vec) sort(vec.begin(), vec.end());
#define reverse(vec) reverse(vec.begin(), vec.end());
#define v( vec, m)    vector<int> vec(m);
#define vv(vec, m, n) vector<vector<int>> vec(m, vector<int>(n));
using int64 = int64_t;
using namespace std;

bool solve(){
  int64 h, w;
  int64 lm=1e9, rm=-1e9, um=1e9, dm=-1e9, buf;
  cin >> h >> w;
  vector<string> s(h);
  rep(i, h){
    cin >> s[i];
  }
  rep(i, h){
    buf = s[i].find_first_of('#');
    if(buf!=-1)
      lm = min(buf, lm);
    buf = s[i].find_last_of('#');
    if(buf!=-1)
      rm = max(buf, rm);
    if(s[i].find('#')!=-1)
      um = min(i, um);
    if(s[i].find('#')!=-1)
      dm = max(i, dm);
  }
  for(int i=um; i<dm+1; ++i)
    for(int j=lm; j<rm+1; ++j)
      if(s[i][j]=='.')
        return false;
  return true;
}

int main(){
  if(solve())
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}