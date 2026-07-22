#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin >> t;
while(t--)
{
    int arr[5];
    for(int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    
    int a2 = 0,a4 = 0;
    
    for(int i = 0; i < 5; i++)
    {
        if(arr[i] >= 60 && arr[i] >= 30)
        {
            a2++;
            a4++;
        }
        else if(arr[i] >= 60)
        a2++;
        else if(arr[i] >= 30)
        a4++;
    }
    
    if(a2 >= 2 && a4 >= 4)
   { cout << "Pass" << endl;}
    else
        {cout << "Fail" << endl;
            
            // cout << a2 << " " <<a4 << endl;
        }

    
}
}
