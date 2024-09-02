#include <bits/stdc++.h>
#define rep(i, s, n)    for (int i = (s); i < (int)n; i++)
#define sort(vec) sort(vec.begin(), vec.end());
// #define reverse(vec) reverse(vec.begin(), vec.end());
using namespace std;

int main(){
  int A, B, C;
  cin >> A >> B >> C;
  if(C < B)
     B -= 24;
  if(B < A and A < C)
    cout << "No" << endl;
  else
    cout << "Yes" << endl;
  return 0;
}