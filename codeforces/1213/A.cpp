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
    int n;
    while(cin>>n)
    {
        int arr[n];
        int jor=0;
        int bejor=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%2==0)
                jor++;
            else
                bejor++;
        }
        cout << min(jor,bejor) << endl;
    }
    return 0;
}

