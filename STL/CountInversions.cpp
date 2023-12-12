long long getInversions(long long *arr, int n){

    
    int InvC;
    // Write your code here.
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){

                InvC++;

            }
        }
    }
    return InvC;
}
