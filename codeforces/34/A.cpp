#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define ms(x) memset(x,0,sizeof(x))
#define IOS ios::sync_with_stdio(false);
using namespace std;
int main()
{
	IOS
    int n;
    while(cin>>n)
    {
        int arr[n],c,d,q;
        int min = 1002;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=1;i<n;i++)
        {
               q = abs(arr[i]-arr[i-1]);
               if(q<min){ min = q;
               c = i-1; d = i;}
        }
        q = abs(arr[0]-arr[n-1]);
        if(q<min){c = 0; d = n-1;}
        cout << c+1 << " "<< d+1 <<endl;
    }
    return 0;
}
