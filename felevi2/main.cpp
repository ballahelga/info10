#include <iostream>

using namespace std;

int main()
{
    int n,s=0;
    cout<<"n=";
    cin>>n;
    for(int i=0;i<n;i++){
        int szam;
         cout<<"szam=";
    cin>>szam;
    while( szam>0){
        int szamjegy=szam%10;
        szam/=10;
        if(szamjegy%4>0){
            s+=szamjegy;
        }
    }
    }
    cout<<s<<endl;
    return 0;
}
