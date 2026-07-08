#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin >> t;
while(t--)
{
    int r,y;
    cin >> r>>y;
    int ans = r;
    ans += max(0, y - r) / 2;

    
    cout << ans << endl;
}
}
