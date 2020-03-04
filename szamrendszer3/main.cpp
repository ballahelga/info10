#include <iostream>

using namespace std;

int main()
{
char  ujszam[100];
 int szam,szamjegy,szamrendszer,n=0,i;
    cout<< "szam=";
    cin>> szam;
    cout<< "szamrendszer=";
    cin>> szamrendszer;
    while(szam>0){
       szamjegy=szam%szamrendszer;
       szam=szam/szamrendszer;
       if(szamjegy>9){
        if (szamjegy==10){
            ujszam[n]='A';
        }
         if (szamjegy==11){
            ujszam[n]='B';
        }
         if (szamjegy==12){
            ujszam[n]='C';
        }
         if (szamjegy==13){
            ujszam[n]='D';
        }
         if (szamjegy==14){
            ujszam[n]='E';

        } if (szamjegy==15){
            ujszam[n]='F';
        }
       }else{
           char c=(char) (szamjegy+48);
           ujszam[n]=c;
       }
   n++;


    }
    for(i=n;i>=0;i--)


     cout<< ujszam ;
    return 0;
}
