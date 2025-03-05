//      (((                  )))
//    (((                      )))
//   (((                        )))
//  ((((                        ))))
//  ((((          (())          ))))
//   ((((      ((((  ))))      ))))
//     ((((   ((((    ))))   ))))
//        (((((          )))))

#include <bits/stdc++.h>
#define rep(i, n)          for(int64 i = 0; i < (int64)n; ++i)
#define sort(vec)          sort(vec.begin(), vec.end());
#define reverse(vec)       reverse(vec.begin(), vec.end());
#define make_v( vec, m)    vector<int64> vec(m);
#define make_vv(vec, m, n) vector<vector<int64>> vec(m, vector<int64>(n));
#define yes(flag)          cout << (flag ? "Yes" : "No") << endl;
#define inf 1e9
using int64 = int64_t;
using namespace std;

template<class T> inline bool chmax(T& a, T b){if(a < b) {a = b; return 1;} return 0;}
template<class T> inline bool chmin(T& a, T b){if(a > b) {a = b; return 1;} return 0;}

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
int64 tree(int64 l, int64 r, int64 k){
  int64 res=0;
  while(l+1<r){
    int64 c = (l+r)/2;
    if(k<c)
      r=c;
    else
      l=c, res++;
  }
  return res;
}

char flip(char c){
  if(islower(c))
    return c-'a'+'A';
  return c-'A'+'a';
}

int main(){
  string s;
  int64 q, k, n, si, num;
  cin >> s >> q;
  n = s.size();
  rep(qi, q){
    cin >> k;
    k--;
    si = k%n;
    k /= n;
    num = tree(0, int64(1)<<60, k);
    char ans = s[si];
    if(num%2)
      ans = flip(ans);
    cout << ans << " ";
  }
  cout << endl;
  return 0;
}