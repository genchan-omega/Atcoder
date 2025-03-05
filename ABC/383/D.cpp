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
// nまでの素数を列挙
vector<int64> Sieve_of_Eratosthenes(int64 n){
  vector<int64> primes;
  for(int64 i=2; i*i<n+1; ++i)
    if(n%i==0)
      primes.push_back(i);
  return primes;
}

int main(){
  int64 n, ans=0;
  cin >> n;
  vector<int64> primes = Sieve_of_Eratosthenes(n);
  print_v(primes);
  for(int64 i=0; i<primes.size(); i++)
    for(int64 j=i+1; j<primes.size(); j++)
      if(primes[i]*primes[i]*primes[j]*primes[j] <= n)
        ans++;
  for(int64 i=0; i<primes.size(); i++){
    int64 x=1;
    rep(j, 8)
      x*=primes[i];
    if(x<=n)
      ans++;
  }
  cout << ans << endl;
  return 0;
}