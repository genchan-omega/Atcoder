#include <bits/stdc++.h>
#define rep(i, s, n)    for (int i = (s); i < (int)n; i++)
#define sort(vec) sort(vec.begin(), vec.end());
#define reverse(vec) reverse(vec.begin(), vec.end());
#define v( vec, m)    vector<int> vec(m);
#define vv(vec, m, n) vector<vector<int>> vec(m, vector<int>(n));
using namespace std;

int main(){
  int N, M, u, v, cnt=0;
  cin >> N >> M;
  // vv(vec, N, N);
  map<pair<int, int>, bool> myMap{};
  rep(i, 1, N+1)
    myMap[{i, i}] = true;
  rep(i, 0, M){
    cin >> u >> v;
    if(u>v)
      swap(u, v);
    if(myMap[{u, v}])
      cnt++;
    else
      myMap[{u, v}] = true;
  }
  cout << cnt << endl;
  return 0;
}