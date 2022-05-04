vector<int>getTwoLargestNumbers(vector<int>&A){
    int max1=INT_MIN, max2=INT_MIN;
    for(int i=0;i<A.size();i++){
        if(A[i] > max1){
            
            max2=max1;
            max1=A[i];
        }
        else if(max1==A[i]){
            max2=max1;
        }
        else{
            if(max2<A[i]&&A[i]!=max1){
                max2=A[i];
            }
        }
    }
    //write your code to find max1 and max2
    
    
    return {max1,max2};
}
