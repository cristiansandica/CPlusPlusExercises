#include <iostream>

using namespace std;

int n,nr=0,d;
int main()
{
    cin>>n;
    if(n%2==0)
    {
        nr++;
        while(n%2==0)
        {
            n=n/2;
        }
    }
    d=3;
    while(n>1)
    {
        if(n%d==0)
        {
            nr++;
            while(n%d==0)
                n=n/d;
        }
        d=d+2;
    }
    cout<<nr;
    return 0;
}
