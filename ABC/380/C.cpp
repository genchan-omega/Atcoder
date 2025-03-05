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
vector<pair<char, int>> rle(string& str){
	vector<pair<char, int>> str_r;
  for(char& c:str){
    if(str_r.size() and str_r.back().first == c)
      str_r.back().second++;
		else
			str_r.emplace_back(c, 1);
  }
  return str_r;
}

int main(){
  int64 n, k, cnt=0;
  string s;
  vector<pair<char, int>> str_r;
  cin >> n >> k >> s;
  str_r = rle(s);
  int one=0;
  rep(i, str_r.size())
  if(str_r[i].first=='1'){
    one++;
    if(one==k)
      swap(str_r[i-1], str_r[i]);
  }
  string ans;
  for(auto [c, num]:str_r)
    rep(i, num)
      ans += c;
  cout << ans << endl;
  return 0;
}