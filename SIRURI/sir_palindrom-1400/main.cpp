#include <iostream>

using namespace std;

long long v[10001],i,n,maxi,x,nr,ok=1;
int main()
{
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>x;
        if(x>maxi)
            maxi=x;
        v[x]++;
    }
    for(i=1; i<=maxi; i++)
    {
        if(v[i]%2==1)
        {
            nr++;
        }
        if(nr>1)
        {
            ok=0;
            break;
        }
    }
    if(ok==1)
        cout<<"DA";
    else if(ok==0)
        cout<<"NU";

    return 0;
}
