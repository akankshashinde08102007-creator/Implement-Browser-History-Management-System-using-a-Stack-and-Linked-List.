 Develop an Employee Hierarchy Search Application Using a BST to Find the Lowest Common Ancestor of two given employees IDs.


1. Problem Statement

In a large organization, employees work at different levels and may have relationships with other employees through a hierarchical structure. Finding the common ancestor of two employees can be difficult when the number of employees increases.

The Lowest Common Ancestor (LCA) is the lowest node in a tree that is an ancestor of two given nodes. This project aims to develop an Employee Hierarchy Search Application using a Binary Search Tree (BST) to find the Lowest Common Ancestor of two given employee IDs.

The application accepts employee IDs from the user, stores them in a BST, and searches for the Lowest Common Ancestor using BST properties. It also checks whether both employee IDs exist before displaying the result.

2. Objectives

The main objectives of this project are:

1. To understand the concept and working of a Binary Search Tree.
2. To store employee IDs in an organized tree structure.
3. To perform insertion and searching operations efficiently.
4. To find the Lowest Common Ancestor of two given employee IDs.
5. To reduce unnecessary comparisons using BST properties.
6. To understand the practical application of non-linear data structures.
7. To implement the application using the C++ programming language.
8. To analyse the time and space complexity of the algorithm.

3. Introduction

Data structures are used to store, organize, and process data efficiently. Trees are important non-linear data structures used to represent hierarchical information.

A Binary Search Tree (BST) is a special type of binary tree in which each node has at most two children: a left child and a right child. The left subtree contains smaller values, and the right subtree contains greater values than the current node.

In this project, each node stores an employee ID. The application uses a BST to search for two employee IDs and find their Lowest Common Ancestor (LCA).

For example, if the employee IDs are 20 and 40, their Lowest Common Ancestor in the sample BST is 30. Similarly, if the employee IDs are 20 and 60, their Lowest Common Ancestor is 50.

This project provides practical knowledge of BST creation, insertion, searching, the LCA algorithm, and complexity analysis.

Note: A BST organized by numeric employee IDs represents relationships based on ID ordering. It does not automatically represent an organization's actual manager-subordinate relationships.

4. Data Structure Used

Binary Search Tree (BST)

A Binary Search Tree is a non-linear data structure that stores values in an ordered tree.

Each node contains three parts:

- Data: Stores the employee ID.
- Left Pointer: Stores the address of the left child.
- Right Pointer: Stores the address of the right child.

Properties of BST

1. Values smaller than a node are stored in its left subtree.
2. Values greater than a node are stored in its right subtree.
3. Each subtree follows the same BST properties.
4. In this project, employee IDs are unique.

Why BST Is Used

- It organizes employee IDs in a structured manner.
- It supports efficient searching when the tree is reasonably balanced.
- It helps find the LCA using comparisons.
- It avoids unnecessary traversal of the tree.

5. Concept of Lowest Common Ancestor (LCA)

The Lowest Common Ancestor is the lowest node in a tree that is an ancestor of two given nodes.

In simple words, it is the common node from which both employee IDs can be reached by moving down the tree.

Consider the following BST:

             50
           /    \
         30      70
        /  \    /  \
       20  40  60  80

Examples:

- LCA of 20 and 40 is 30.
- LCA of 20 and 60 is 50.
- LCA of 60 and 80 is 70.
- LCA of 30 and 40 is 30.

The LCA algorithm uses the ordering properties of the BST to identify the required node.

6. Algorithm

1. Start the program.
2. Create an empty Binary Search Tree (BST).
3. Enter the number of employees and their employee IDs.
4. Insert each employee ID into the BST according to BST properties.
5. If the tree is empty, make the first employee ID the root node.
6. If an employee ID is smaller than the current node, move to the left subtree and insert it at the appropriate position.
7. If an employee ID is greater than the current node, move to the right subtree and insert it at the appropriate position.
8. Repeat the insertion process until all employee IDs are stored.
9. Enter the two employee IDs for which the Lowest Common Ancestor is required.
10. Check whether both employee IDs exist in the BST.
11. Start searching from the root node.
12. If both employee IDs are smaller than the current node, move to the left subtree.
13. If both employee IDs are greater than the current node, move to the right subtree.
14. If the IDs lie on different sides of the current node, or one ID matches the current node, identify the current node as their LCA.
15. Display the Lowest Common Ancestor.
16. If either employee ID does not exist, display an appropriate message.
17. Stop the program.

7. Working of the System

The application first accepts employee IDs from the user and inserts them into a Binary Search Tree. Each ID is placed according to the BST rules.

