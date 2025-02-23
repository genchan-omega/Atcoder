#include <bits/stdc++.h>
#define rep(i, s, n)    for (int i = (s); i < (int)n; i++)
#define sort(vec) sort(vec.begin(), vec.end());
#define reverse(vec) reverse(vec.begin(), vec.end());
#define v( vec, m)    vector<int> vec(m);
#define vv(vec, m, n) vector<vector<int>> vec(m, vector<int>(n));
using namespace std;

int main(){
  string S1, S2;
  cin >> S1 >> S2;
  if(S1 == "sick" and S2 == "sick")
    cout << "1" << endl;
  else if(S1 == "sick" and S2 == "fine")
    cout << "2" << endl;
  else if(S1 == "fine" and S2 == "sick")
    cout << "3" << endl;
  else
    cout << "4" << endl;
  return 0;
}