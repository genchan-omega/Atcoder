// #include <bits/stdc++.h>
#include<iostream>
#include<vector>
#include<stack>
#define rep(i, s, n)    for (int i = (s); i < (int)n; i++)
#define sort(vec) sort(vec.begin(), vec.end());
// #define reverse(vec) reverse(vec.begin(), vec.end());
using namespace std;

int main() {
  long K, n=10, buf;
  cin >> K;
  vector<long> array;
  for (int bit = 2; bit < (1<<n); ++bit) {
    vector<int> S;
    for (int i = 0; i < n; ++i) {
        if (bit & (1<<i)) { // 列挙に i が含まれるか
            S.push_back(i);
        }
    }
    buf=0;
    for(int i=S.size()-1; i>=0; i--){
      buf  = buf*10 + S[i];
    }
    array.push_back(buf);
  }
  sort(array);
  cout << array[K-1] << endl;
}