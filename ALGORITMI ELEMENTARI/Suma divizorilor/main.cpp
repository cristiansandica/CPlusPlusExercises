#include <iostream>

using namespace std;

int n,i,s;
int main()
{
    cin>>n;
    for(i=1; i*i<n; i++)
    {
        if(n%i==0)
        {
            s=s+i+n/i;
        }

    }
    if(i*i==n)
        s=s+i;
    cout<<s;
    return 0;
}
