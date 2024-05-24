#include <bits/stdc++.h>
#define rep(i, s, n)    for (int i = (s); i < (int)n; i++)
#define sort(vec) sort(vec.begin(), vec.end());
#define reverse(vec) reverse(vec.begin(), vec.end());
#define test_print(vec, n) rep(i, 0, n) cout << vec[i] << " "; cout << endl;
using namespace std;

int main() {
  int N, Q, count = 0, buf=1;
  cin >> N >> Q;
  vector<int> T(Q);
  rep(i, 0, Q)  cin >> T[i];
  sort(T);
  rep(i, 0, Q-1){
    if(T[i]==T[i+1]){
      buf++;
    }
    else{
      if(buf%2 == 1)
        count++;
      buf=1;
    }
  }
  if(buf%2 == 1)
    count++;
  cout << N-count << endl;
}