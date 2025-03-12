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
int64 length(int64 x1, int64 y1, int64 x2, int64 y2){
  return abs(x1-x2)*abs(x1-x2) + abs(y1-y2)*abs(y1-y2);
}

bool solve(int64 x1, int64 y1, int64 x2, int64 y2, int64 x3, int64 y3){
  int64 a = length(x1, y1, x2, y2),
        b = length(x2, y2, x3, y3),
        c = length(x3, y3, x1, y1);
  if(a+b==c)
    return true;
  return false;
}

int main(){
  vector<int64> x(3);
  vector<int64> y(3);
  rep(i, 3)
    cin >> x[i] >> y[i];
  rep(i, 3){
    if(solve(x[i%3], y[i%3], x[(i+1)%3], y[(i+1)%3], x[(i+2)%3], y[(i+2)%3])){
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}