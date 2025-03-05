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
bool solve(){
  int64 buf;
  bool flag_1=false, flag_2=false, flag_3=false;
  make_v(vec, 13);
  rep(i, 4){
    cin >> buf;
    buf--;
    vec[buf]++;
  }
  rep(i, 13){
    if(vec[i]==1)
      flag_1 = true;
    else if(vec[i]==2)
      flag_2 = true;
    else if(vec[i]==3)
      flag_3 = true;
  }
  if((flag_1 and flag_3) or (!flag_1 and flag_2))
    return true;
  return false;
}

int main(){
  if(solve())
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}