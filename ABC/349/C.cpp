#include <bits/stdc++.h>
#define rep(i, s, n)    for (int i = (s); i < (int)n; i++)
#define sort(vec) sort(vec.begin(), vec.end());
#define reverse(vec) reverse(vec.begin(), vec.end());
#define test_print(vec, n) rep(i, 0, n) cout << vec[i] << " "; cout << endl;
using namespace std;

int main() {
  int N, min;
  cin >> N;
  vector<int> A(N);
  vector<vector<int>> ans(2);
  rep(i, 0, N)
    cin >> A[i];
  rep(i, 0, N){
    rep(j, i+1, N){
      if(A[min] > A[j]){
        min = j;
      }
    }
  }
  cout << A.size() << endl;
  rep(i, 0, N)
    cout << ans[0][i] << " " << ans[1][i] << endl;
}