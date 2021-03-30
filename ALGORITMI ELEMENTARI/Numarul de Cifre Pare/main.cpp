#include <iostream>

using namespace std;

int n;
int main()
{
    cin>>n;
    while(n!=0)
    {
        if(n%2==0)
            nr++;
        n=n/10;
    }
    cout<<nr<<'\n';
    return 0;
}
