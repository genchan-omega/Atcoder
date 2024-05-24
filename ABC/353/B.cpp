#include <bits/stdc++.h>
#define rep(i, s, n)    for (int i = (s); i < (int)n; i++)
#define sort(vec) sort(vec.begin(), vec.end());
#define reverse(vec) reverse(vec.begin(), vec.end());
#define test_print(vec, n) rep(i, 0, n) cout << vec[i] << " "; cout << endl;
using namespace std;

int main() {
  int N, K, count=0;
  cin >> N >> K;
  vector<int> A(N);
  int empty=K;
  rep(i, 0, N)  cin >> A[i];
  rep(i, 0, N){
    while(1){
      if(empty>=A[i]){
        empty -= A[i];
        break;
      }
      else{
        count++;
        empty=K;
      }
    }
  }
  cout << count+1 << endl;
}