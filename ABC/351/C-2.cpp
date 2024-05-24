#include <bits/stdc++.h>
#define rep(i, s, n)    for (int i = (s); i < (int)n; i++)
#define sort(vec) sort(vec.begin(), vec.end());
#define reverse(vec) reverse(vec.begin(), vec.end());
using namespace std;

int main() {
  int N, now_ball, buf_ball;
  cin >> N;
  stack<int> A;
  // 入力
  rep(i, 0, N){
    cin >> now_ball;
    A.push(now_ball);
    if(A.size() <= 1)
      continue;
    else{
      buf_ball = A.top();
      while(buf_ball == now_ball){
        A.pop();
        A.pop();
        if(A.size() <= 0){
          A.push(++now_ball);
          break;
        }
        buf_ball = A.top();
        A.push(++now_ball);
      }
    }
    cout << A.top() << endl;
  }
  cout << A.size() << endl;
}