#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n; cin >> n;
    int arr[n];
    
    int tot = 0;
    bool flag = false;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] == 0) flag = false;
        if (arr[i] != 0 && flag == false) {
            tot++;
            flag = true;
        }
    }

    if (tot == 0) cout << "0\n";
    if (tot == 1) cout << "1\n";
    if (tot >= 2) cout << "2\n";
}

int main()
{
    int t; cin >> t;
    while (t--) solve();
}
