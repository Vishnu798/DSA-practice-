//first approach
vector<int> Solution::solve(vector<int> &nums) {
    
    for(int i=0;i<nums.size();i++){
        nums[i] = abs(nums[i] * nums[i]);
    }
    // int max = *max_element(nums.begin(), nums.end());
 
    // int min = *min_element(nums.begin(), nums.end());
    
    // int range = max - min + 1;
    // vector<int> count(range);
    // for(int i=0;i<nums.size();i++){
    //     count[nums[i] - min]++;
    // }
   
     
  


    //  for(int i=1;i<count.size();i++){
    //      count[i] = count[i]+count[i-1];
    //  }
    //  vector<int> output(nums.size());
    //      for (int i = nums.size() - 1; i >= 0; i--) {
    //     output[--count[nums[i] - min]] = nums[i];
    
    // }
    // return output;
  
  // 2nd approach
  
   vector<int> arr;
    for(auto it: nums){
        arr.push_back(it);
    }
    sort(arr.begin(),arr.end());
    return arr;
}
