# DSA Question 1 (Easy): Balanced Brackets

## Approach

I used a stack to solve this question.

First, I check each bracket one by one. If it is an opening bracket
`(`, `[` or `{`, I push it into the stack.

If it is a closing bracket, I check the top of the stack. If the
opening and closing brackets match, I pop the top element.

If they don't match, the answer is `NO`.

After checking all the brackets, if the stack is empty, the brackets
are balanced and the answer is `YES`.

## Algorithm

1. Create an empty stack.
2. Traverse the string.
3. Push every opening bracket into the stack.
4. For a closing bracket, check the top element.
5. If it matches, pop it.
6. If it doesn't match, print `NO`.
7. At the end, if the stack is empty, print `YES`.

## Complexity

Time Complexity: O(n)

Space Complexity: O(n)

## Output

<img width="1289" height="164" alt="output" src="https://github.com/user-attachments/assets/c28923cd-8d49-43cc-aaa4-834f6b946190" />

# Question 2 :- Second Largest Distinct Element

## Approach

I used two variables, `largest` and `second`, to keep track of the
largest and second largest distinct elements.

I traverse the array and compare each element with `largest`.

- If the current element is greater than `largest`, the current
  `largest` becomes `second` and the current element becomes `largest`.
- If the current element is smaller than `largest`, I check whether it
  can be the second largest element.
- Duplicate values are ignored because the second largest element
  needs to be distinct.
- The `found` variable is used to check whether a valid second largest
  element exists.

If no distinct second largest element is found, the program prints `-1`.

## Algorithm

1. Take the size of the array.
2. Initialize `largest` with the first element.
3. Traverse the remaining elements.
4. Update `largest` and `second` whenever required.
5. Ignore duplicate values.
6. Print the second largest distinct element.
7. If no such element exists, print `-1`.

## Complexity

- Time Complexity: `O(n)`
- Space Complexity: `O(1)`

## Language

C++

## Output

<img width="1238" height="400" alt="Q2 Output" src="https://github.com/user-attachments/assets/3b8d0e75-a9ed-4253-8afa-709281a7fef1" />



