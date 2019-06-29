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
        int position[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            position[i] = (arr[i]/n)*n;
            if(arr[i]%n<i+1)
                position[i]+=i+1;
            else
                position[i]+=n+i+1;
        }

        ll minimum,minimum_index;
        for(int i=0;i<n;i++)
        {
            if(i==0)
            {
                minimum = position[i];
                minimum_index= i+1;
                continue;
            }
            if(minimum>position[i])
            {
                minimum = position[i];
                minimum_index = i+1;
            }
        }
        cout << minimum_index <<endl;
    }
    return 0;
}
