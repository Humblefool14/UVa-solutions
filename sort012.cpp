    void sort012(int a[], int n){
        // code here 
        uint32_t count_0 =0;
        uint32_t count_1 = 0;
        uint32_t count_2 = 0;
        for(int i =0; i<n; i++){
            if(a[i]==0){
                count_0++;
            }
            if(a[i]==1){
                count_1++;
            }
            if(a[i]==2){
                count_2++;
            }
        }
        for(int i =0; i<count_0; i++){
            a[i] = 0; 
        }
        for(int i = count_0; i< (count_0+count_1); i++){
            a[i] = 1; 
        }
        
        for(int i = count_0+count_1; i<n; i++){
            a[i] = 2; 
        }
        
    }