// #include <bits/stdc++.h>
#include<iostream>
#include<vector>
#define rep(i, s, n)    for (int i = (s); i < (int)n; i++)
#define sort(vec) sort(vec.begin(), vec.end());
// #define reverse(vec) reverse(vec.begin(), vec.end());
using namespace std;

int main() {
  int N, buf_1, buf_2, buf_3, count=0;
	cin >> N >> buf_1 >> buf_2;
	rep(i, 0, 2*N-2){
		cin >> buf_3;
		if(buf_1 == buf_3)
			count++;
		buf_1 = buf_2;
		buf_2 = buf_3;
	}
	cout << count << endl;
  return 0;
}