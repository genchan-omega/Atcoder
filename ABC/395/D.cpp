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
#define inf 1e9
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
      cout << k << " ";
    cout << endl;
  }
  cout << ']' << endl;
  return;
}

// Make Code
int main(){
  int64 n, q, type, a, b;
  cin >> n >> q;
  vector<int64> pigeon(n);
  vector<int64> place(n);
  vector<int64> place_num(n);
  vector<int64> ans;
  rep(i, n){
    pigeon[i] = i;
    place[i] = i;
    place_num[i] = i;
  }
  rep(i, q){
    cin >> type;
    switch (type){
    case 1:
      cin >> a >> b;
      a--; b--;
      pigeon[a] = place_num[b];
      break;
    case 2:
      cin >> a >> b;
      a--; b--;
      swap(place[place_num[a]], place[place_num[b]]);
      swap(place_num[a], place_num[b]);
      break;
    case 3:
      cin >> a;
      a--;
      ans.push_back(place[pigeon[a]]+1);
      break;
    }
  }
  rep(i, ans.size())
    cout << ans[i] << endl;
  return 0;
}