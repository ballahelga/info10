#include <iostream>

using namespace std;

int main()
{

     int i=0,a;
     double s=0;

    while(i<10) {
        cout<<"a=";
        cin>>a;
        s+=a;
         i++;
    }
  s=s/10;
  cout <<"atlag=" << s << endl;
    return 0;
   }
