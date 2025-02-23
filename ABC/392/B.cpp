//      (((                  )))
//    (((                      )))
//   (((                        )))
//  ((((                        ))))
//  ((((          (())          ))))
//   ((((      ((((  ))))      ))))
//     ((((   ((((    ))))   ))))
//        (((((          )))))

#include <bits/stdc++.h>
#define rep(i, s, n)    for (int i = (s); i < (int)n; i++)
#define sort(vec) sort(vec.begin(), vec.end());
#define reverse(vec) reverse(vec.begin(), vec.end());
#define v( vec, m)    vector<int> vec(m);
#define vv(vec, m, n) vector<vector<int>> vec(m, vector<int>(n));
using namespace std;

int main(){
  int N, M, idx=0;
  cin >> N >> M;
  v(vec, M);
  vector<int> ans;
  rep(i, 0, M)
    cin >> vec[i];
  sort(vec);
  rep(i, 1, N+1){
    if(vec[idx] != i){
      ans.push_back(i);
    }
    else
      idx+=1;
  }
  cout << ans.size() << endl;
  rep(i, 0, ans.size())
    cout << ans[i] << " ";
  cout << endl;
  return 0;
}