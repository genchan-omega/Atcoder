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
  int64 q, type, num;
  deque<int64> s;
  cin >> q;
  s.push_back(0);
  rep(i, q){
    cin >> type;
    if(type==1){
      cin >> num;
      num = num + s.back();
      s.push_back(num);
    }
    else if(type==2)
      s.pop_front();
    else{
      cin >> num;
      num--;
      cout << s[num] - s[0] << endl;
    }
  }
  return 0;
}