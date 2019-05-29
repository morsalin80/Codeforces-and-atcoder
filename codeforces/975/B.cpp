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
    ll arr[14];
    ll maxx =0;
    for(int i=0;i<14;i++)
    {
        cin>>arr[i];
    }
    for(int t=0;t<14;t++)
    {
        if(arr[t]<0) continue;

    ll arr2[14];
    ll ack = arr[t];
    ll rec = ack/14;
    for(int j=0;j<14;j++)
    {
        arr2[j] = arr[j]+rec;
    }
    arr2[t] = rec;
    rec = ack%14;
    int ind = t+1;
    while(rec!=0){
        if(ind==14) ind = 0;
        arr2[ind]++;
        ind++;
        rec--;
    }
    ll cnt = 0;
    for(int i=0;i<14;i++)
    {
        if(arr2[i]%2==0) cnt+= arr2[i];
    }
    if(cnt>maxx) maxx = cnt;
    }
    cout << maxx <<endl;
    return 0;
}

