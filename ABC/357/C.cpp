// #include <bits/stdc++.h>
#include<iostream>
#include<vector>
#define rep(i, s, n)    for (int i = (s); i < (int)n; i++)
#define sort(vec) sort(vec.begin(), vec.end());
// #define reverse(vec) reverse(vec.begin(), vec.end());
using namespace std;

vector<vector<char> > calc(vector<vector<char> > &grid) {
	int n = grid.size();
	int m = grid[0].size();
	vector<vector<char> > result;
	rep(i, 0, n){
		rep(j, i+1, n) {
			vector<char> row(m);
			rep(k, 0, m) {
				if(grid[i][k] == 'o' or grid[j][k] == 'o')
					row[k] = 'o';
				else
					row[k] = 'x';
			}
			result.push_back(row);
		}
	}
	return result;
}

bool is_all(vector<char> &row) {
	for(auto c : row)
		if(c != 'o')
			return false;
	return true;
}

int main(){
	int N, M;
	cin >> N >> M;
	vector<vector<char> > grid(N, vector<char> (M));
	rep(i, 0, N)
		rep(j, 0, M)
			cin >> grid[i][j];
	rep(i, 0, N){
		if(is_all(grid[i])){
			cout << "1" << endl;
			return 0;
		}
	}
	vector<vector<char> > rows = calc(grid);
	int count = 2;
	while(1){
		for(auto &row : rows){
			if(is_all(row)){
				cout << count << endl;
				return 0;
			}
		}
		rows = calc(rows);
		count++;
	}
}