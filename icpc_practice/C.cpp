#include <bits/stdc++.h>
#define rep(i, s, n)    for (int i = (s); i < (int)n; i++)
#define sort(vec) sort(vec.begin(), vec.end());
#define print_vec(vec) cout << vec[0] << ", " << vec[1] << ", " << vec[2] << endl;
// #define reverse(vec) reverse(vec.begin(), vec.end());
using namespace std;

int main() {
  while (true) {
    int N;
    std::cin >> N;
    if (N == 0) return 0;

    int ans = 0;

    vector<vector<long long>> pos(N, vector<long long>(3));
    set<tuple<long long, long long, long long>> pos_set;
    rep(i, 0, N) {
      std::cin >> pos[i][0];
      std::cin >> pos[i][1];
      std::cin >> pos[i][2];
      pos_set.insert(tuple(pos[i][0], pos[i][1], pos[i][2]));
    }

    rep(i, 0, N) {
      rep(j, i + 1, N) {
        auto p1 = pos[i];
        auto p2 = pos[j];

        vector<long long> v1(3);
        rep(ii, 0, 3) v1[ii] = p2[ii] - p1[ii];

        rep(k, j + 1, N) {
          auto p3 = pos[k];

          vector<long long> v2(3);
          rep(ii, 0, 3) v2[ii] = p3[ii] - p1[ii];

          // print_vec(v1);
          // print_vec(v2);

          auto a = v1[0] * v2[0] + v1[1] * v2[1] + v1[2] * v2[2];
          // cout << a << endl;
          if (a != 0) continue;

          auto p4 = tuple(p2[0] + v2[0], p2[1] + v2[1], p2[2] + v2[2]);
          if (pos_set.count(p4) == 1) {
            ans += 1;
          }

          // // print_vec(p4);

          // rep(l, 0, N) {
          //   auto p4_tmp = pos[l];
          //   if (p4[0] == p4_tmp[0] && p4[1] == p4_tmp[1] && p4[2] == p4_tmp[2]) {
          //     ans += 1;
          //     break;
          //   }
          // }
        }
      }
    }

    cout << ans << endl;
  }
  return 0;
}