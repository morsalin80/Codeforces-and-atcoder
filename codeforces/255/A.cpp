#include<bits/stdc++.h>
using namespace std;
main()
{
    //ios::sync_with_stdio(false);
    int n;
    cin>>n;

    int chest= 0,biceps = 0, back1 = 0,x;
    for(int i=0;i<n;i++)
    {
        cin>> x;
        //cout << x<<endl;
        if(i%3==0) chest+=x;
        else if(i%3==1) biceps+=x;
        else if(i%3==2) back1+=x;
    }
    //cout << chest << " "<< biceps << " "<<back1 <<endl;
    if(chest>biceps){
            //cout << "chest>biceps\n";
        if(chest>back1)
            cout << "chest\n";
        else
            cout << "back\n";
    }
    else if(chest<=biceps){
         //cout << "chestbiceps\n";
        if(biceps>back1)
            cout << "biceps\n";
        else
            cout << "back\n";
    }

}
