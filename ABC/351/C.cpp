#include <bits/stdc++.h>
#define rep(i, s, n)    for (int i = (s); i < (int)n; i++)
#define sort(vec) sort(vec.begin(), vec.end());
#define reverse(vec) reverse(vec.begin(), vec.end());
using namespace std;

int main() {
  int N, now_ball, sp=-1, buf;
  cin >> N;
  vector<int> A;
  // 入力
  rep(i, 0, N){
    rep(j, 0, A.size()) cout << A[j] << " ";
    cout << endl;
    cin >> now_ball;
    A.push_back(now_ball);
    sp++;
    if(sp <= 0)
      continue;
    else{
      while(A[sp-1] == A[sp]){
        now_ball = A[sp--];
        A.pop_back();
        A.pop_back();
        A.push_back(now_ball+1);
        if(sp < 0)
          break;
      }
    }
  }
  cout << A.size() << endl;
}