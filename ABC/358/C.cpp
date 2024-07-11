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
	dis_x = abs(T_x - S_x);
	dis_y = abs(T_y - S_y);
	if(dis_x < dis_y)
		dis_x = 0;
	else
		dis_x -= (dis_y+1);
	cout << "dis_x:" << dis_x << " dis_y:" << dis_y << endl;
	money = (dis_x+1)/2 + dis_y;
	if(dis_y)
	cout << money << endl;
}