#include <bits/stdc++.h>
#define rep(i, s, n)    for (int i = (s); i < (int)n; i++)
#define sort(vec) sort(vec.begin(), vec.end());
// #define reverse(vec) reverse(vec.begin(), vec.end());
using namespace std;

int main(){
  int L, R;
  cin >> L >> R;
  if(L==1 and R==0)
    cout << "Yes";
  else if(L == 0 and R == 1)
    cout << "No";
  else 
    cout << "Invalid";
  cout << endl;
  return 0;
}