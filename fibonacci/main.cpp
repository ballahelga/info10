#include <iostream>

using namespace std;

int main()
{ int v[1000];
  int prev1,prev2,f,n,i;
  cout<<"n=";
  cin>>n;
  v[0]=prev2=0;
  v[1]=prev1=1;
  for(i=2;i<=n;i++){
     v[i]=v[i-1]+v[i-2];
  }
   for(i=2;i<n;i++){
        f=prev1+prev2;
        prev2=prev1;
        prev1=f;
   }
  cout<<v[n]<< " " << f <<endl;
    return 0;
}
