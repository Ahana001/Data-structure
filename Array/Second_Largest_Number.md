# Second Largest Number

## Brute

Time Complexity: O(nlogn) // sorting

Space Complexity: O(1)

```c
vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    sort(a.begin(), a.end());

    vector<int> result;
    result.push_back(a[n-2]);
    result.push_back(a[1]);

    return result;
}
```

## Optimize

Time Complexity: O(2n)

Space Complexity: O(1)

```c
int secondLargestElement(int n, vector<int> a){
    int largest = a[0];
    int secondLargest =  -1;

    for(int i=1; i<n; i++){
        if(largest <a[i] ){
            secondLargest = largest;
            largest = a[i];
        }else if(secondLargest < a[i]){
            secondLargest = a[i];
        }
    }
    return secondLargest;
}

int secondSmallestElement(int n, vector<int> a){
    int small = a[0];
    int secondSmallest =  INT_MAX;

    for(int i=1; i<n; i++){
        if(small > a[i] ){
            secondSmallest = small;
            small = a[i];
        }else if(secondSmallest > a[i]){
            secondSmallest = a[i];
        }
    }

    return secondSmallest;
}

vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    vector<int> result;
    result.push_back(secondLargestElement( n,  a));
    result.push_back(secondSmallestElement( n,  a));

    return result;
}
```
