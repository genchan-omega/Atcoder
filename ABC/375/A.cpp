#include <bits/stdc++.h>
#define rep(i, s, n)    for (int i = (s); i < (int)n; i++)
#define sort(vec) sort(vec.begin(), vec.end());
// #define reverse(vec) reverse(vec.begin(), vec.end());
using namespace std;

int main(){
  string S;
  int cnt=0, buf;
  cin >> buf >> S;
  rep(i, 0, S.size()-2){
    if(S[i]=='#' && S[i+1]=='.' && S[i+2]=='#')
      cnt++;
  }
  cout << cnt << endl;
  return 0;
}