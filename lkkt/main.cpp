#include <iostream>

using namespace std;

int main()
{

     int a,b;
     double s=1;
        cout<<"a=";
        cin>>a;
        cout<<"b=";
        cin>>b;
        s=a*b;
    while(a!=b) {
        if(a>b) {
           a=a-b;
        }
        else {
           b=b-a ;
        }
       }

  cout <<"lkkt=" << s/a << endl;
    return 0;
}
