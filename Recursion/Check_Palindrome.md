# Check Palindrome

```c
bool chechPalindrome(int left, int n, string & str){
    if(left == n/2){
        return true;
    }
    if(str[left] == str[n-left-1]){
        return chechPalindrome(left+1, n, str);
    }else{
        return false;
    }
}

bool isPalindrome(string& str) {
    return chechPalindrome(0, str.length(), str);
}
```
