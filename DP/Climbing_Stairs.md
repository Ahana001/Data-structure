# Climbing Stairs

You are climbing a staircase. It takes n steps to reach the top.
Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

 

## Example 1:
```
Input: n = 2
Output: 2
Explanation: There are two ways to climb to the top.
1. 1 step + 1 step
2. 2 steps
```
## Example 2:
```
Input: n = 3
Output: 3
Explanation: There are three ways to climb to the top.
1. 1 step + 1 step + 1 step
2. 1 step + 2 steps
3. 2 steps + 1 step
```

```java
class Solution {
    public int climbStairs(int n) {
        int previous1 = 1;
        int previous2 = 1;

        for (int i = 2; i <= n; i++) {
            int current = previous1 + previous2;
            previous2 = previous1;
            previous1 = current;
        }
        return previous1;
    }
}
```
