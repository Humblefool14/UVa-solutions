class Solution {
  public:

    int getMinDiff(int arr[], int n, int k) {
        
        sort(arr,arr+n);
        int ans = arr[n - 1] - arr[0];
        for(int i=1; i<n; i++){
            if(arr[i]-k<0){
                continue;
            }
           int maxi = max(arr[i-1]+k,arr[n-1]-k);
           int mini = min(arr[0]+k,arr[i]-k);
            ans = min(ans,maxi-mini);
        }
        return ans;
       
      //printf("Min :%d \n",min);
      //printf("Max :%d \n",max);
       
       //return (max-min);
    }

};