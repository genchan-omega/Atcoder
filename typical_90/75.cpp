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
#define inf 100100100100100100LL

using namespace std;
using ll = int64_t;
struct edge{
  ll to;
  ll cost;
  edge(ll to, ll cost) : to(to), cost(cost) {}
};
using G = vector<vector<edge>>;
using P = pair<ll, ll>;

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
const ll mod = 1000000007LL;

int main(){
  ll n;
  cin >> n;
  vector<P> primes;
  auto prime_factorize = [&](ll n){
    vector<P> ret;
    for(ll i=2; i*i<=n; i++){
      if(n%i)
        continue;
      ll exp=0;
      while(n%i==0){
        exp++;
        n/=i;
      }
      // cout << i << " " << exp << endl;
      ret.emplace_back(i, exp);
    }
    if(n!=1)
    ret.emplace_back(n, 1);
    return ret;
  };
  primes = prime_factorize(n);
  
  ll buf=0, ans=0;
  for(auto[a, exp]:primes)
    buf += exp;
  while(1){
    if(1<<ans >= buf)
      break;
    ans++;
  }
  cout << ans << endl;
  return 0;
}