#include <bits/stdc++.h>
using namespace std;


 void dfs(auto& G, int v) {
  seen[v] = true; // v を訪問済にする
  
  // v から行ける各頂点 next_v について
  for (auto next_v : G[v]) { 
      if (seen[next_v]) continue; // next_v が探索済だったらスルー
      dfs(G, next_v); // 再帰的に探索
  }
}

int main() {
  int n = 3;

  // {0, 1, ..., n-1} の部分集合の全探索
  for (int bit = 0; bit < (1<<n); ++bit) {
    vector<int> S;
    for (int i = 0; i < n; ++i) {
      if (bit & (1<<i)) { // 列挙に i が含まれるか
        S.push_back(i);
      }
    }

    cout << bit << ": {";
    for (int i = 0; i < (int)S.size(); ++i) {
      cout << S[i] << " ";
    }
    cout << "}" << endl;
  }
}
