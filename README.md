# DSA Question 1 (Easy) : Balanced Brackets 

### Approach

I used a stack for this question.

Whenever I get an opening bracket `(`, `[`, `{`, I push it into the stack.

For a closing bracket, I check the top of the stack:
- If it matches, I remove it from the stack.
- If it doesn't match, the brackets are not balanced.

At the end, if the stack is empty, the answer is `YES`.
Otherwise, the answer is `NO`.

### Complexity

Time: O(n)

Space: O(n)

### Language

C++
