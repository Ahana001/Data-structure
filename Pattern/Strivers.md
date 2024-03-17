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

## Pattern 6
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

## Pattern 7
```             [space, start, space]
    *           [ 4,     1,      4  ]
   ***          [ 3,     3,      3  ]
  *****         [ 2,     5,      2  ]
 *******        [ 1,     7,      1  ]
*********       [ 0,     9,      0  ]
```

### solution

#### Pattern :- [space, start, space]

```c
for (int i(0); i<n; i++){
        for(int j(0); j<n-i-1; j++){
            cout << " ";
        }
        for (int k(0); k<2*i+1; k++){
            cout << "*";
        }
        for (int l(0); l<n-i-1; l++){
            cout << " ";
        }
        cout << endl;
}
```

## Pattern 8
```              [space, star, space]
*********        [ 0,     9,      0  ]
 *******         [ 1,     7,      1  ]
  *****          [ 2,     5,      2  ]
   ***           [ 3,     3,      3  ]
    *            [ 4,     1,      4  ]
```

### solution

#### Pattern :- [space, start, space]

```c
for (int i(0); i<n; i++){
        for(int j(0); j<i; j++){
            cout << " ";
        }
        for (int k(0); k< (2*n)-(2*i)-1; k++){
            cout << "*";
        }
        for (int l(0); l<i; l++){
            cout << " ";
        }
        cout << endl;
    }
```

## Pattern 10
```
*
**
***
****
*****
****
***
**
*
```

### solution 
```
n=4
           (i)           star
*           1             1
* *         2             2
* * *       3             3
* * * *     4 (n==i)      4
* * *       5             3 (2*n-i)
* *         6             2
*           7             1
         (2*n-1)
```

```c
for (int i(1); i<2*n; i++){
        int star = i;
        if(n<i) star = (2*n) - i;
        for (int j(1); j <= star; j++){
            cout << "*";
        }
        cout << endl;
}
```

## Pattern 11
```
1
01
101
0101
```

### solution
```
n=4           i
1             1
0 1           2
1 0 1         3
0 1 0 1       4
```
```c
for (int i(1); i<=n; i++){
        int start = 1;
        if(i%2 == 0) start = 0;
        for(int j(1); j<=i; j++){
            cout << start;
            start = 1 - start;
        }
        cout << endl;
}
```
## Pattern 12
```
1      1
12    21
123  321
12344321
```

### solution
```
n=4           [num, space, num]  i
1      1      [ 1     6     1 ]  1
12    21      [ 2     4     2 ]  2
123  321      [ 3     2     3 ]  3
12344321      [ 4     0     4 ]  4
```

```c
for (int i(1); i<=n; i++){
        for(int j(1); j<=i; j++){
            cout << j;
        }
        for (int l(1); l<=(2*n)-(2*i); l++){
            cout << " ";
        }
        for (int k(1); k<=i; k++){
            cout << i-k+1;
        }
        cout << endl;
}
```

## Pattern 13
```
1
23
456
78910
1112131415
```

### solution
```c
int start = 1;
    for (int i(1); i<=n; i++){
        for(int j(1); j<=i; j++){
            cout << start;
            start = start + 1;
        }
        cout << endl;
}
```

## Pattern 14
```
A
AB
ABC
ABCD
ABCDE
```

## solution
```c
for (int i(0); i<n; i++){
        for(char c('A'); c<='A'+i; c++){
            cout << c;
        }
        cout << endl;
}
```

## Pattern 15
```
ABCDE
ABCD
ABC
AB
A
```

## solution
```c
for (int i(0); i<n; i++){
        for(char c('A'); c<'A'+n-i; c++){
            cout << c;
        }
        cout << endl;
}
```

## Pattern 16
```
A
BB
CCC
DDDD
EEEEE
```

## solution
```c
for (int i(0); i<n; i++){
        char c = 'A' + i;
        for(int j(0); j<=i; j++){
            cout << c;
        }
        cout << endl;
}
```

## Pattern 17
```
   A   
  ABA  
 ABCBA 
ABCDCBA
```

## solution
```
 n=4     i   [space, char, space]
   A     1   [ 3      1      3  ]
  ABA    2   [ 2      3      2  ]
 ABCBA   3   [ 1      5      1  ]
ABCDCBA  4   [ 0      7      0  ]
```

```c
for(int i(1); i<=n; i++){
        for(int j(1); j<=n-i; j++){
            cout << " ";
        }
        char c = 'A';
        for (int l=1; l<=2*i-1; l++){
            cout << c;
            if(l>=i)c--;
            else c++;
        }
        for (int k(1); k<=n-i; k++){
            cout << " ";
        }
        cout << endl;
}
```

## Pattern 18
```
E
DE
CDE
BCDE
ABCDE
```

## solution
```
n=5             i      char
E               1   'A' + n - i
DE              2
CDE             3
BCDE            4
ABCDE           5
```

```c
for(int i(1); i<=n; i++){
        char start= 'A'+n-i;
        for (int k(1); k<=i; k++){
            cout << start;
            start++;
        }
        cout << endl;
}
```

## Pattern 19
```
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********
```

## solution
```
n=5           i     [star, space, star]
**********    1     [ 5      0     5  ]
****  ****    2     [ 4      2     4  ]
***    ***    3     [ 3      4     3  ]
**      **    4     [ 2      6     2  ]
*        *    5     [ 1      8     1  ]
              --------------------------
*        *    1     [ 1      8     1  ]
**      **    2     [ 2      6     1  ]
***    ***    3     [ 3      4     1  ]
****  ****    4     [ 4      2     1  ]
**********    5     [ 5      0     1  ]
```

```c

//-----------upper part--------------
for(int i(1); i<=n; i++){
        // star
        for (int a(1); a<=n-i+1; a++){
            cout << "*";
        }
        // space
        for (int b(1); b<=2*i-2; b++){
            cout << " ";
        }
        // star
        for (int c(1); c<=n-i+1; c++){
            cout << "*";
        }
        cout << endl;
}

//-----------lower part--------------
int space = 2 * n - 2;
for (int j(1); j<= n; j++){
        // star
        for (int d(1); d<=j; d++)
        {
            cout << "*";
        }
        // space
        for (int e(1); e<=space; e++)
        {
            cout << " ";
        }
        space = space - 2;
        // star
        for (int f(1); f<=j; f++)
        {
            cout << "*";
        }
        cout << endl;
}
```

## Pattern 20
```
*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *
```

## solution
```
n=5           i    [star space star]
*        *    1    [ 1     8     1 ]
**      **    2    [ 2     6     2 ]
***    ***    3    [ 3     4     3 ]
****  ****    4    [ 4     2     4 ]
**********    5    [ 5     0     5 ]
****  ****    6    [ 4     2     4 ]
***    ***    7    [ 3     4     3 ]
**      **    8    [ 2     6     2 ]
*        *    9    [ 1     8     1 ]
```
```c
int space = 2*n-2;
for(int i(1); i<2*n; i++){
        // star
        int star = i;
        if (n < i) star = (2 * n) - i;
        for (int j(1); j <= star; j++){
            cout << "*";
        }
        // space
        for (int b(1); b<=space; b++){
            cout << " ";
        }
        if(n<=i) space=space+2;
        else space=space-2;
        // star
        for (int j(1); j <= star; j++){
            cout << "*";
        }
        cout << endl;
}
```
