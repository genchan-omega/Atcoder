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
#define inf 1e11

using namespace std;
using int64 = int64_t;
using G = vector<vector<int64>>;
using P = pair<int64,int64>;

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
int main(){
  int64 n, m;
  cin >> n >> m;
  vector<int64> b(n), w(m);
  rep(i, n)
    cin >> b[i];
  rep(i, m)
    cin >> w[i];
  sort(b);
  reverse(b);
  sort(w);
  reverse(w);
  int64 ans=0, sumb=0, sumw=0, maxw=0;
  rep(i, n){
    sumb+=b[i];
    if(i<m)
      sumw+=w[i];
    chmax(maxw, sumw);
    chmax(ans, sumb+maxw);
  }
  cout << ans << endl;
  return 0;
}