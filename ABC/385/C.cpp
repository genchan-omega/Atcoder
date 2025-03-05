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
  int64 n, ans=1;
  cin >> n;
  make_v(h, n);
  rep(i, n)
    cin >> h[i];
  for(int64 w=1; w<=n; w++){       //間隔
    for(int64 i=0; i<w; i++){      //先頭のidx
      int64 val=h[i], len=1;
      for(int64 j=i+w; j<n; j+=w){ //比較idx
        if(val==h[j])
          len++;
        else{
          len=1;
          val=h[j];
        }
        ans = max(ans, len);
      }
    }
  }
  cout << ans << endl;
  return 0;
}