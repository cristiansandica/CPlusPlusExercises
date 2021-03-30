#include <iostream>

using namespace std;

int a[501],i,j,n;
#include <iostream>
using namespace std;


int toate_egale(int st, int dr)
{
    if(st == dr)
        return a[st] == a[1];
    else
    {
        int mij = (st + dr) / 2;
        return toate_egale(st, mij) && toate_egale(mij + 1, dr);
    }
}
int main()
{
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    if(toate_egale(1,n)==1)

        cout<<"DA";
    else
        cout<<"NU";

    return 0;
}
