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
  int64 ans=0, mid;
  for(int64 i=0; i<n and i<m; i++){
    if(b[i]<0 or w[i]<0){
      mid=i;
      break;
    }
    else
      ans += b[i]+w[i];
    if(i==n-1)
      mid = n;
    if(i== m-1){
      mid = m-1;
      w[mid] = -inf;
    }
  }
  if(w[mid]<0){
    if(w[mid]==-inf)
      mid++;
    for(int64 i=mid; i<n; i++){
      if(b[i]<0)
        break;
      else
        ans += b[i];
    }
  }
  else{
    for(int64 i=mid; i<n and i<m; i++){
      if(b[i]+w[i]<0)
        break;
      else
        ans += b[i]+w[i];
    }
  }
  cout << ans << endl;
  return 0;
}