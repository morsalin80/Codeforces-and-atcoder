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
    int n;
    while(cin>>n)
    {
        int d = 1;
        for(int i=1;i<=n;i++)
        {
            int star = n-d;
            //cout << star <<endl;
            for(int j=1;j<=star/2;j++)
                cout << '*';
            for(int j=1;j<=d;j++)
                cout << 'D';
            for(int j=1;j<=star/2;j++)
                cout << '*';
            if(i>=((n/2)+1)) d-=2;
            else d+=2;
            cout << endl;
        }
    }
    return 0;
}

