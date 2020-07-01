#include<iostream>
using namespace std;
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2]; // Temp arrays + Copy data to them.
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0;j = 0;k = l; 
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    // copy remaining elements
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergesort(int arr[], int low, int high){
    if(low<high){
         int middle = low+(high-low)/2;
         mergesort(arr,low,middle);
         mergesort(arr,middle+1,high);
         merge(arr,low,middle,high);
    }
}
int main(){
    int arr[] = { 12, 11, 13, 5, 6, 7 };
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    for(int i =0;i<arr_size;i++){
            cout << arr[i] << " ";
    }
    mergesort(arr,0,arr_size-1);
    for(int i=0;i<arr_size;i++){
        cout << arr[i] << " ";
    }
return 0;
}
