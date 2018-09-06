#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    while(cin>>n>>k)
    {
        string s;
        cin>>s;
        int arr[k];
        for(int i=0;i<k;i++)
            arr[i] =0;
        for(int i=0;i<n;i++)
        {
            arr[s[i]-65]++;
        }
        sort(arr,arr+k);
        if(arr[0]!=0)
            cout << arr[0]*k <<endl;
        else if(arr[0]==0)
            cout << "0\n";
    }
    return 0;
}
