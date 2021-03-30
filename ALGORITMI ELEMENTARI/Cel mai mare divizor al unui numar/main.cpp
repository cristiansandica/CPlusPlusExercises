#include <iostream>

using namespace std;

int n,d;
int main()
{
    cin>>n;
    d=n-1;
    while(n%d!=0)
        d--;
    cout<<d;
    return 0;
}
