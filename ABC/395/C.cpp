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
#define inf 1e9
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
      cout << k << " ";
    cout << endl;
  }
  cout << ']' << endl;
  return;
}

// Make Code
int main(){
  int64 n, ans, a;
  cin >> n;
  vector<int64> idx(1e6, -1);
  vector<int64> dict(1e6, inf);
  rep(i, n){
    cin >> a;
    if(idx[a-1]==-1)
      idx[a-1] = i;
    else{
      dict[a-1] = min(dict[a-1], i-idx[a-1]+1);
      idx[a-1] = i;
    }
  }

  ans = *min_element(dict.begin(), dict.end());
  if(ans == inf)
    cout << -1 << endl;
  else
    cout << ans << endl;
  return 0;
}