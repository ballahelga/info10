#include <iostream>

using namespace std;

int main()
{
     int i=0,a=1;
     double s=0;

     while(a>=0) {
     cout<<"a=";
      cin>>a;
       if(a>0 && a%2==0){
        s=s+a;
       }
    }

  cout <<"atlag=" << s << endl;
    return 0;
   }
