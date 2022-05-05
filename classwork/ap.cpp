#include<bits/stdc++.h>

using namespace std;

    

int main(){
int a,d,n;
cout<<"enter first ele : ";
cin>>a;
cout<<"enter diff : ";
cin>>d;
cout<<"number of terms : " ;
cin>>n;
int current,next=0;
current = a;
for(int i=1;i<n;i++){
    
    next = current + d;
    current = next;
    cout<<next<<"  ";
}

return 0;
}
