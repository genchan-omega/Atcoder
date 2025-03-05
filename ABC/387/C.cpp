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
int64 myPow(int64 p, int64 q){
  int64 num=1;
  rep(i, q)
    num *= p;
  return num;
}

int64 f(int64 n){
  string num;
  int64 ans = 0;
  for(char c:to_string(n))
    num.push_back(c);
  for(int i=1; i<num.size()-1; ++i) //桁数
    for(int j=1; j<10; ++j)         //先頭の数
      ans += myPow(j, i-1);
  for(int64 i=1; i<num.size()-1; ++i){
    if(num[i]>=num[0]){
      ans += myPow(int(num[0]), num.size()-i);
    }
    for(int64 j=0; j<int(num[i])-1;++j){
      ans += myPow();
    }

  }

  return ans;
}



int main(){
  int64 l, r, ans = 0;
  cin >> l >> r;
    
  cout << f(r) - f(l-1) << endl;
  return 0;
}