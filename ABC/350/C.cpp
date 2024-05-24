#include <bits/stdc++.h>
#define rep(i, s, n)    for (int i = (s); i < (int)n; i++)
#define sort(vec) sort(vec.begin(), vec.end());
#define reverse(vec) reverse(vec.begin(), vec.end());
#define test_print(vec, n) rep(i, 0, n) cout << vec[i] << " "; cout << endl;
using namespace std;

int main() {
  string S, T;
  cin >> S >> T;
  rep(i, 0, S.size()-1){
    bool flag=false;
    char ch = tolower(ch);
    rep(i, 0, S.size()){
      if(S[i] == ch){
        flag = true;
        S.erase(0, i-1);
      }
    }
  }
}