// #include <bits/stdc++.h>
#include<iostream>
#include<vector>
#define rep(i, s, n)    for (int i = (s); i < (int)n; i++)
#define sort(vec) sort(vec.begin(), vec.end());
// #define reverse(vec) reverse(vec.begin(), vec.end());
using namespace std;

void hoge(int x){
    if(x==0)
        return;
    hoge(x-1);
    cout << x << " ";
    hoge(x-1);
}

int main() {
  int N;
    cin >> N;
  hoge(N);
  cout << endl;
  return 0;
}