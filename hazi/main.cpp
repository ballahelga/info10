#include <iostream>

using namespace std;

int main()
{
     int tomb[1000];
     int tomb2[1001];
    int i,n,m,s=0,b,c,d;
    cout<<"n=";
    cin>>n;
    for(i=0;i<n;i++){
        cout<<"tomb["<<i<<"]=";
        cin>>tomb[i];
    }
        cout<<"m=";
        cin>>m;
     for(i=0;i<m;i++){
     cout<<"tomb2["<<i<<"]=";
        cin>>tomb2[i];
    }
     for(i=0;i<n;i++){
    if(tomb[i]==tomb2[i]){

              s=s+tomb[i];
        }
    }
    b=s;
    d=0;

 while(b>0) {
    c=b % 10;
    b=b / 10;
    d=d*10+c;
 }
 cout<<d;
return 0;
}
