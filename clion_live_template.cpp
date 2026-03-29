#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define fast_io ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define F first
#define S second
constexpr int MOD = 1e9 + 7; // or 998244353
#define vs vector<string>
#define vvs vector<vs>
#define vi vector<int>
#define vvi vector<vi>

template<typename T>
T modpow(T base, T exp) {
    T res = 1;
    while (exp) {
        if (exp & 1) res = res * base % MOD;
        base = base * base % MOD;
        exp >>= 1;
    }
    return res;
}

template<typename T>
T modinv(T x) { return modpow(x, MOD - 2); }

void solve() {
}

int main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
