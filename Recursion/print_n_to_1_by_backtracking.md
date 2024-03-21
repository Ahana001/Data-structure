# Print N to 1 By Backtracking

```c
int printName(int currentCount, int maxCount){
    if (currentCount > maxCount)
    {
        return 0;
    }
    printName(currentCount + 1, maxCount);// by back-tracking print after function called base condition
    cout << currentCount << endl;
    return 0;
}

int main(){
    int n;
    cin >> n;
    printName(1,n); 
    return 0;
}
```
