  vector<int> sortArray(vector<int>& nums) {
       
  int min;
    for(int i=0;i<nums.size();i++){
        min=i;
        for(int j=i+1;j<nums.size();j++){
            if(nums[j]<nums[min]){
                min=j;
            }
        }
        swap(nums[min], nums[i]);

    }
    return nums;
    }
