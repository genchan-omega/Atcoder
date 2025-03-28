//      (((                  )))
//    (((                      )))
//   (((                        )))
//  ((((                        ))))
//  ((((          (())          ))))
//   ((((      ((((  ))))      ))))
//     ((((   ((((    ))))   ))))
//        (((((          )))))

#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < (ll)n; ++i)
#define sort(vec) sort(vec.begin(), vec.end());
#define reverse(vec) reverse(vec.begin(), vec.end());
#define make_v(vec, m) vector<ll> vec(m);
#define make_vv(vec, m, n) vector<vector<ll>> vec(m, vector<ll>(n));
#define yes(flag) cout << (flag ? "Yes" : "No") << endl;
#define pd(ans) printf("%.12Lf\n", ans);
#define inf 100100100100100100LL

using namespace std;
using ll = int64_t;
struct edge {
  ll to;
  ll cost;
  edge(ll to, ll cost)
      : to(to), cost(cost) {}
};
using G = vector<vector<edge>>;
using P = pair<ll, ll>;
const ll mod = 1000000007LL;

template <class T, class U>
inline bool chmax(T& a, U b) {
  if(a < b) {
    a = static_cast<T>(b);
    return true;
  }
  return false;
}
template <class T, class U>
inline bool chmin(T& a, U b) {
  if(a > b) {
    a = static_cast<T>(b);
    return true;
  }
  return false;
}
template <class T>
inline T ceil(T a, T b) {
  return (a + b - 1) / b;
}

// Debug
void print_v(auto& vec) {
  cout << "[ ";
  for(auto v : vec)
    cout << v << " ";
  cout << ']' << endl;
  return;
}

void print_vv(auto& vec) {
  cout << "[ ";
  for(auto v : vec) {
    for(auto k : v)
      cout << k << " ";
    cout << endl;
  }
  cout << ']' << endl;
  return;
}

void print_rle(auto& rle) {
  cout << "[character : length]" << endl;
  for(auto [c, len] : rle)
    cout << c << " : " << len << endl;
  ;
  return;
}

// Make Code
int main() {
  ll n;
  cin >> n;
  vector<P> people;
  rep(i, n){
    ll a;
    cin >> a;
    people.emplace_back(a, i+1);
  }
  sort(people);
  reverse(people);
  if(people[0].first!=people[1].first){
    cout << people[0].second << endl;
    return 0;
  }
  for(ll i=1; i<n-1; i++){
    if(people[i-1].first==people[i].first or people[i].first==people[i+1].first)
      continue;
    cout << people[i].second << endl;
    return 0;
  }
  if(people[n-2].first!=people[n-1].first){
    cout << people[n-1].second << endl;
    return 0;
  }
  cout << -1 << endl;
  return 0;
}