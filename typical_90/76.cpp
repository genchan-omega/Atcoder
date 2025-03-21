//      (((                  )))
//    (((                      )))
//   (((                        )))
//  ((((                        ))))
//  ((((          (())          ))))
//   ((((      ((((  ))))      ))))
//     ((((   ((((    ))))   ))))
//        (((((          )))))

#include <bits/stdc++.h>
#define rep(i, n)          for(ll i = 0; i < (ll)n; ++i)
#define sort(vec)          sort(vec.begin(), vec.end());
#define reverse(vec)       reverse(vec.begin(), vec.end());
#define make_v( vec, m)    vector<ll> vec(m);
#define make_vv(vec, m, n) vector<vector<ll>> vec(m, vector<ll>(n));
#define yes(flag)          cout << (flag ? "Yes" : "No") << endl;
#define pd(ans)            printf("%.12Lf\n", ans);
#define inf                100100100100100100LL

using namespace std;
using ll = int64_t;
struct edge{
  ll to;
  ll cost;
  edge(ll to, ll cost) : to(to), cost(cost) {}
};
using G = vector<vector<edge>>;
using P = pair<ll, ll>;
const ll mod = 1000000007LL;

template<class T> inline bool chmax(T& a, T b){if(a < b) {a = b; return 1;} return 0;}
template<class T> inline bool chmin(T& a, T b){if(a > b) {a = b; return 1;} return 0;}
template<class T> inline T ceil(T a, T b){return (a+b-1)/b;}

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

void print_rle(auto& rle){
  cout << "[character : length]" << endl;
  for(auto [c, len]:rle)
    cout << c << " : " << len << endl;;
  return;
}

// Make Code
bool solve(){
  ll n;
  cin >> n;
  vector<ll> a(n);
  rep(i, n){
    cin >> a[i];
    a[i]*=10;
  }
  ll sum=0;
  rep(i, n)
    sum+=a[i];
  sum/=10;

  ll now=a[0], l=0;
  for(ll r=l+1; !(l==r) and l<n; ){
    while(now<sum){
      now += a[r];
      r++;
      r%=n;
      cout << "l: " << l << ", r: " << r << endl;
    }
    if(now==sum)
      return true;
    while(now>sum){
      now -= a[l];
      l++;
      cout << "l: " << l << ", r: " << r << endl;
    }
    if(now==sum)
      return true;
    cout << "l: " << l << ", r: " << r << endl;
  }
  return false;
}

int main(){
  yes(solve());
  return 0;
}