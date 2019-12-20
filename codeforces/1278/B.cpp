#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        ll k=0,var=0,diff=abs(a-b);
        while(1)
        {
            var+=k;
            if(var==diff)
            {
                cout << k << endl;
                break;
            }
            else if(var>diff)
            {
                if((var-diff)%2==0){
                    cout << k << endl;
                    break;
                }
            }
            k++;
        }
    }
    return 0;
}
