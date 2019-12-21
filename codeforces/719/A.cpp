#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        if(n==1)
        {
            if(arr[0]==0) cout << "UP\n";
            else if(arr[0]==15) cout << "DOWN\n";
            else cout << "-1\n";
            continue;
        }
        if(arr[n-1]==0) cout << "UP\n";
        else if(arr[n-1]==15) cout << "DOWN\n";
        else if(arr[n-1]>arr[n-2]) cout << "UP\n";
        else if(arr[n-1]<arr[n-2]) cout << "DOWN\n";
    }
}
