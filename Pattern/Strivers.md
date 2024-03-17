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

1 -> 5
2 -> 4

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
```
