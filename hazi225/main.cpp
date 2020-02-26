#include <iostream>
#include <fstream>

using namespace std;

int main()
{
   int i, a, n,b=1,c=0,s=0;
    ifstream in("input.txt");
    ofstream out("output.txt");
    in >> n;
    for(i=0; i<n; i++){
      in >> a;
      s=0;
     for(int oszto=1;oszto<a/2+1;oszto++){
        if(a%oszto==0){
            s+=oszto;

        }
       }
        if(a==s){
          out << b << endl;
       }
       else{
       out << c << endl;
       }
    }
    out.close();
    in.close();
    return 0;
}
