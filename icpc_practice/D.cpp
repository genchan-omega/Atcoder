#include <bits/stdc++.h>
#define rep(i, s, n)    for (int i = (s); i < (int)n; i++)
#define sort(vec) sort(vec.begin(), vec.end());
#define print_vec(vec) cout << vec[0] << ", " << vec[1] << ", " << vec[2] << endl;
// #define reverse(vec) reverse(vec.begin(), vec.end());
using namespace std;

int main() {
  while (true) {
    int N, M, K;
    std::cin >> N >> M >> K;
    if (N == 0 and M == 0 and K == 0) return 0;
		vector<int> A(M);
		vector<int> B(M);
    rep(i, 0, M)
			cin >> A[i] >> B[i];
    int ans = 0;

    std::cout << ans << endl;
  }
  return 0;
}