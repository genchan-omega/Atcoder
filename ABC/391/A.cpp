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
  string S;
  cin >> S;
  for(char c:S){
    if(c=='N') cout << 'S';
    if(c=='E') cout << 'W';
    if(c=='W') cout << 'E';
    if(c=='S') cout << 'N';
  }
  cout << endl;
  return 0;
}