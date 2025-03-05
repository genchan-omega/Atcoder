//      (((                  )))
//    (((                      )))
//   (((                        )))
//  ((((                        ))))
//  ((((          (())          ))))
//   ((((      ((((  ))))      ))))
//     ((((   ((((    ))))   ))))
//        (((((          )))))

#include <bits/stdc++.h>
#define rep(i, n)          for (int64 i = 0; i < (int64)n; ++i)
#define sort(vec)          sort(vec.begin(), vec.end());
#define reverse(vec)       reverse(vec.begin(), vec.end());
#define make_v( vec, m)    vector<int64> vec(m);
#define make_vv(vec, m, n) vector<vector<int64>> vec(m, vector<int64>(n));
#define yes(flag)          cout << (flag ? "Yes" : "No") << endl;
using int64 = int64_t;
using namespace std;

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
  int64 h, w, x, y, ans=0;
  cin >> h >> w >> x >> y;
  x--; y--;
  vector<string> s(h);
  rep(i, h)
    cin >> s[i];
  string t;
  cin >> t;
  for(char c:t){
    switch (c){
      case 'U':
        if(s[x-1][y]!='#')
          x--;
        break;
      case 'D':
        if(s[x+1][y]!='#')
          x++;
        break;
      case 'L':
        if(s[x][y-1]!='#')
          y--;
        break;
      case 'R':
        if(s[x][y+1]!='#')
          y++;
      break;
    }
    if(s[x][y]=='@'){
      s[x][y]='$';
      ans++;
    }
  }
  cout << x+1 << " " <<  y+1 << " " << ans << endl;
  return 0;
}