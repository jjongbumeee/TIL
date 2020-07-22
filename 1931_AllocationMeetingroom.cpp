#include <bits/stdc++.h>
using namespace std;
int N, a, b;
priority_queue<pair<int, int> > pq;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> a;
    while (cin >> a >> b)
        pq.push({-b, -a});
    a = -1; // 이전 회의 종료시간
    while(!pq.empty()) {
        if(-(pq.top().second) >= a) {// 시작 시간이 종료 시간 이후인 경우 회의 가능
            N++;
            a = -pq.top().first;
        }
        pq.pop();
    }
    cout << N;
}