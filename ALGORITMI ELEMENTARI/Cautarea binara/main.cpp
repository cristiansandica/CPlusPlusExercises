#include <iostream>

using namespace std;

int a[101], stg,drp,n,m,gasit,i,x;
int main()
{
    cin>>n>>x;
    for(i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    stg=1;
    drp=n;
// vectorul trebuie sa fie sortat crescator
    while(stg<=drp && gasit == 0)
    {
        m=(stg+drp)/2;
        if(a[m]==x)
            gasit = 1;
        else if(a[m]<x)
            stg=m+1;
        else if(a[m]>x)
            drp=m-1;
    }
    if(gasit==1)
        cout<<"Numarul "<<x<<" a fost gasit pe pozitia "<<m;
    else
        cout<<"Numarul nu a fost gasit";


    return 0;
}
