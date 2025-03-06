#include <bits/stdc++.h>
#define rep(i, s, n)    for (int i = (s); i < (int)n; i++)
#define sort(vec) sort(vec.begin(), vec.end());
#define reverse(vec) reverse(vec.begin(), vec.end());
#define v( vec, m)    vector<int> vec(m);
#define vv(vec, m, n) vector<vector<int>> vec(m, vector<int>(n));
using namespace std;

vector<int> find_all(string str1, string str2){
  vector<int> result;
  int pos = str1.find(str2);
  while(pos != )
}

int main(){
  int N, cnt=0, next_sum;
  string S;
  cin >> N >> S;
  int mid = N/2;
  
  next_sum=0;
  rep(i, 0, N/2){
    if(S[i]=1)
      next_sum++;
    else
      cnt += next_sum;
  }
  next_sum=0;
  for(int i=0; i>N/2; i--){
    if(S[i]=1)
      next_sum++;
    else
      cnt += next_sum;
  }
  cout << cnt << endl;
  return 0;
}