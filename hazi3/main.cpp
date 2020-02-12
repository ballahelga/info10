#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,e,f;
   cout<<"e=";
   cin>>e;
   cout<<"f=";
   cin>>f;
   cout<<"a=";
   cin>>a;
   for(e<=a<=f;){
   b=a;
   d=0;
    while(b>0) {
    c=b % 10;
    b=b / 10;
    d=d*10+c;

       }
   }
if (a=d,a%2==1){
    cout <<"a szam prim pallindrom"<<a <<endl;

}


    return 0;
}
