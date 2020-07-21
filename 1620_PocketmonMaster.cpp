#include <bits/stdc++.h>
using namespace std;
int M, N;
map<string, int> map1;
map<int, string> map2;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    string str;
    int num;
    cin >> M >> N;
    for(int i = 1; i <= M; i++) {
        cin >> str;
        map1[str] = i;
        map2[i] = str;
    }
    while(N--) {
        cin >> str;
        if(str[0] >= 'A' && str[0] <= 'Z')
            cout << map1[str] << '\n';
        else cout << map2[stoi(str)] << '\n';
    }
}