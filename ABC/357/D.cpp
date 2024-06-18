// #include <bits/stdc++.h>
#include<iostream>
#include<vector>
#define rep(i, s, n)    for (int i = (s); i < (int)n; i++)
#define sort(vec) sort(vec.begin(), vec.end());
// #define reverse(vec) reverse(vec.begin(), vec.end());
using namespace std;

vector<vector<char> > calc(vector<vector<char> > &grid){
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
	int N, M, max;
	cin >> N >> M;
  vector<int> count(N);
  vector<int> standard(N);
  vector<int> mem;
	vector<vector<char> > grid(N, vector<char> (M));
	rep(i, 0, N){
    rep(j, 0, M){
      cin >> grid[i][j];
      if(grid[i][j] == 'o')
        count[i]++; 
    }
  }
  rep(i, 0, M){
    rep(j, 0, N){
      if(grid[j][i]=='o'){
        mem.push_back(j);
      }
    }
    max = 0;
    while(!mem.empty()){
      int buf = mem.back();
      mem.pop_back();
      if(count[buf]>max)
        max = buf;
    }
    rep(j, 0, M)
    if(grid[max][j]=='o' or standard[j]=='o')
      standard[j]='o';
    if(is_all(standard))

  }
}