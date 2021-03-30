#include <iostream>

using namespace std;

int n,v[1001],i,j,sum;

int divideSum(int st, int dr)
{
    int r1,r2,mij;
    if(st==dr)
    {
        if(v[st]%2==0)
            return v[st];
    }
    else
    {
        mij=(st+dr)/2;
        r1=divideSum(st,mij);
        r2=divideSum(mij+1,dr);
        return r1+r2;
    }
}
int main()
{
    cin>>n;
    for(i=1; i<=n; i++)
        cin>>v[i];
    cout<<divideSum(1,n);

    return 0;
}
