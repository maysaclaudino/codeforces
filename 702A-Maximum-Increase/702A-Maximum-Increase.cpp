#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, ant, atu, max = 1, m = 1;
    cin >> n;

    cin >> ant;
    for (int i = 1; i < n; i++) {
        cin >> atu;

        if (ant >= atu) {
            if (m > max)
                max = m;
            m = 1;
        }
        else {
            m++;
        }

        ant = atu;
    }

    if (m > max) max = m;
    cout << max << endl;
    return 0;

}