#include <iostream>

using namespace std;

int n, nr, c, p=1;
int main()
{
    cin>>n;
    while (n!=0)
    {
        c=n%10;
        if (c%2==0)
        {
            nr=c*p+nr;
            p=p*10;
        }
        nr=c*p+nr;
        p=p*10;
        n=n/10;
    }
    cout<<nr;
    return 0;
}
