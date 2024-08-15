#include <bits/stdc++.h>

using namespace std;

int main(){
  int N, K, X;
  cin >> N >> K >> X;
  vector<int> A(N);
  A.push_back(5);
  A.pop_back();
  for(int i =0; i<N; i++)
  cin>>A[i];
  for(int i=0; i<N; i++){
    cout << A[i];
    if(i == K-1)
      cout << " " << X;
    if(i != N-1)
      cout << " ";
    if(i == N-1)
      cout << endl;
  }
}