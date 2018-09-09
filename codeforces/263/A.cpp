#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    int monei,monej;
    for(int i=0;i<5;i++)
        for(int j=0;j<5;j++)
        {
            cin>>a;
            if(a==1){
                monei=i;
                monej=j;
            }
        }
    int kahini;
    kahini = abs(monei - 2) + abs(monej - 2);
    cout << kahini <<endl;
    return 0;
}
