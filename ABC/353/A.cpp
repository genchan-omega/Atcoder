#include <bits/stdc++.h>
#define rep(i, s, n)    for (int i = (s); i < (int)n; i++)
#define sort(vec) sort(vec.begin(), vec.end());
#define reverse(vec) reverse(vec.begin(), vec.end());
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> H(N);
  rep(i, 0, N)
    cin >> H[i];
  rep(i, 1, N)
    if(H[0] < H[i]){
      cout << i+1 << endl;
      return 0;
    }
    cout << "-1" << endl;
    return 0;
}