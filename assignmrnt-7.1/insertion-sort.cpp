 vector<int> sortArray(vector<int>& nums) {
       
   int temp,j;
for(int i=1;i<nums.size();i++){
    temp=nums[i];
    j=i-1;
    while(j>=0 && nums[j]>temp){
       
        nums[j+1]=nums[j];
       
        j--;
      
    }
    nums[j+1]=temp;
}   
return nums;
    }
