#include <iostream>

using namespace std;

int main()
{
    int oszto=2,a;
    bool prim=true;
    cout<<"a=";
    cin>>a;
    for(oszto=2; oszto<a/2; oszto++)
    {
        if(a%oszto==0)
        {
            prim=false;
        }

    }
    if(prim)
    {
        cout <<"a szam prim";
    }
    else
    {
        cout <<"a szam nem prim";
    }
    return 0;
}
