#include <iostream>

using namespace std;

int main()
{

    int szam,ujszam=0,szamjegy,hatvany=1,szamrendszer;
    cout<< "szam=";
    cin>> szam;
    cout<< "szamrendszer=";
    cin>> szamrendszer;
    while(szam>0){
       szamjegy=szam%10;
       szam=szam/10;
       ujszam=szamjegy*hatvany+ujszam;
       hatvany=hatvany*2;
    }
     cout<< "uj szam"<< ujszam;
    return 0;
}
