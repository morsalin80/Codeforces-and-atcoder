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
    int a,b;
    while(cin>>a>>b)
    {
        int tired=0;
        int point = ceil(((double)a+(double)b)/(double)2);
        if(a<b){int temp = b;
                b = a;
                a = temp;}
        for(int i=b;i<=point;i++)
            tired+= (point - i);
        for(int i=point;i<=a;i++)
            tired+= (a - i);
        cout << tired <<endl;
    }
    return 0;
}

