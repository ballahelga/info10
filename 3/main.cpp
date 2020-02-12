
#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,o,e,f,n,i,g,s=0,p=0;
    cout<<"e=";
    cin>>e;
    cout<<"f=";
    cin>>f;

    bool prim=false,pallindrom=false;
    for(i=e;i<=f;i++){

    pallindrom=false;
    a=i;
     d=0;
    while (a>=1) {
        c=a%10;
        a=a/10;
        d=d*10+c;
    if(d==i){
    pallindrom=true;

    }
    } prim=true;
       n=i/2;
       for(o=2;o<n;o++){
       if(i%o==0){
        prim=false;

       }

    }

 if( prim==true &&  pallindrom==true){
    cout<< "a prim-pallindrom szamok"<<i<<endl;
   }
    }


    return 0;
}

