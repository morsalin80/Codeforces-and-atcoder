#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h,a,b,k;
    while(cin>>n>>h>>a>>b>>k)
    {
        int mini;
        int ta,fa,tb,fb;
        for(int i=0;i<k;i++)
        {

            cin>>ta>>fa>>tb>>fb;
            if(ta==tb){cout << abs(fa-fb)<<endl;continue;}
            else
            {
                if(fa<=b && fa>=a)
                    mini = abs(ta-tb) + abs(fa-fb);
                else
                {
                    if(fa>b)
                        mini = abs(ta-tb) + abs(b-fb) + abs(b-fa);
                    else if(fa<a)
                        mini = abs(ta-tb) + abs(fb -a) + abs(fa - a);
                }
            }
            cout << mini << endl;
        }
    }
    return 0;
}
