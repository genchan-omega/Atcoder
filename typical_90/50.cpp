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
#define pd(ans) printf("%.12Lf\n", ans);
#define inf 1e18

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
  ll n, l;
  cin >> n >> l;
  vector<ll> fact(n+1);
  fact[0]=fact[1]=1;
  for(ll i= 1; i<n; i++)
    fact[i+1]=fact[i]*(i+1)%mod;

  auto power = [&](ll base, ll exp, ll mod)->ll{
    ll result = 1;
    while(exp > 0) {
      if(exp%2==1)
        result = result*base%mod;
      base=base*base%mod;
      exp/=2;
    }
    return result;
  };

  ll ans=0;
  rep(k, n/l+1){
    // ans += fact[n-k*l+k]/(fact[k]*fact[n-k*l]);
    ll inv_k     = power(fact[k], mod-2, mod);
    ll inv_n_k_l = power(fact[n-k*l], mod-2, mod);
    ans += fact[n-k*l+k]*inv_k%mod*inv_n_k_l%mod;
    ans %= mod;
  }

  cout << ans << endl;
  return 0;
}