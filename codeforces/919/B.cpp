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
    while(cin>>n){
    int cnt = 0;
    for(int i = 19;;i++)
    {
        int tempi=i;
        ll sum=0;
        while(tempi>0)
        {
            int temp = tempi%10;
            sum+=temp;
            tempi/=10;
        }
        if(sum==10) cnt++;
        if(cnt==n) {cout << i << endl;break;}
    }
    }
    return 0;
}

