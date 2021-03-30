#include <iostream>

using namespace std;

int minim3(int a, int b, int c)
{
    int mini
    if(a<b)
        mini = a;
    else
        mini = b;
    if(c<mini)
        mini = c;
    return mini;
}
int minim2(int a, int b)
{
    if(a<b)
        return a;
    else
        return b;
}

int nr_pasi(int n)
{
    if(n==1)
        return 0;
    else if(n>1)
    {
        if(n==2)
            return 1+nr_pasi(1);
        if(n==3)
            return 1+minim2(nr_pasi(2), nr_pasi(1));
        else if (n>3)
        {
            if(n%2==0 && n%3==0)
                return 1+minim3(nr_pasi(n-1),nr_pasi(n/2),nr_pasi(n/3));
            if(n%2==0 && n%3!=0)
                return 1+minim3(nr_pasi(n-1),nr_pasi(n/2));
            else (n%2!=0 && n%3==0)
                return 1+minim(nr_pasi(n-1),nr_pasi(n/3))
                       else if(n%2!=0 && n%3!=0)
                           return 1+nrpasi(n-1);

        }
    }
}

int main()
{
    cin>>n;
    cout<<nr_pasi(n);
    return 0;
}
