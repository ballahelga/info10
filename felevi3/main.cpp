#include <iostream>

using namespace std;

int main()
{

    int n,s=0,szam,b;
    cout<<"n=";
    cin>>n;
    for(int i=0;i<n;i++){
    cout<<"szam=";
    cin>>szam;
    for(int oszto=2;oszto<(szam+1)/2;oszto++){
        if(szam%oszto>0){
            s+=oszto;
        }
    }
    }



     cout<<s<<endl;
    return 0;
}
