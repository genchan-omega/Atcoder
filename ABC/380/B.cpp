#include <bits/stdc++.h>
#define rep(i, s, n)    for (int i = (s); i < (int)n; i++)
#define sort(vec) sort(vec.begin(), vec.end());
#define reverse(vec) reverse(vec.begin(), vec.end());
using namespace std;

int main(){
  string S;
  int cnt=0;
  cin >> S;
  S.erase(0,1);
  for(char c: S){
    if(c == '-')
      cnt++;
    else{
      cout << cnt << " ";
      cnt = 0;
    }
  }
  return 0;
}