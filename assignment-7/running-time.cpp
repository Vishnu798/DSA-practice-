int runningTime(vector<int> arr) {
 int temp,j,count=0;
   for(int i=1; i<arr.size();i++){
      temp=arr[i];
      
      j=i-1;
      while(j>=0 && arr[j] > temp){

      arr[j+1] = arr[j];
      count++;
      j--;

  }
  arr[j+1] = temp;
 
}
  return count;
}
