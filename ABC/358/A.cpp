#include <bits/stdc++.h>
#include<iostream>
#include<vector>
#define rep(i, s, n)    for (int i = (s); i < (int)n; i++)
#define sort(vec) sort(vec.begin(), vec.end());
// #define reverse(vec) reverse(vec.begin(), vec.end());
using namespace std;

int main() {
  int N, count=0;
  string S;
  cin >> N;
  rep(i, 0, N){
		cin >> S;
    if(S == "Takahashi")
    	count++;
	}
	cout << count << endl;
  return 0;
}