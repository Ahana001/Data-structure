# Print N Times Name

## Using centered global value

```c
int printName(int *countAddress){ // it is pointer so * used
    if(*countAddress == 0){
        return 0;
    }
    cout << "Ankita" << endl;
    (*countAddress)--;
    printName(countAddress);
    return 0;
}

int main(){
    int n;
    cin >> n;
    printName(&n); // sending address so used &
    return 0;
}
```

## Using functional parameters

```c
int printName(int currentCount, int maxCount){
    if (currentCount > maxCount){
        return 0;
    }
    cout << "Ankita" << endl;
    printName(currentCount+1, maxCount);
    return 0;
}

int main(){
    int n;
    cin >> n;
    printName(1,n); 
    return 0;
}
```
