#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--)
    {
        int x,y,ans = 0;
        cin >> x >> y;
        while(x != y)
        {
            if(x%10 == 0)
            {
                int t = x/10;
                ans += t;
                // cout <<"first " <<ans << " ";
            }
            else
             {
                 int a = x/10;
                 a++;
                 ans += a;
                //  cout << "second "<<ans << " ";
             }
             x--;
            //  cout << "x : " << x<<endl;
        }
        
        cout << ans << endl;
    }
}
