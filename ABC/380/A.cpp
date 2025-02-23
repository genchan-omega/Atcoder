#include <bits/stdc++.h>
#define rep(i, s, n)    for (int i = (s); i < (int)n; i++)
#define sort(vec) sort(vec.begin(), vec.end());
#define reverse(vec) reverse(vec.begin(), vec.end());
using namespace std;

int main(){
  string N;
  int cnt_1 = 0, cnt_2 = 0, cnt_3 = 0;
  cin >> N;
  for(char c: N){
    if(c == '1')
      cnt_1++;
    else if(c == '2')
      cnt_2++;
    else if(c == '3')
      cnt_3++;
  }
  if(cnt_1 == 1 and cnt_2 == 2 and cnt_3 == 3)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}