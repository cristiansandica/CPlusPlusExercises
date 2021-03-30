#include <iostream>

using namespace std;

int n,S,c,p,b;
int main()
{cin>>n>>b;
S=0;
p=1;
while(n!=0){

    c=n%10;
    S=S+c*p;
    p=p*b;
    n=n/10;
}
  cout<<S;
    return 0;
}
