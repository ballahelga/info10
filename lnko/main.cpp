#include <iostream>

using namespace std;

int main()
{


     int a,b;
     double s=0;
        cout<<"a=";
        cin>>a;
        cout<<"b=";
        cin>>b;
    while(a!=b) {
        if(a>b) {
           a=a-b;
        }
        else {
           b=b-a ;
        }
       }
  cout <<"lnko=" << a << endl;
    return 0;
}

