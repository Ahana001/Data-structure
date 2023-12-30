# Majority Element

Given an array nums of size n, return the majority element.
The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

Example 1:
```
Input: nums = [3,2,3]
Output: 3
```

Example 2:
```
Input: nums = [2,2,1,1,1,2,2]
Output: 2
```

```java

import java.util.HashMap;
import java.util.Map;

class Solution {
    public int majorityElement(int[] nums) {
        int maxKey = nums[0];
        int maxEntry = 1;

        Map<Integer, Integer> hashtable = new HashMap<>();
        for (int i = 0; i < nums.length; i++) {
            Integer value = hashtable.get(nums[i]);
            
            if (value == null) {
                hashtable.put(nums[i], 1);
            } else {
                hashtable.put(nums[i], value + 1);
            }
            
            // Update maxKey and maxEntry
            if (maxEntry < hashtable.get(nums[i])) {
                maxKey = nums[i];
                maxEntry = hashtable.get(nums[i]);
            }
        }

        return maxKey;
    }
}

// optimized
import java.util.HashMap;
import java.util.Map;

class Solution {
    public int majorityElement(int[] nums) {

        Map<Integer, Integer> hashtable = new HashMap<>();
        for (int i = 0; i < nums.length; i++) {
            Integer value = hashtable.get(nums[i]);

            if (value == null) {
                hashtable.put(nums[i], 1);
            } else {
                hashtable.put(nums[i], value + 1);
            }

            if (hashtable.get(nums[i]) > nums.length / 2) {
                return nums[i];
            }
        }

        return nums[0];
    }
}

```
