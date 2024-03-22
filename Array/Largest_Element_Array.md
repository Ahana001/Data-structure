# Largest Element in the Array

## Brute

Time Complexity: O(nlogn)   // for sorting
Space Complexity: O(1)     // Quick sort space complexity O(1)

```c
int largestElement(vector<int> &arr, int n) {
    // Write your code here.
    sort(arr.begin(), arr.end());
    return arr[n-1];
}
```

## Optimize

Time Complexity: O(n)   
Space Complexity: O(1)  

```c
int largestElement(vector<int> &arr, int n) {
    // Write your code here.
    int largest = arr[0];
    for(int i=1; i<n; i++){
        if(largest < arr[i]){
            largest = arr[i];
        }
    }
    return largest;
}
```
