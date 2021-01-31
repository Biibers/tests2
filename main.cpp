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
cin>>a;
char x;
int b;
int atb=0;
while(cin>>x>>b&&x!='e')
{
    if(x=='+')
    {
        atb=saskaiti(a,b);
        cout<<a<<'+'<<b<<'='<<atb;
    }
    else if(x=='-')
    {
        atb=atnem(a,b);
        cout<<a<<'-'<<b<<'='<<atb;
    }
    else if(x=='*')
    {
        atb=reizini(a,b);
        cout<<a<<'*'<<b<<'='<<atb;
    }
    else if(x=='/')
    {
        atb=dali(a,b);
        cout<<a<<'/'<<b<<'='<<atb;
    }
    a=atb;
}
return 0;
}
