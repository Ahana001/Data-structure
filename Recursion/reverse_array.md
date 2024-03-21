# Reverse Array

```c
void reverseArray(int left, int right, int a[])
{
    if(left >= right){
        return;
    }
    swap(a[left],a[right]);  // built-in method
    return reverseArray(left+1,right-1,a);
}

int main(){
    int arr[8] = {1,2,3,4,5,6,7,8};
    reverseArray(0, 7, arr);
    for (int i=0; i<8; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
```

### Optimization ( Reduce Pointers )

Array           :- [ 1, 2, 3, 4, 5, 6, 7 ]
index           :-   0  1  2  3  4  5  6

n=7
swappping index :-   0 -> 6
                     1 -> 5
                     2 -> 4  (n-i-1)


```c
void reverseArray(int left, int n, int a[])
{
    if(left >= n/2){
        return;
    }
    swap(a[left],a[n-left-1]);
    return reverseArray(left + 1, n, a);
}

int main(){
    int arr[8] = {1,2,3,4,5,6,7,8};
    reverseArray(0, 8, arr);
    for (int i=0; i<8; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
```
