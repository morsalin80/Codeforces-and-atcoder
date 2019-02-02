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
        int arr[n+1];
        int pr;
        for(int i=1;i<=n;i++)
        {
            cin>>pr;
            arr[pr] = i;
        }
        for(int i=1;i<=n;i++) cout << arr[i]<< " ";
        cout << endl;
    }
    return 0;
}

