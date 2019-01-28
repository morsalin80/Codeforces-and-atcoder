#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[4],a,b;
    int co=0;
    for(int i=0;i<4;i++)
        cin>>ar[i];
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
        do{
            int eq = i%ar[0];
            eq = eq%ar[1];
            eq = eq%ar[2];
            eq = eq%ar[3];
            if(eq==i){
                co++;
                break;}
        }while(next_permutation(ar,ar+4));
    }
    cout << co <<endl;
    return 0;
}
