# Missing number in array
Given an array of size N-1 such that it only contains distinct integers in the range of 1 to N. Find the missing element.

## Example 1:

Input:
N = 5
A[] = {1,2,3,5}
Output: 4

## Example 2:

Input:
N = 10
A[] = {6,1,2,8,3,4,7,10,5}
Output: 9

Your Task :
You don't need to read input or print anything. Complete the function MissingNumber() that takes array and N as input  parameters and returns the value of the missing number.


Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)

## Brute Force approach
Time Complexity: O(N^2)

```c
for(int i(0); i<n; i++){
  const find_element = array.find(i+1);
  if(!find_element){
  }
}
```

```c
    int missingNumber(vector<int>& array, int n) {
        int a=0;
        int b=0;

        // sare arrays elements ka xor
        for(int i=0;i<n-1;i++){ // do not have elements equal to n it is equal to n-1
           b=b+array[i];
           a=a+(i+1);
        }
        a=a+n; // xor till 4 and n = 5
        
        return a-b;   
    }

   int missingNumber(vector<int>& array, int n) {
        int a=(n*(n+1))/2;
        int b=0;
        
           
        // sare arrays elements ka xor
        for(int i=0;i<n-1;i++){ // do not have elements equal to n it is equal to n-1
           b=b+array[i];
        
        }
        
        return a-b;   
    }
```
## Best Solution

summation make bigger intergers

```c
int missingNumber(vector<int>& array, int n) {
        int a=0;
        int b=0;
        
           
        // sare arrays elements ka xor
        for(int i=0;i<n-1;i++){ // do not have elements equal to n it is equal to n-1
           b=b^array[i];
           a=a^(i+1);
        }
        a=a^n; // xor till 4 and n = 5
        
        return a^b;   
    }
```
