// #include <bits/stdc++.h>
#include<iostream>
#include<vector>
#define rep(i, s, n)    for (int i = (s); i < (int)n; i++)
#define sort(vec) sort(vec.begin(), vec.end());
// #define reverse(vec) reverse(vec.begin(), vec.end());
using namespace std;
long red(long N, long X, long Y);
long blue(long N, long X, long Y);

// 赤のレベルがNのときに得られる青の個数
long red(long N, long X, long Y){
    if(N<2)    return 0;
    return red(N-1, X, Y) + X * blue(N, X, Y);
}

// 青のレベルがNのときに得られる青の個数
long blue(long N, long X, long Y){
    if(N==2)    return Y;
    return red(N-1, X, Y) + Y * blue(N-1, X, Y);
}

int main() {
  long N, X, Y, count=0;
    cin >> N >> X >> Y;
  cout << red(N, X, Y) << endl;
  return 0;
}