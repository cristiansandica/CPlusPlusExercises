#include <iostream>

using namespace std;

int n,nr=0,d,s=0,e;
int main()
{
    cin>>n;
    if(n%2==0)
    {
        e=0;
        while(n%2==0)
        {
            n=n/2;
            e++;
        }
    }
    s=s+e;
    d=3;
    while(n>1)
    {
        e=0;
        while(n%d==0)
        {
            e++;
            n=n/d;
        }
        s=s+e;
        d=d+2;
    }
    cout<<s;
    return 0;
}
