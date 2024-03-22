#  Check Sorted Array

Time Complexity: O(n)

Space Complexity: O(1)

```c
int isSorted(int n, vector<int> a) {
    // Write your code here.
    for(int i=1; i<n; i++){
        if(a[i] < a[i-1]){
            return 0;
        }
    }
    return 1;
}

```
