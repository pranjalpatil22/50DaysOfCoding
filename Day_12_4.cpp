#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
 int T;
    cin >> T;

    while (T--) {
        int N, K;
        cin >> N >> K;

        int prefix = 0;
        int lower = 0;
        int upper = K;

        for (int i = 0; i < N; i++) {
            int x;
            cin >> x;

            prefix += x;

            lower = max(lower, -prefix);
            upper = min(upper, K - prefix);
        }

        if (lower <= upper)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

}
