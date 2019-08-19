#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define f0(n) for(int i=0;i<n;i++)
#define ms(x) memset(x,0,sizeof(x))
#define ins insert
#define IOS ios::sync_with_stdio(false);
using namespace std;
int main()
{
	IOS
    int n,m;
    cin>>n;
    int a[n];
    int arr[500];
    ms(arr);
    for(int i=0;i<n;i++){
        cin>>a[i];
        arr[a[i]]++;
    }
    cin>>m;
    int b[m];
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
        arr[b[i]]++;
    }
    bool got =false;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[a[i]+b[j]]==0)
            {
                cout << a[i] << " "<< b[j] <<endl;
                got = true;
                break;
            }
        }
        if(got) break;
    }
    return 0;
}

