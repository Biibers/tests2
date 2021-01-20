#include <iostream>

using namespace std;

int saskaiti (int a,int b)
{
    return a+b;
}
int atnem (int a,int b)
{
    return a-b;
}
int reizini (int a,int b)
{
    return a*b;
}
int dali (int a,int b)
{
    return a/b;
}
int main()
{
int a;
char x;
int b;
cin>>a>>x>>b;
int atb=0;
if(x='+')
{
    atb=saskaiti(a,b);
}
if(x='-')
{
    atb=atnem(a,b)
}
if(x='*')
{
    atb=reizini(a,b)
}
if(x='/')
{
    atb=dali(a,b)
}
cout<<atb;
return 0;
}
