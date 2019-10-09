#include <iostream>

using namespace std;

int main()
{
     int i=1,a;
     double s=0;

    for(i=0;i<10;i++){
        cout<<"a=";
        cin>>a;
        s+=a;
    }
    s=s/10;
  cout <<"atlag=" << s << endl;
    return 0;


}
