class Solution {
public:
    vector<int>mergeSortedArrays(vector<int>A,vector<int>B){
  
    vector<int>C;
    int i=0,j=0;
    while(i<A.size() && j<B.size()){
        if(A[i]<B[j]){
            C.push_back(A[i]);
            i++;
        }
        else {
            C.push_back(B[j]);
            j++;
        }
    }
    while(i<A.size()){
        C.push_back(A[i++]);
    }
    
    while(j<B.size()){
        C.push_back(B[j++]);
    }
    return C;
}
   vector<int> sortArray(vector<int>& nums) {
       
  
    if(nums.size()>1){
        vector<int>C;
        vector<int>D;
        int n=nums.size();
        for(int i=0;i<n/2;i++){
            C.push_back(nums[i]);
        }
           
         for(int i=n/2;i<n;i++){
             D.push_back(nums[i]);
         }
        sortArray(C);
        sortArray(D);
        nums = mergeSortedArrays(C,D);
        
    }
        return nums;
    }
};
