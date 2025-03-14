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

void print_rle(auto& rle){
  cout << "[character : length]" << endl;
  for(auto [c, len]:rle)
    cout << c << " : " << len << endl;;
  return;
}

// Make Code
const int si[] = {2, 1, -1, -2, -2, -1,  1,  2};
const int sj[] = {1, 2,  2,  1, -1, -2, -2, -1};

int main(){
  int64 n, m, a, b, ans;
  cin >> n >> m;
  set<pair<int64, int64>> spaces;
  rep(i, m){
    cin >> a >> b;
    a--, b--;
    spaces.emplace(a, b);
    rep(j, 8){
      int64 ni = a+si[j], nj = b+sj[j];
      if(ni<0 or n<=ni or nj<0 or n<=nj)
        continue;
      spaces.emplace(ni, nj);
    }
  }
  ans = n*n - spaces.size();
  cout << ans << endl;
  return 0;
}