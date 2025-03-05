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
int main(){
  int64 n, m, ans=0;
  cin >> n >> m;
  vector<pair<int64, int64>> stones(m+1);
  rep(i, m){
    cin >> stones[i].first;
    stones[i].first--;
  }
  rep(i, m)
    cin >> stones[i].second;
  stones[m].first  = n;
  stones[m].second = 1;
  sort(stones);
  int64 now=0;
  rep(i, m){
    int64 wid = stones[i+1].first - stones[i].first;
    now += stones[i].second;
    if(now<wid){
      cout << -1 << endl;
      return 0;
    }
    now -= wid;
    ans += wid*(wid-1)/2;
    ans += wid*now;
  }
  if(now!=0)
    cout << -1 << endl;
  else
    cout << ans << endl;
  return 0;
}