#include <iostream>

using namespace std;

int main()
{

     int n,i,a;
     double s=0,db1=0,p=0,db2=0;
    cout<<"n=";
    cin>>n;
    for(i=0;i<n;i++){
        cout<<"a=";
        cin>>a;
    if(a%2==0){
         s+=a;
         db1++;
    }else{
        p+=a;
        db2++;
    }
    }
  cout <<"parosak atlaga=" << s/db1 << endl;
   cout <<"paratlanok atlaga=" << p/db2 << endl;
    return 0;
    return 0;
}
