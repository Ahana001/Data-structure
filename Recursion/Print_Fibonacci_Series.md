# Print Fibonacci Series

```c
int fibonacciNumbers(int n){
    if(n<=1) return n;
    int left = fibonacciNumbers(n-1);
    int right = fibonacciNumbers(n-2);
    return left + right;
}

int main(){
    int n = 5;
    vector<int> ds;
    for(int i=0; i<n; i++){
        ds.push_back(fibonacciNumbers(i));
    }
    // for(int j:ds){
    //     cout << j << " ";
    // }
    return 0;
}
```

```c
vector<int> generateFibonacciNumbers(int n) {
    vector<int> ds;
    int left=0;
    int right=1;

    if(n>=1){
         ds.push_back(left);
    }

    if(n>=2){
         ds.push_back(right);
    }
   
    for(int i=3; i<=n; i++){
        int fibonacci = left+right;
        ds.push_back(fibonacci);
        left=right;
        right=fibonacci;
    }
    
    return ds;
}
```
