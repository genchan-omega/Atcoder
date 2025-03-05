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
  int64 x, now=1, ans=1;
  cin >> x;
  bool flag=true;
  while(flag){
    if(x == now)
      flag = false;
    else{
      now *= ans;
      ans++;
    }
  }
  cout << ans-1 << endl;
  return 0;
}