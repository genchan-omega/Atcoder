//      (((                  )))
//    (((                      )))
//   (((                        )))
//  ((((                        ))))
//  ((((          (())          ))))
//   ((((      ((((  ))))      ))))
//     ((((   ((((    ))))   ))))
//        (((((          )))))

#include <bits/stdc++.h>
#define rep(i, n)          for (int64 i = 0; i < (int)n; ++i)
#define sort(vec)          sort(vec.begin(), vec.end());
#define reverse(vec)       reverse(vec.begin(), vec.end());
#define make_v (vec, m)    vector<int> vec(m);
#define make_vv(vec, m, n) vector<vector<int>> vec(m, vector<int>(n));
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
  string s;
  cin >> s;
  cout << s[0] << "UPC" << endl;
  return 0;
}