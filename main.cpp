#include <iostream>

using namespace std;

int saskaiti (int a,int b)
{
    int c=a+b;
    return c;
}
int main()
{
int a;
char x;
int b;
cin>>a>>x>>b;

if(x='+')
{
    cout<<saskaiti(a,b);

}
return 0;
}
