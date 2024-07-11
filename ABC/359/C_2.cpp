// #include <bits/stdc++.h>
#include<iostream>
#include<vector>
#define rep(i, s, n)    for (int i = (s); i < (int)n; i++)
#define sort(vec) sort(vec.begin(), vec.end());
// #define reverse(vec) reverse(vec.begin(), vec.end());
using namespace std;

int main(){
	long S_x, S_y, T_x, T_y, dis_x, dis_y, money;
	cin >> S_x >> S_y >> T_x >> T_y;
	if(S_x > T_x)
    swap(S_x, T_x);
	if(S_y > T_y)
		swap(S_y, T_y);
	dis_x = abs(T_x - S_x);
	dis_y = abs(T_y - S_y);
	if(dis_x < dis_y+1)
		dis_x = 0;
	else
		dis_x -= dis_y;
	
	// ここ頑張った！！！！！！
	// cout << "dis_x:" << dis_x << " dis_y:" << dis_y << endl;
	money = (dis_x+1)/2 + dis_y;
	if(T_y%2==0 and S_x%2==0 and T_x%2==1)
		money--;
	else if(T_y%2 and S_x%2==1 and T_x%2==0)
		money--;
	cout << money << endl;
}