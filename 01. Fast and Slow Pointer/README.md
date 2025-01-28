# Fast and Slow Pointer 🐇

## Description
The **Fast and Slow Pointer** pattern, also known as the **Tortoise and Hare** algorithm, is commonly used in problems that involve detecting cycles or finding the middle element in a list. The idea is to have two pointers that traverse the list at different speeds—one moving slowly (one step at a time) and the other moving fast (two steps at a time).

### Use cases:
- Detecting a cycle in a linked list
- Finding the middle of a linked list
- Finding the start of the cycle in a circular linked list

## Key Concepts
- **Cycle Detection**: If there’s a cycle in the linked list, the fast pointer will eventually meet the slow pointer.
- **Middle Element**: The slow pointer will reach the middle when the fast pointer reaches the end of the list.
  
## Example Problems

| **Problem**                                                                 | **Solution**                                                                 |
|-----------------------------------------------------------------------------|-------------------------------------------------------------------------------|
| [19. Remove Nth Node From End of List](https://leetcode.com/problems/remove-nth-node-from-end-of-list/) | [Solution](https://github.com/yash-borkar/DSA-Patterns/blob/aab3baa6ac298ee44237f62bfe820493faf04cb2/01.%20Fast%20and%20Slow%20Pointer/Code/Remove_Nth_Node_From_End_of_List.cpp) |
| [141. Linked List Cycle](https://leetcode.com/problems/linked-list-cycle/) | [Solution](https://github.com/yash-borkar/DSA-Patterns/blob/8cdd1cce2c8d823d2bf7d3d531facae382bbd575/01.%20Fast%20and%20Slow%20Pointer/Linked_List_Cycle.cpp) |
| [142. Linked List Cycle II](https://leetcode.com/problems/linked-list-cycle-ii/) | [Solution](https://github.com/yash-borkar/DSA-Patterns/blob/8cdd1cce2c8d823d2bf7d3d531facae382bbd575/01.%20Fast%20and%20Slow%20Pointer/Linked_List_Cycle_II.cpp) |
| [202. Happy Number](https://leetcode.com/problems/happy-number/)            | [Solution](https://github.com/yash-borkar/DSA-Patterns/blob/8cdd1cce2c8d823d2bf7d3d531facae382bbd575/01.%20Fast%20and%20Slow%20Pointer/Happy_Number.cpp) |
| [234. Palindrome Linked List](https://leetcode.com/problems/palindrome-linked-list/) | [Solution](https://github.com/yash-borkar/DSA-Patterns/blob/8cdd1cce2c8d823d2bf7d3d531facae382bbd575/01.%20Fast%20and%20Slow%20Pointer/Palindrome_Linked_List.cpp) |
| [287. Find the Duplicate Number](https://leetcode.com/problems/find-the-duplicate-number/) | [Solution](https://github.com/yash-borkar/DSA-Patterns/blob/8cdd1cce2c8d823d2bf7d3d531facae382bbd575/01.%20Fast%20and%20Slow%20Pointer/Find_the_Duplicate_Number.cpp) |
| [876. Middle of the Linked List](https://leetcode.com/problems/middle-of-the-linked-list/) | [Solution](https://github.com/yash-borkar/DSA-Patterns/blob/8cdd1cce2c8d823d2bf7d3d531facae382bbd575/01.%20Fast%20and%20Slow%20Pointer/Middle_of_the_Linked_List.cpp) |
