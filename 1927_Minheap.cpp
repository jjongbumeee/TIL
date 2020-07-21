#include <bits/stdc++.h>
#define ll long long
using namespace std;
priority_queue<ll, vector<ll>, greater<ll> > minheap; 
ll N;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> N;
    while(cin >> N) {
        if(N == 0) {
            if(minheap.empty()) cout << 0 << '\n';
            else {
                cout << minheap.top() << '\n';
                minheap.pop();
            }
        }
        else
            minheap.push(N);
    }
}