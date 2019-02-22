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
        int arr[n];
        int i,j;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int turn =1;
        int s = 0, d = 0;
        for( i=0,j=n-1;i<=j;)
        {
            int boro;
            if(arr[i]>arr[j]) {boro = arr[i]; i++;}
            else {boro = arr[j];j--;}
            if(turn%2==0) d += boro;
            else s+=boro;
            turn++;
        }
        cout << s << " "<< d <<endl;
    }
    return 0;
}

