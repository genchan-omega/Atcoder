#include <bits/stdc++.h>
#define rep(i, s, n)    for (int i = (s); i < (int)n; i++)
#define sort(vec) sort(vec.begin(), vec.end());
#define reverse(vec) reverse(vec.begin(), vec.end());
using namespace std;

int main() {
  int A, B;
  cin >> A >> B;
  if(A == B)
    cout << "-1" << endl;
  else{
    if(A==1 or B==1){
      if(A == 2 or B ==2){
        cout << "3" << endl;
      }
      else
        cout << "2" << endl;
    }
    else if (A == 2 or B==2){
        if(A == 3 or B == 3)
          cout << "1" << endl;
    }
  }
}