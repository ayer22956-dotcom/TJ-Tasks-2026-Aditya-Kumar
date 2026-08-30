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

![Output](output.png)
