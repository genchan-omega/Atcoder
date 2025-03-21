#include <bits/stdc++.h>
using namespace std;
// struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
#include <vector>
using ll = long long;
void print_v(auto& vec){
  cout << "[ ";
  for(auto v:vec)
    cout << v << " ";
  cout << ']' << endl;
  return;
}

int main(){
  int n;
  cin >> n;

  auto eratosthenes = [&](ll n){
    vector<bool> is_prime(n+1, true);
    vector<ll> primes;
    for(ll i=2; i<n+1; i++){
      if(is_prime[i]){
        for(ll j=i*i; j<n+1; j+=i)
          is_prime[j] = false;
        primes.emplace_back(i);
      }
    }
    return primes;
  };

  // for(auto x: eratosthenes(n))
  //   cout << x << " ";
  vector primes = eratosthenes(n);
  print_v(primes);
  return 0;
}