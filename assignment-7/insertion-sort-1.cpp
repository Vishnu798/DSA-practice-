void printVector( int n, vector<int>A){
    for(int a:A) 
    cout<<a<<" ";
    cout<<"\n";
    
}
void insertionSort1(int n, vector<int> arr) {
    int temp,j;
   for(int i=n-1; i>=0;i--){
      temp=arr[i];
      
      j=i-1;
      while(j>=0 && arr[j] > temp){

      arr[j+1] = arr[j];
      printVector(n, arr);
      j--;

  }
  arr[j+1] = temp;
  }
   printVector(n, arr);
}
