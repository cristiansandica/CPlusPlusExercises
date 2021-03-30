#include <iostream>

using namespace std;

int v[1001],i,j,n,nr;

int divide(int st, int dr)
{
    int r1,r2,mijl;
    if(st==dr)
    {
        if(v[st]%2==1)
            return 1;
    }
    else
    {
        mijl=(st+dr)/2;
        r1=divide(st,mijl);
        r2=divide(mijl+1,dr);
        return r1+r2;
    }
}

int main()
{
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>v[i];
    }
        cout<<divide(1,n);
    return 0;
}
