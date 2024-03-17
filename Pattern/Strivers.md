# Pattern 1
```
* * * * * *
* * * * * *
* * * * * *
* * * * * *
* * * * * *
* * * * * *
```

## solution
```c
  for(int i(0); i<n; i++){
        for(int j(0); j<n; j++){
            cout << "*";
        }
        cout << endl;  // new line
    }
```

# Pattern 2
```
*
**
***
****
*****
```

## solution
```c
for(int i(0); i<n; i++){
        for(int j(0); j<=i; j++){
            cout << "*"; 
        }
        cout << endl;
}
```

# Pattern
```
1
12
123
1234
12345
```

## solution
```c

```
