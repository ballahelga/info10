

    #include <iostream>

using namespace std;

int main()
{
    int szam1, szam2,szam3,szam4,szam5,szam6,s=0,p=0;
    cout <<"szam1:" ;
    cin >>szam1;
    cout <<"szam2:";
    cin >>szam2;
    cout <<"szam3:";
    cin >>szam3;
     cout <<"szam4:";
    cin >>szam4;
   cout <<"szam5:";
    cin >>szam5;
   cout <<"szam6:";
    cin >>szam6;
   if (szam1%2==0){
        s+=szam1;
   } else{
       p+=szam1;
   }
   if (szam2%2==0){
        s+=szam2;
   } else{
       p+=szam2;
   }
   if (szam3%2==0){
        s+=szam3;
   } else{
       p+=szam3;
   }
   if (szam4%2==0){
        s+=szam4;
   } else{
       p+=szam4;
   }
   if (szam5%2==0){
        s+=szam5;
   } else{
       p+=szam5;
   }
   if (szam6%2==0){
        s+=szam6;
   } else{
       p+=szam6;
   }
   cout <<"paros szamok osszage" << s << endl;
   cout <<"paratlan szamok osszage" << p << endl;
    return 0;
}
