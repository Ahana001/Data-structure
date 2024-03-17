## Pattern 1
```
* * * * * *
* * * * * *
* * * * * *
* * * * * *
* * * * * *
* * * * * *
```

### solution
```c
for(int i(0); i<n; i++){
        for(int j(0); j<n; j++){
            cout << "*";
        }
        cout << endl;  // new line
}
```

## Pattern 2
```
*
**
***
****
*****
```

### solution
```c
for(int i(0); i<n; i++){
        for(int j(0); j<=i; j++){
            cout << "*"; 
        }
        cout << endl;
}
```

## Pattern 3
```
1
12
123
1234
12345
```

### solution
```c
for(int i(0); i<n; i++){
        for(int j(0); j<=i; j++){
            cout << j + 1; 
        }
        cout << endl;
}
```

## Pattern 4
```
1
22
333
4444
55555
```

### solution
```c
for(int i(0); i<n; i++){
        for(int j(0); j<=i; j++){
            cout << i + 1; 
        }
        cout << endl;
}
```

## Pattern 5
```
*****
****
***
**
*

1 (row) -> 5 (star)
2 (row) -> 4 (star)
3 (row) -> 3 (star)
n - row
```

### solution
```c
for(int i(n); i>0; i--){
        for(int j(0); j<i; j++){
            cout << "*"; 
        }
        cout << endl;
}

for(int i(0); i<n; i++){
        for(int j(0); j<n-i; j++){
            cout << "*"; 
        }
        cout << endl;
}
```

## Pattern
```
12345
1234
123
12
1
```
### solution
```c
for (int i(n); i > 0; i--){
        for (int j(0); j < i; j++){
            cout << j + 1;
        }
        cout << endl;
}

for(int i(0); i<n; i++){
        for(int j(0); j<n-i; j++){
            cout << j + 1; 
        }
        cout << endl;
}
```
