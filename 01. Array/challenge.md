# Power Of 2 and Subsequences

Given is an array A[] of size N. Return the number of non-empty subsequences such that the product of all numbers in the subsequence is Power of 2. Since the answer may be too large, return it modulo 109 + 7.


## Example 1:

```
Input:
N = 3
A[] = {1, 6, 2}

Output:
3
```

Explanation:
The subsequence that 
can be chosen is `{1}`,
`{2}` and `{1,2}`.


## Your Task:

Your task is to implement the function numberOfSubsequences() which takes an integer N and an array A and returns the number of subsequences that exist. As this number can be very large return the result under modulo 109+7.

Expected Time Complexity: `O(N)`
Expected Auxiliary Space: `O(1)`

Constraints:

```
1 <= N <= 105
1 <= A[i] <= 109
```