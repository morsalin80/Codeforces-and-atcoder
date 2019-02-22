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
    int a,b;
    while(cin>>a>>b)
    {
        int acnt=0,dcnt=0,bcnt=0;
        for(int i=1;i<=6;i++)
        {
            int dif_a = abs(a-i);
            int dif_b = abs(b-i);
            if(dif_a==dif_b) dcnt++;
            else if(dif_a>dif_b)bcnt++;
            else acnt++;
        }
        cout << acnt << " "<< dcnt << " "<< bcnt<<endl;
    }
    return 0;
}

