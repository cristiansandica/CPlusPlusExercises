#include <iostream>

using namespace std;

int n,i,nr=0;
int main()
{
    cin>>n;
    for(i=2; i*i<n; i++)
    {
        if(n%i==0)
        {
           nr=nr+2;
        }

    }
    if(i*i==n)
        nr++;
        cout<<nr;
    return 0;
}
