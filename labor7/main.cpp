#include <iostream>

using namespace std;

int main()
{
     int n,i,a;
     double s=0,db=0;
    cout<<"n=";
    cin>>n;
    for(i=0;i<n;i++){
        cout<<"a=";
        cin>>a;
    if(a%2==0){
         s+=a;
         db++;
    }
    }
  cout <<"atlag=" << s/db << endl;
    return 0;

    }
