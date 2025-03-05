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
  int64 n, q, p, h, buf, ans=0;
  cin >> n >> q;
  vector<int> place(n);
  vector<int> people(n, 1);
  rep(i, n)
    place[i] = i;
  rep(i, q){
    cin >> buf;
    // cout << buf;
    if(buf==1){
      cin >> p >> h;
      if(people[place[p-1]]==2)
        ans--;
      people[place[p-1]]--;
      place[p-1] = h-1;
      people[place[p-1]]++;
      if(people[place[p-1]]==2)
        ans++;
    }
    else{
      cout << ans << endl;
    }
  }
  return 0;
}