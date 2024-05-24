#include <bits/stdc++.h>
#define rep(i, s, n)    for (int i = (s); i < (int)n; i++)
#define sort(vec) sort(vec.begin(), vec.end());
#define reverse(vec) reverse(vec.begin(), vec.end());
using namespace std;

int main() {
  string S;
  cin >> S;
  S.erase(0, 3);
  int num = stoi(S);
  if(0 < num and num < 350 and num != 316)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}