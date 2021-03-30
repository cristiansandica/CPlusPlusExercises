#include <iostream>

using namespace std;

int n, nr=0;
int main()
{
    cin>>n;
    if(n==0)
    {
        cout<<1;
        return 0; //Caz exceptional pentru nr 0;
    }
    while(n!=0)
    {
        n=n/10;
        nr++;
    }
    cout<<nr;
    return 0;
}
