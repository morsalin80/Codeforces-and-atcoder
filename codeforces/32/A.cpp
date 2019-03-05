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
    int n,d;
    while(cin>>n>>d)
    {
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>> arr[i];
        }
        int cnt = 0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==j) continue;
                else if(abs(arr[i]-arr[j])<=d) cnt++;
            }
        }
        cout << cnt <<endl;
    }
    return 0;
}

