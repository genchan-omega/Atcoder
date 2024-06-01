#include <bits/stdc++.h>
#define rep(i, s, n)    for (int i = (s); i < (int)n; i++)
#define sort(vec) sort(vec.begin(), vec.end());
// #define reverse(vec) reverse(vec.begin(), vec.end());
using namespace std;

int main() {
  int N, L, R;
  cin >> N >> L >> R;
  vector<int> A(N);
  rep(i, 0, N)
    A[i] = i+1;
  reverse(A.begin() + L - 1, A.begin() + R);
  rep(i, 0, N)
    cout << A[i] << " ";
  cout << endl;
  return 0;
}