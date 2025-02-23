#include <bits/stdc++.h>
#define rep(i, s, n)    for (int i = (s); i < (int)n; i++)
#define sort(vec) sort(vec.begin(), vec.end());
#define reverse(vec) reverse(vec.begin(), vec.end());
#define v( vec, m)    vector<int> vec(m);
#define vv(vec, m, n) vector<vector<int>> vec(m, vector<int>(n));
using namespace std;

int main(){
  string S;
  cin >> S;
  stack<char> stack;
  rep(i, 0, S.size()){
    if(S[i] == '(' or S[i] == '[' or S[i] == '<')
      stack.push(S[i]);
    else{
      if(stack.empty()){
        cout << "No" << endl;
        return 0;
      }
      char c = stack.top();
      stack.pop();
      switch (S[i]){
        case ')':
          if(c != '('){
            cout << "No" << endl;
            return 0;
          }
          break;
        case ']':
          if(c != '['){
            cout << "No" << endl;
            return 0;
          }
          break;
        case '>':
          if(c != '<'){
            cout << "No" << endl;
            return 0;
          }
          break;
      }
    }
  }
  if(!stack.empty()){
    cout << "No" << endl;
    return 0;
  }
  cout << "Yes" << endl;
  return 0;
}