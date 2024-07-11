// #include <bits/stdc++.h>
#include<iostream>
#include<vector>
#define rep(i, s, n)    for (int i = (s); i < (int)n; i++)
#define sort(vec) sort(vec.begin(), vec.end());
// #define reverse(vec) reverse(vec.begin(), vec.end());
using namespace std;

int main() {
  int N;
	//S.insert();
	cin >> N;
	while(N != 0){
		int p = 0;
		string S1, S2, ans("");
		rep(i, 0, N){
			cin >> S1 >> S2;
			if (S1 == "INSERT"){
				ans.insert(ans.begin()+p, S2.at(0));
				p++;
			}else if(S1 == "LEFT" and p > 0){
				p--;
			}else if(S1 == "RIGHT" and p < ans.size()){
				p++;
			}
		}
		cout << ans << endl;
		cin >> N;
		
	}
  return 0;
}