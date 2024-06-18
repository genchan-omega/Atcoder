// #include <bits/stdc++.h>
#include<iostream>
#include<vector>
#define rep(i, s, n)    for (int i = (s); i < (int)n; i++)
#define sort(vec) sort(vec.begin(), vec.end());
// #define reverse(vec) reverse(vec.begin(), vec.end());
using namespace std;

int main() {
  int N, A, time=0;
	cin >> N >> A;
  vector<int> T(N);
	rep(i, 0, N)
		cin >> T[i];
	rep(i, 0, N){
		// 処理が終わってるのに、まだ来てない時
		if(time < T[i]){
			time = T[i]+A;
			cout << time << endl;
		}
		else{
			time +=A;
			cout << time << endl;
		}
	}
  return 0;
}