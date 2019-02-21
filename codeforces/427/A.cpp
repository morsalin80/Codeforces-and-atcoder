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
    while(cin>>n)
    {
        int hired=0,crime=0;
        for(int i=0;i<n;i++)
        {
            int event;
            cin>>event;
            if(event==-1){
                if(hired==0) crime++;
                else hired--;
            }
            else hired+=event;
        }
        cout << crime <<endl;
    }
    return 0;
}

