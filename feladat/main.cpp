#include <iostream>

using namespace std;

int main()
{   int a,i,n,s=0,db=0,smax=INT_MAX,input=0;

    cout<<"n";
        cin>>n;
    for(i=0;i<n;i++){
        cout<<"a=";
        cin>>a;
        while(input>>a){
            if(s+a<0){
                s=0;
                db=0;
            }else{
            s=s+a;
            db++;
            if(smax<s && db>1){
                smax=s;
            }
            }
        }

    }
     cout<<"a szamok osszege"<< smax <<endl;

    return 0;
}
