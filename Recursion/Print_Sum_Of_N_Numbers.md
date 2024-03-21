# Print sum of N Numbers

## Using parameters

```c
int sumOfNNumbers(int currentNumber, int maxNumber, int sum){
    if(currentNumber > maxNumber){
        cout << sum << endl;
        return 0;
    }
    sumOfNNumbers(currentNumber+1,maxNumber,sum+currentNumber);
    return 0;
}

int main(){
    int n;
    cin >> n;
    sumOfNNumbers(1, n, 0);
    return 0;
}
```

#### Optimized ( Reduced Parameters )

```c
int sumOfNNumbers(int currentNumber, int sum){
    if(currentNumber < 1){
        cout << sum << endl;
        return 0;
    }
    sumOfNNumbers(currentNumber-1,sum+currentNumber);
    return 0;
}

int main(){
    int n;
    cin >> n;
    sumOfNNumbers(n, 0);
    return 0;
}
```

## Using Functional Return

```c
int sumOfNNumbers(int currentNumber){
    if(currentNumber == 1){
        return 1;
    }
    return currentNumber + sumOfNNumbers(currentNumber - 1);
}

int main(){
    int n;
    cin >> n;
    int sum = sumOfNNumbers(n);
    cout << "summation: " << sum << endl;
    return 0;
}
```
