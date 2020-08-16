#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
// Returns element closest to target in arr[]
int findClosest(vector<int> arr[], int n, int target)
{
    // Corner cases
    if (target <= (*arr[0]))
        return arr[0];
    if (target >= arr[n - 1])
        return arr[n - 1];

    // Doing binary search
    int i = 0, j = n, mid = 0;
    while (i < j) {
        mid = (i + j) / 2;

        if (arr[mid] == target)
            return arr[mid];

        /* If target is less than array element,
            then search in left */
        if (target < arr[mid]) {

            // If target is greater than previous
            // to mid, return closest of two
            if (mid > 0 && target > arr[mid - 1])
                return getClosest(arr[mid - 1],
                                  arr[mid], target);

            /* Repeat for left half */
            j = mid;
        }

        // If target is greater than mid
        else {
            if (mid < n - 1 && target < arr[mid + 1])
                return getClosest(arr[mid],
                                  arr[mid + 1], target);
            // update i
            i = mid + 1;
        }
    }

    // Only single element left after search
    return arr[mid];
}

// Method to compare which one is the more close.
// We find the closest by taking the difference
// between the target and both values. It assumes
// that val2 is greater than val1 and target lies
// between these two.
int getClosest(int val1, int val2,
               int target)
{
    if (target - val1 >= val2 - target)
        return val2;
    else
        return val1;
}

int main()
{
 int n;
 while (cin >>n){
        int arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
 vector <int> v;
 for(int i=0;i<n;i++){
     for(int j=0;j<i;j++){
         if(arr[i]!=arr[j]){ // distinct numbers
             v.push_back(arr[i]+arr[j]);
            }
        }
    }
        std::sort(v.begin(), v.end());
        auto last = std::unique(v.begin(), v.end());
        v.erase(last, v.end());

int Q,num;
cin >> Q;
while(Q--){
            cin >> num;
            int cv = (v,v.size(),num);
            cout << "Closest to the number is "<<num <<" " << cv << endl;
        }
    }
return 0;
}
