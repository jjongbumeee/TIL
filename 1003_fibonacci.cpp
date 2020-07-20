#include <bits/stdc++.h>
#define pii pair<int, int>
using namespace std;
vector<pii > dp(41);
void fib() {
    dp[0].first = 1;
    dp[1].second = 1;
    for(int i = 2; i < 41; i++) {
        dp[i].first = dp[i-1].first + dp[i-2].first;
        dp[i].second = dp[i-1].second + dp[i-2].second;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    fib();
    int T, N;
    cin >> T;
    while(T--) {
        cin >> N;
        cout << dp[N].first << ' ' << dp[N].second << '\n';
    }
}