#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y,z;
    cin>>x>>y>>z;
    int temp=x;
    x=y;
    y=temp;
    temp=x;
    x=z;
    z=temp;
    cout << x << " "<< y <<" " << z << endl;
    return 0;
}
