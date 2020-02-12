#include <iostream>

using namespace std;

int main()
{
    int n,a,o,i,s,p=1,;
    cout<<"n=";
    cin>>n;
for(int i=0;i<n;i++ ){

        cout<<"a=";
        cin>>a;
            for (int o=3;o<a/2+1;o+=2){
                if(s%o==0){
                    p*=o;
                }
            }
        }



    cout<<p<<endl;
    return 0;
}
