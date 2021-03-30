#include <iostream>

using namespace std;

int n, sum=0;
int main()
{
    cin>>n;
    sum=0;
    while(n!=0)
    {
        if(n%2==0)
            sum=sum+n%10;
        n=n/10;
    }
    cout<<sum<<'\n';
    return 0;
}
