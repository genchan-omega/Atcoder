#include <bits/stdc++.h>
#define rep(i, s, n)    for (int i = (s); i < (int)n; i++)
#define sort(vec) sort(vec.begin(), vec.end());
// #define reverse(vec) reverse(vec.begin(), vec.end());
using namespace std;

int main(){
  int N, K;
  cin >> N >> K;
  vector<int> A(N);
  rep(i, 0, N)
    cin >> A[i];
  K = N-K;
  rep(i, 0, N){
    cout << A[K] << " ";
    K++;
    if(K==N)
      K=0;
  }
  cout << endl;
  return 0;
}