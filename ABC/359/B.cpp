#include <bits/stdc++.h>
#define rep(i, s, n)    for (int i = (s); i < (int)n; i++)
#define sort(vec) sort(vec.begin(), vec.end());
// #define reverse(vec) reverse(vec.begin(), vec.end());
using namespace std;

bool ans(string S, string T) {
  int S_length = S.size();
  int T_length = T.size();

  if(S_length==1 and S==T)
    return true;
  rep(w, 1, S_length){
    rep(c, 0, w){
      string buf="";
      for(int i=c; i < S_length; i+=w){
        buf += S[i];
        if(buf.size() == T_length)
          break;
      }
      // cout << buf << endl;
      if(buf == T)
        return true;
    }
  }
  return false;
}

int main() {
  string S, T;
  cin >> S >> T;

  if(ans(S, T))
    cout << "Yes" << endl;
  else
    cout << "No" << endl;

  return 0;
}