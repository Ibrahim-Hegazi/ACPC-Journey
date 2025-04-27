# Problem: CF 2098A - Vadim's Collection

## ❓ Idea
- Data Structures(Map, Vector)
- Basic if conditions and loops
- Frequency arrays (data structures)

## 🧠 Insight
- Goal: To find the minimum beautiful number
     - A number is Beautiful if it is a string of 10 digits, where the i-th digit from the left is at least 10−i
- Conditions:
     - The range condition mentioned above for each digit
     - The smallest possible beautiful number

## ❌ What I Did Wrong
- Not concentrating while reading the problem statement ( Because your ego due to learning in an american school, whihc is NOT ENOUGH)
- Not Writing the conditions on a paper
- Looked at the test cases before using all my brain cells power to generate more testcases on my own
- New weakness: Solving when you want to sleep (Try to solved when refreshed)

## ✅ Takeaway
- This problem could have been solved using vectors, maps, priority queue, and segment tree. Also i think segment tree would be the best in time complexity, but it would be an overkill for such a small range of integer.
- Even though i used maps and its iterators, i need a revision on that topic.
- I liked the part that each digit of our output, we have a range of possibilities (after applying the 10 -i), and i liked the fact when visualize on paper it became easy to understand
    - digits   1   2   3   4   5   6   7   8   9   10
    -          9   8   7   6   5   4   3   2   1   0
    -          9   9   9   9   9   9   9   9   9   9
