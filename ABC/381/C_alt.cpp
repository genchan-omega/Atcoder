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
vector<pair<char, int64>> rle(const string& str){
  vector<pair<char, int64>> str_r;
  int64 n = str.size();
  for(int64 l=0; l<n; ){
    char c = str[l];
    int64 cnt = 0;
    for(;l<n;cnt++, l++)
      if(str[l]!=c)
        break;
    str_r.emplace_back(c, cnt);
  }
  return str_r;
}

int main(){
  int64 n, now, ans = -inf;
  string s;
  vector<pair<char, int64>> s_rle;
  cin >> n >> s;
  s = '$' + s + '$';
  n = s.size();
  s_rle = rle(s);
  rep(i, n-2){
    if(s_rle[i].first=='1' and s_rle[i+1].first=='/' and s_rle[i+2].first=='2' and s_rle[i+1].second==1){
      now = 2*min(s_rle[i].second, s_rle[i+2].second)+1;
      chmax(ans, now);
    }
  }
  cout << ans << endl;
  return 0;
}