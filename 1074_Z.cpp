#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int dx[] = {0, 1, 0, 1}, dy[] = {0, 0, 1, 1};
ll N, r, c, cnt;
void solve(ll x, ll y, ll size) {
    if(size == 2) {
        for(int i = 0; i < 4; i++) {
            if(x + dx[i] == c && y + dy[i] == r) {
                cout << cnt;
                exit(0);
            }
            cnt++;
        }
    }
    else {
        solve(x, y, size / 2);
        solve(x + size / 2, y, size / 2);
        solve(x, y + size / 2, size / 2);
        solve(x + size / 2, y + size / 2, size / 2);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> N >> r >> c;
    ll size = pow(2, N);
    solve(0, 0, size);
}