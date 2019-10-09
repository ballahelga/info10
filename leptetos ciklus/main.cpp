#include <iostream>

using namespace std;

int main()
{
    int n,i,a,s=0;
    cout<<"n=";
    cin>>n;
    for(i=0;i<n;i++){
        cout<<"a=";
        cin>>a;
        s+=a;
    }
    cout<<"s="<<s;
    return 0;
}
