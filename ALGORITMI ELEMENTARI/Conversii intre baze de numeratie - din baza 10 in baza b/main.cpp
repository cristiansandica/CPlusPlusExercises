#include <iostream>

using namespace std;

int n,nr,r,p=1,b;
int main()
{
    cin>>n>>b;
    while(n!=0)
    {
        r=n%b;
        nr=r*p+nr;
        p=p*10;
        n=n/b;
    }
    cout<<nr;
    return 0;
}
