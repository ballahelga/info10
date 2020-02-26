#include <iostream>
#include <stdlib.h>


using namespace std;

int main()
{
    int tomb[100000];
    int n,i,j,aux;
    n=10;
    for(i=0;i<n;i++){
        tomb[i]=rand()%1000;
    }

   for(i=0;i<n;i++){
        cout<<tomb[i]<<" ";
   }
   cout<<endl;
   for(i=0;i<n-1;i++)
   for(j=i+1;j<n;j++){
    if(tomb[i]>tomb[j]){
        aux=tomb[j];
        tomb[j]=tomb[i];
        tomb[i]=aux;
    }
   }
   for(i=0;i<n;i++){
    cout<<tomb[i] <<" ";
   }
    return 0;
}
