#include<fstream>
using namespace std;
ifstream fin("permutari1.in");
ofstream fout("permutari1.out");
int i,j,n, v[9];
void citire()
{
    fin>>n;
}
void scrie()
{
    for(int i=1; i<=n; ++i)
        fout<<v[i]<<" ";
    fout<<endl;
}
int verificare(int k)
{
    for(int i=1; i<k; ++i)
        if(v[i]==v[k])
            return 0;
    return 1;
}
void bk(int k)
{
    if(k==n+1)
        scrie();
    else
        for(int i=n; i>=1; i--)
        {
            v[k]=i;
            if(verificare(k)==1)
            {
                bk(k+1);
            }
        }
}
int main()
{
    citire();
    bk(1);
    fout.close();
    return 0;
}
