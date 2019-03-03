#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define ms(x) memset(x,0,sizeof(x))
#define ins insert
#define IOS ios::sync_with_stdio(false);
using namespace std;
int main()
{
	IOS
    int n,a,b;
    while(cin>>n>>a>>b)
    {
        int arr[n+1];
        ms(arr);
        int num;
        for(int i=0;i<a;i++)
        {
            cin>>num;
            arr[num] = 1;
        }
        for(int i=0;i<b;i++)
        {
            cin>>num;
            arr[num] = 2;
        }
        for(int i=1;i<=n;i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}

