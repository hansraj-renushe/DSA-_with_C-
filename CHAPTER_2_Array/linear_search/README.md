
linear search notes

🧠 Q1. What is Linear Search?

✅ Answer:

Linear search is a sequential searching algorithm in which each element of the array is checked one by one until the target element is found or the array ends.


🧠 Q2. What is Time Complexity of Linear Search?

✅ Answer:

Best case → O(1) (element first position pe)

Worst case → O(n) (element last ya absent)

Average case → O(n)

🧠 Q3. What is Space Complexity?

✅ Answer:

O(1)


Because no extra memory required.

.

🧠 Q4. When should we use Linear Search?

✅ Answer:

Linear search is preferred when:

The array is unsorted

The dataset is small

Searching is infrequent

Memory usage must be minimal

Data structure is a linked list (important point)

🧠 Q5. Can Linear Search work on a sorted array?

✅ Answer:

Yes, it works on sorted arrays, but it is inefficient because it still takes O(n) time.

For sorted arrays, binary search is a better choice.

🧠 Q7. What are the disadvantages of Linear Search?

✅ Answer:

Slow for large datasets

Time complexity is O(n)

Not efficient for repeated searches

Does not scale well for big data

🧠 Q9. Can Linear Search be used on a linked list?

🔥 Important interview point

✅ Answer:

Yes.

Linear search works well with linked lists because it only requires sequential access. Binary search is not suitable for linked lists because it needs random access.

🧠 Q10. What is Sentinel Linear Search?

🔥 Senior-level question

✅ Answer:

Sentinel linear search is an optimized version of linear search where the key is temporarily placed at the end of the array to eliminate boundary checking and reduce comparisons.


🧠 Q11. Linear Search vs Binary Search — when to choose?

✅ Answer:

Use Linear Search when:

Data is unsorted

Dataset is small

Using linked list

One-time search

Use Binary Search when:

Data is sorted

Dataset is large

Frequent searching is required


