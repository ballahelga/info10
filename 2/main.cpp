
#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d;
    cout<< "a=";
    cin>> a;
    d=0;
    b=a;
    while (b>0) {
        c=b%10;
        b=b/10;
        d=d*10+c;
        if(c%2==1){
            c=c-1;
            d=d*10+c;
        }
    }
    cout <<"a szam forditottja="<< d <<endl;
    return 0;
}

