#include <iostream>

using namespace std;

int n,v[1001],i,j,maxi=-99999,a;

int prim(int a)
{
    int i;
    if(a<2 || (a%2==0 && a!=2)) // identificare el pare si != 2 care nu sunt prime
    {
        return 0;
    }
    for(i=3; i*i<=a; i+=2)
    {
        if(a%i==0)
            return 0;
    }
    return 1;
}

int divide(int st, int dr)
{
    int r1,r2,mij;
    if(st==dr)
    {
        if(v[st]>maxi)
        {
            if(prim(v[st])==1)
                maxi=v[st];
        }
    }
    else
    {
        mij=(st+dr)/2;
        r1=divide(st,mij);
        r2=divide(mij+1,dr);
        if(r1>maxi)
            maxi = r1;
        if(r2>maxi)
            maxi = r2;

    }
    return maxi;

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