After creating the tree, the user enters two employee IDs. The program checks whether both IDs are present in the tree.

The LCA search begins at the root node. If both IDs are smaller than the current node, the algorithm moves to the left subtree. If both IDs are greater, it moves to the right subtree.

If one ID is smaller and the other is greater than the current node, the current node is their Lowest Common Ancestor. If one of the IDs matches the current node, that node can also be the LCA, provided both IDs exist in the tree.

Finally, the program displays the LCA or an appropriate message if an employee ID is missing.

8. Sample Input

Enter the number of employees: 7
Enter employee IDs: 50 30 70 20 40 60 80

Enter first employee ID: 20
Enter second employee ID: 40

9. Sample Output

Employee Hierarchy BST Created Successfully.

First Employee ID: 20
Second Employee ID: 40

Lowest Common Ancestor: 30

10. Explanation of Output

The employee IDs 50, 30, 70, 20, 40, 60, and 80 are inserted into the BST.

The user selects employee IDs 20 and 40.

Both IDs are smaller and greater, respectively, than node 30. They are located in the left and right subtrees of node 30.

Therefore, employee ID 30 is the Lowest Common Ancestor of employee IDs 20 and 40.

11. Time Complexity Analysis

Time complexity describes how the execution time of an algorithm increases as the number of employee IDs increases.

Let n be the number of employee IDs and h be the height of the BST.

Operation| Average Case| Worst Case
Insertion| O(log n)| O(n)
Employee Search| O(log n)| O(n)
LCA Search| O(log n)| O(n)

In a reasonably balanced BST, the height is approximately O(log n), so insertion, searching, and LCA operations can be efficient.

In a highly skewed BST, the height may become O(n), making these operations slower.

Space Complexity

The BST requires O(n) space to store n employee nodes.

An iterative LCA search uses O(1) additional working space, excluding the tree storage. A recursive implementation may require O(h) additional stack space.

12. Features of the Application

- Accepts multiple employee IDs from the user.
- Creates a Binary Search Tree dynamically.
- Stores IDs according to BST properties.
- Searches for two given employee IDs.
- Finds the Lowest Common Ancestor.
- Displays the result clearly.
- Can handle missing employee IDs when validation is implemented.
- Demonstrates insertion and searching operations.
- Helps students understand tree-based algorithms.

13. Applications

1. Hierarchical Data: Understanding common ancestors in tree-based data.
2. File Systems: Finding common parent directories in directory trees.
3. Family Trees: Identifying a common ancestor of two people.
4. Educational Applications: Learning BST operations and tree algorithms.
5. Data Management: Understanding searching and hierarchical relationships.

The project demonstrates the LCA concept using a BST. A real employee management system would need to store actual reporting relationships separately if they do not follow employee ID ordering.

14. Advantages

- The algorithm is simple to understand and implement.
- BST properties help reduce unnecessary comparisons.
- The application provides practical experience with pointers and nodes.
- It demonstrates efficient searching in a balanced tree.
- It helps students understand non-linear data structures.
- It can be extended with additional employee-related features.

15. Limitations

- A normal BST may become skewed when IDs are inserted in sorted order.
- Worst-case operations may take O(n) time.
- Employee ID ordering does not automatically represent actual reporting relationships.
- Duplicate IDs require a defined handling rule.
- The basic application focuses on searching and LCA rather than complete employee management.

16. Future Scope

The application can be improved by adding employee names, department details, and additional search options.

A self-balancing tree, such as an AVL tree, could be used to reduce the risk of a highly skewed tree. Other features could include inserting and deleting employees, displaying the complete tree, and validating employee details.

For real organizational hierarchies, the system could be extended to store actual manager-subordinate relationships instead of using employee ID ordering alone.

17. Result

The Employee Hierarchy Search Application demonstrates how a Binary Search Tree can be used to store employee IDs and find the Lowest Common Ancestor of two given IDs.

For example, when employee IDs 20 and 40 are selected, the application identifies 30 as their Lowest Common Ancestor. When IDs 20 and 60 are selected, the result is 50.

The project illustrates how the BST ordering property helps identify the LCA without visiting every node. The efficiency of the algorithm depends on the height and structure of the tree.

18. Conclusion

This project provides a practical understanding of Binary Search Trees and the Lowest Common Ancestor algorithm. It demonstrates how employee IDs can be organized, searched, and compared using an ordered tree structure.

By implementing this project in C++, students gain knowledge of node structures, pointers, insertion, searching, and complexity analysis.

The project also explains the importance of choosing a suitable data structure for a particular problem. Thus, it builds a strong foundation for understanding tree-based algorithms and their applications in computer science.

