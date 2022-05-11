#include<bits/stdc++.h>
using namespace std ;

int main(){
  vector<vector<int>> ar;
  int m,n,x,a,b,sum=0;
  cout<<"enter row for array 1 :";
  cin>>m;
  cout<<"enter column for array 1 : ";
  cin>>n;
  cout<<"enter row for array 2 :";
  cin>>a;
  cout<<"enter column for array 2 : ";
  cin>>b;
   vector<vector<int>> A,B,C;
   if(a == m){
  for(int i=0;i<m;i++){
   vector<int> v;
    for(int j=0;j<n;j++){
      cin>>x;
      v.push_back(x);
      }
      A.push_back(v);
  }
  cout<<"\n";
  for(int i=0;i<b;i++){
   vector<int> v;
    for(int j=0;j<n;j++){
      cin>>x;
      v.push_back(x);
      }
      B.push_back(v);
  }
  for(int i=0;i<m;i++){
     vector<int> v;
    for(int j=0;j<b;j++){
     
      for(int k=0;k<a;k++){
        sum +=A[i][k] * B[k][j];
    }
     v.push_back(sum);
     sum=0;
    }
    C.push_back(v);
   }
   cout<<endl<<endl;
   for(int i=0;i<m;i++){
     for(int j=0;j<b;j++){
       cout<<C[i][j]<<" ";
     }
     cout<<"\n";
   }
   }
   else{
     cout<<"not possible";
   }
  return 0;
}
