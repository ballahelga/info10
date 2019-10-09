#include <iostream>

using namespace std;

int main()
{

     int a,max=-INT_MAX,min=INT_MAX,i;
     double s=1,n=0;

   for(i=0;i<5;i++){
    cout<<"a="<< i <<". szam:";
        cin>>a;
      if(a>max) {
           max=a;
        }
        if (a<min){
           min=a;
        }

   }
    a= max;
   int b= min;

   while(a!=b) {
        if(a>b) {
           a=a-b;
        }
        else {
           b=b-a ;
        }
       }


cout <<"lnko" << a << endl;
cout <<"lkkt" << max*min/a << endl;
    return 0;

}
