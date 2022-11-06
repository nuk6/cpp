// P : https://leetcode.com/problems/minimum-height-trees/description/

// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

const int MX = 100;
vector<int> graph[MX];
int dp[MX][MX];

int dfs(int i, int p = -1) {
    if(p != -1 && dp[i][p] != -1) {
        //cout << "Cached...." << dp[i][p];
        return dp[i][p];
    }
    int max_ans = 0;
    for(auto it : graph[i]) {
        if(it != p) {
            dp[it][i] = dfs(it, i);
            max_ans = max(max_ans, dp[it][i]);
        }
    }
    return 1 + max_ans;
}

int main() {
    int n = 6;
    vector<vector<int>> edges = {{3,0},{3,1},{3,2},{3,4},{5,4}};
    for(auto edge : edges) {
        graph[edge[0]].push_back(edge[1]);
        graph[edge[1]].push_back(edge[0]);
    }
    for(int i = 0; i < MX; ++i) {
        for(int j = 0; j < MX; ++j) {
            dp[i][j] = -1;
        }
    }
    int ans = 99999;
    for(int i = 0; i < n; ++i) {
        int ans_i = dfs(i);
        cout << "i = " << i << "Ans = " << ans_i << endl;
        ans = min(ans, ans_i);
        cout << endl;
    }
    cout << endl;
    for(int i = 0; i < 6; ++i) {
        for(int j = 0; j < 6; ++j) {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Ans = " << ans;
    return 0;
}
