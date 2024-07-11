#include <bits/stdc++.h>
#define rep(i, s, n)    for (int i = (s); i < (int)n; i++)
#define sort(vec) sort(vec.begin(), vec.end());
#define reverse(vec) reverse(vec.begin(), vec.end());
using namespace std;

int main() {
	int N;
	cin >> N;
	while(N != 0){
		vector<int> A(N);
		// rep(i, 0, N)
		// 	cin >> A[i];
		int max_num = 0, buf_1=0, buf_2=0, buf_3=0, in;
		rep(i, 0, N){
			cin >> in;
			buf_3=buf_2;
			buf_2=buf_1; 
			buf_1=in;
			max_num = max(buf_1+buf_2+buf_3, max_num);
		}
		std::cout << max_num << endl;
		cin >> N;
	}
	return 0;	
}