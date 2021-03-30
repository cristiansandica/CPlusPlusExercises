#include <iostream>

using namespace std;

int v[101],n,m,i,j, s=0;

int divideSum(int st, int dr)
{
    int r1,r2,mij;
    if(st==dr)
    {
        if(v[st]%2==0)
            return v[st];
        else
            return 0;
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
    cin>>n>>m;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            cin>>v[j];
        }
        s=s+divideSum(1,m);
    }
    cout<<s;
    return 0;
}
