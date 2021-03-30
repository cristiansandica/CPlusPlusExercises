#include <iostream>

using namespace std;

int n, nr, i;
int main()
{
    cin>>n;
    for(i=2; i<=n/2; i++)
    {
        if(n%i==0)
            nr++;
    }
    if(nr==0)
        cout<<"Numarul este prim";
    else
        cout<<"Numarul nu este prim";

    return 0;
}


// varianta optimizata
int n,prim=1;
cin>>n;
if(n<2 || (n%2==0 && n!=2))
    prim=0;
else
    for(i=3; i*i<=n; i=i+2)
    {
        if(n%i==0)
        {
            prim=0;
            break;
        }
        if(prim==1)
            cout<<"Numarul este prim";
        else
            cout<<"Numarul nu este prim";

    }

// H
//g+i









