#include<bits/stdc++.h>
using namespace std;
bool search(vector<vector<int>> D,int r, int target_ele, int target_col){
    int flag;
    for(int i=0;i<r;i++){
        if(D[i][target_col] == target_ele){
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
    int r,c,ele,target_col, target_ele;
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
    cout<<"enter the target col : ";
    cin>>target_col;
    
    bool result = search(A, r, target_ele, target_col);
    cout<<result;
     return 0;
}
