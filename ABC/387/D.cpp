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
  int64 n, now, ans, take=0;
  cin >> n;
  make_v(a, n);
  make_v(give, n);
  rep(i, n)
    cin >> a[i];
  rep(i, n){
    now = a[i] + take;
    // 全員に渡しきれない時
    if(now <= n-i-1){
      give[i+now]++;
      a[i] = 0;
    }
    // 渡せる時
    else{
      a[i] = now - (n-i-1);
    }
    take -= give[i];
    take++;
  }
  for(auto v:a)
    cout << v << " ";
  cout << endl;
  return 0;
}