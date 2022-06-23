#include<bits/stdc++.h>
using namespace std;
bool search(vector<vector<int>> D,int c, int target_ele, int target_row){
    int flag;
    for(int i=0;i<c;i++){
        if(D[target_row][i] == target_ele){
        flag=1;
        break;
        }
    }
    if(flag==1){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int r,c,ele,target_row, target_ele;
    cout<<"enter the rows : ";
    cin>>r;
    cout<<"enter the columns : ";
    cin>>c;
    vector<vector<int>> A;
    for(int i=0;i<r;i++){
        vector<int> a;
        for(int j=0;j<c;j++){
            cin>>ele;
            a.push_back(ele);
        }
        A.push_back(a);
    }
    cout<<"enter the target ele : ";
    cin>>target_ele;
    cout<<"enter the target row : ";
    cin>>target_row;
    
    bool result = search(A, c, target_ele, target_row);
    cout<<result;
     return 0;
}
