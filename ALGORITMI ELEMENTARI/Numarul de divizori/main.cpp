#include <iostream>

using namespace std;

int n,i,nr=2;
int main()
{
    cin>>n;
    for(i=2; i<=n/2; i++)
    {
        if(n%i==0)
        {
           nr++;
        }
    }
    cout<<nr;
    return 0;
}

// Varianta optimizata
#include <iostream>

using namespace std;

int n,i,nr=0;
int main()
{
    cin>>n;
    for(i=1; i*i<n; i++)
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
