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
  int N;
  cin >> N;
  v(people, N+1);
  v(num, N+1);
  v(ans, N+1);
  // num, watcher, watched
  map<int, int> watcher_to_num{};
  map<int, int> num_to_watcher{};
  rep(i, 1, N+1)
    cin >> people[i];
  rep(i, 1, N+1)
    cin >> num[i];
  rep(i, 1, N+1){
    watcher_to_num[i] = num[i];
    num_to_watcher[num[i]] = i;
  }
  rep(i, 1, N+1)
    cout << watcher_to_num[people[num_to_watcher[i]]] << " ";
  cout << endl;
  return 0;
}