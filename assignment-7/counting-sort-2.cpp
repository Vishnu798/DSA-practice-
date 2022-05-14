vector<int> countingSort(vector<int> arr) {
     vector<int> count(100,0);
    for(int i=0;i<arr.size();i++){
        count[arr[i]]++;
    }


     for(int i=1;i<=count.size();i++){
         count[i] = count[i]+count[i-1];
     }
     vector<int> output(arr.size());
     for(int i=arr.size()-1;i>=0;i--){
         output[--count[arr[i]]]=arr[i];
     }

    
   

    
    return output;
}
