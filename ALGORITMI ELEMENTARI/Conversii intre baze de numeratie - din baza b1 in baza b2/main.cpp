#include <iostream>

using namespace std;
long long int c,n,b1,b2,p,s,nr;
int main()
{
    cin>>n>>b1>>b2;

    p=1;
    s=0;

    while(n!=0){
        c=n%10;
        s=s+c*p;
        p=p*b1;
        n=n/10;
    }
    cout<<s;
    cout<<endl;
    p=1;
    while(s!=0){
        c=s%b2;
        nr=nr+c*p;
        p=p*10;
        s=s/b2;
    }

    cout<<nr;
    return 0;
}
