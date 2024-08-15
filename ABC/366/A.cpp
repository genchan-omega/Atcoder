#include <bits/stdc++.h>
#define rep(i, s, n)    for (int i = (s); i < (int)n; i++)
#define sort(vec) sort(vec.begin(), vec.end());
// #define reverse(vec) reverse(vec.begin(), vec.end());
using namespace std;

int main(){
  int N, T, A;
  cin >> N >> T >> A;
  if(T < A)
    swap(T, A);
  if(T<=N-T)
    cout << "No" << endl;
  else
    cout << "Yes" << endl;
  return 0;
}