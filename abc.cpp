#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    //for int, float, double, long, long long
    int x;
    if (cin >> x) {
        cout << "Your input was: " << x << endl;
    }

    //for string input
    string s;
    if (getline(cin, s)) {
        cout << "Your input was: " << s << endl;
    }

    return 0;
}
