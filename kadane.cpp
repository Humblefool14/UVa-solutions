uint32_t maxSubArray(uint32_t *arr){
    if (arr.empty()) {
        return 0;
    }

    uint32_t current_max = arr[0]; 
    uint32_t global_max  = arr[0]; 

    for(int i = 1; i< arr.size()-1; i++){
        current_max = max(arr[i], current_max + arr[i]); 
        if(current_max > global_max){
            global_max = current_max; 
        }
    }
    return global_max; 
}