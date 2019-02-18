#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define ms(x) memset(x,0,sizeof(x))
#define IOS ios::sync_with_stdio(false);
using namespace std;
int main()
{
	IOS
    int n;
    while(cin>>n)
    {
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int boro = 0;
        int last;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>=boro){boro = arr[i]; last = i;}
        }
        int b=0,max = -1;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==boro) b++;
            else{
                if(b>=max) max = b;
                b = 0;
            }
            if(i==n-1)
            {
                if(b>=max) max = b;
            }
        }
        cout << max <<endl;
    }
    return 0;
}

