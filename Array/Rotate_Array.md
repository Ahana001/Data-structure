#  Rotate Array

## Left Rotate an Array by One

Time Complexity: O(n)

Space Complexity: O(1)

```c
vector<int> rotateArray(vector<int>& arr, int n) {
    // Write your code here.
    int temp = arr[0];
    for(int i=0; i<n-1; i++){
        arr[i] = arr[i+1];
    }
    arr[n-1] = temp;
    return arr;
}

```

## Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

## Example 1:

```
Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]
```

## Example 2:

```
Input: nums = [-1,-100,3,99], k = 2
Output: [3,99,-1,-100]
Explanation: 
rotate 1 steps to the right: [99,-1,-100,3]
rotate 2 steps to the right: [3,99,-1,-100]
```

Time Complexity: O(k) + O(n-k) + O(k) -> O(n+k)

Space Complexity: O(k) 

```java

class Solution {
    public void rotate(int[] nums, int k) {
        int[] temp = new int[k];
        int index = 0;
        int n = nums.length;
        int lastIndex = n - 1;
        k=k%n;
        
        if (n > 1) {

            for (int j = n - k; j < nums.length; j++) {
                temp[index] = nums[j];
                index++;
            }

            for (int i = n - k - 1; i >= 0; i--) {
                nums[lastIndex] = nums[i];
                lastIndex--;
            }

            for (int l = 0; l < k; l++) {
                nums[l] = temp[l];
            }

        }

    }
}
```

```c
vector<int> rotateArray(vector<int> arr, int k)
{
    // Write your code here.
    // { 1, 2, 3, 4, 5, 6, 7, 8 }
    //  K=3
    // { 1, 2,  || 4,  5 }
    //   0  1   || 2   3
    int n = arr.size();
    k = k % n;
    int tempArrayForKElements[k];

    for (int i = 0; i < k; i++){
        tempArrayForKElements[i] = arr[i];  // use push_bak() for vector operations
    }
    for (int j = k; j < n; j++){
        arr[j - k] = arr[j];
    }
    for (int l = n - k; l < n; l++){
        arr[l] = tempArrayForKElements[l - (n-k)];
    }

    return arr;
}

```

The intuition behind this approach is to reverse the array in three steps:

* Reverse the entire array.
* Reverse the first k elements.
* Reverse the remaining n−k elements.

Time Complexity: O(k) + O(n-k) + O(n) -> O(2n)

Space Complexity: O(1) 

```java
class Solution {
    public void rotate(int[] nums, int k) {
       int n = nums.length;
       k = k%n; // reduce one whole array rotation
       reverse(nums,0,n-1);
       reverse(nums,0,k-1);
       reverse(nums,k,n-1);
    }
    public void reverse(int nums[],int i,int j){
            while(i<j){
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
                i++;
                j--;
            }
            
    }
}
```

```c
vector<int> rotateArray(vector<int> arr, int k)
{
    // Write your code here.
    // { 1, 2, 3, 4, 5, 6, 7, 8 }
    //  K=3
    // { 1, 2,  || 4,  5 }
    //   0  1   || 2   3
    reverse(arr.begin(), arr.begin() +k);
    reverse(arr.begin() +k, arr.end());
    reverse(arr.begin(), arr.end());

    return arr;
}
```
