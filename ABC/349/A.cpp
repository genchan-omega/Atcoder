#include <bits/stdc++.h>
#define rep(i, s, n)    for (int i = (s); i < (int)n; i++)
#define sort(vec) sort(vec.begin(), vec.end());
#define reverse(vec) reverse(vec.begin(), vec.end());
using namespace std;

int main() {
  int N, buf, sum=0;
  cin >> N;
  rep(i, 0, N-1){
    cin >> buf;
    sum += buf;
  }
  cout << -sum << endl;
}