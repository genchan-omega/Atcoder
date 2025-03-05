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
      cout << k << " ";
    cout << endl;
  }
  cout << ']' << endl;
  return;
}

// Make Code
int main(){
  int64 n;
  cin >> n;
  // vector<string> s(n);
  vector<string> s(n, string(n, '#'));
  for(int k=1; k < n/2+1; k+=2){
    for(int i=k; i<n-k; i++){
      for(int j=k; j<n-k; j++){
        s[i][j]='.';
      }
    }
    for(int i=k+1; i< n-k-1; i++){
      for(int j=k+1; j<n-k-1; j++){
        s[i][j]='#';
      }
    }
  }

  rep(i, n)
    cout << s[i] << endl;
  return 0;
}