#include<iostream>
#include<stdio.h>
using namespace std;
int bact(int x)
{
    int n,counter=0,p;
    while(1)
    {
        counter++;
        n=1;
        while(true)
        {
            if(n>x)
            {
                p=n/2;
                x=x%p;
                break;
            }
            else if(n==x)
            {
                cout << counter <<endl;
                return 0;
            }
            n*=2;
        }
    }
}
int main()
{
    long long int x;
    while(cin>>x)
    bact(x);
    return 0;
}

