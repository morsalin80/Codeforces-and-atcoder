#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    int n,a,b;
    while(cin>>n>>a>>b)
    {
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int j;
        int cost=0;
        int choto;
        if(a>b)choto=b;
        else choto= a;
        bool possible = true;
        for(int i=0,j=n-1;i<=j;i++,j--)
        {
            if(n%2!=0 && (i==n/2 ||j==n/2))
            {
                if(arr[i]==2 || arr[j]==2)
                cost+=choto;
                continue;
            }
            //cout << cost <<endl;
            if(arr[i]!=2|| arr[j]!=2){
            if(arr[i]!=arr[j])
            {
                if(arr[i]==2)
                {

                    if(arr[j]==0)
                        cost+=a;
                    else
                        cost+=b;
                //cout << i+1 << " "<< cost <<endl;
                }
                else if(arr[j]==2)
                {
                    if(arr[i]==0)
                        cost+=a;
                    else
                        cost+=b;
                }
                else
                {
                    cout << "-1\n";
                    possible = false;
                    break;
                }
            }}
            if(arr[i]==2 && arr[j]==2)
                cost+=2*choto;
        }
        if(possible)
            cout << cost <<endl;
    }
    return 0;
}
