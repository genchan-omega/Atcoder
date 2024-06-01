#include <bits/stdc++.h>
#define rep(i, s, n)    for (int i = (s); i < (int)n; i++)
#define sort(vec) sort(vec.begin(), vec.end());
#define reverse(vec) reverse(vec.begin(), vec.end());
#define test_print(vec, n) rep(i, 0, n) cout << vec[i] << " "; cout << endl;
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> A(N);
  vector<int> B(M);
  rep(i, 0, N)
    cin >> A[i];
  rep(i, 0, M)
    cin >> B[i];
    vector<int> C = A;
    C.insert(C.end(), B.begin(), B.end());
    sort(C);
    unordered_set<int> setA(A.begin(), A.end());
    bool foundConsecutiveA = false;
    for (size_t i = 1; i < C.size(); ++i) {
        if (setA.count(C[i]) > 0 && setA.count(C[i-1]) > 0) {
            foundConsecutiveA = true;
            break;
        }
    }
    if (foundConsecutiveA) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
    return 0;
}
