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
bool solve(){
  int64 k, cnt=0;
  cin >> k;
  string s, t;
  cin >> s >> t;
  // bool flg = true;
  if(s.size() > t.size())
    swap(s,t);
  if(t.size()-s.size()>=2){
    return false;
  }
  for(int i=0, j=0; i < s.size(); i++, j++){
    if(s[i]!=t[j]){
      if(s[i] == t[j+1]){
        j++;
        cnt++;
      }
      else if(s[i+1] == t[j+1])
        cnt++;
      else
        return false;
    }
  }
  if(cnt<2)
    return true;
  return false;
}

int main(){
  yes(solve());
  return 0;
}