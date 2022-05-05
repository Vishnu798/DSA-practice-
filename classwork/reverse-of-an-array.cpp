#include<bits/stdc++.h>

using namespace std;
void reverse(vector<int> &arr){
    
for(int i=0;i<arr.size()/2;i++){
    

   int temp=arr[i];
   arr[i]=arr[arr.size()-1-i];
   arr[arr.size()-1-i]=temp; 
}
for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
}
}
int main(){
    vector<int> arr;
    int size,ele;
    cout<<"enter the size : ";
    cin>>size;
    for(int i=0;i<size;i++){
        cout<<"enter the " << i << " element : ";
        cin>>ele;
        arr.push_back(ele);
    }
        reverse(arr); 
}
