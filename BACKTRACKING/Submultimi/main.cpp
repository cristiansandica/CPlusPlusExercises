#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("submultimi.in");
ofstream fout("submultimi.out");
int st[15], AS,n,k;
void init()
{
    st[k]=0;
}
int succesor()
{
    if(st[k]<n)
    {
        st[k]++;
        return 1;
    }
    return 0;
}
int valid()
{
    for(int i=1; i<k; i++)
        if(st[k]<=st[i])
            return 0;
    return 1;

}
int solutie()
{
    return k<=n;
}
void tipar()
{
    for(int i =1; i<=k; i++)
        fout<<st[i]<<" ";
    fout<<endl;

}
void backt()
{
    k=1;
    init();
    while(k>0)
    {
        do
        {
            AS=succesor();
        }
        while(AS&&valid()==0);
        if(AS)
            if(solutie())
            {
                tipar();
                k++;
                init();
            }
            else
            {
                k++;
                init();
            }
        else k--;

    }
}
int main()
{
    fin>>n;
    backt();
    return 0;
}
