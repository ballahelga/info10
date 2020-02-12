#include <iostream>

using namespace std;

int main()
{ int v[1000];
  int prev1,prev2,f,n,i,o,prim;
  cout<<"n=";
  cin>>n;
  v[0]=prev2=0;
  v[1]=prev1=1;
  for(i=2;i<n+1;i++){
     v[i]=v[i-1]+v[i-2];
     for(o=2;o<v[i]/2;o++){
       if(v[i]%o==0){
        v[i]=prim;
  }
  }
  }
  if(v[i]==prim){
    cout<<v[n-1]<< " " <<endl;
  }else{
       cout<<v[n]<< " " <<endl;
  }
    return 0;
}

