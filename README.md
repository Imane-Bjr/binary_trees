# ALX Project: Binary Trees

## General

This project demonstrates the creation and manipulation of binary trees in C. It includes functions to create nodes, build a tree, and print the tree structure. The main focus is to know :
- What is a binary tree
- What is the difference between a binary tree and a Binary Search Tree
- What is the possible gain in terms of time complexity compared to linked lists
- What are the depth, the height, the size of a binary tree
- What are the different traversal methods to go through a binary tree
- What is a complete, a full, a perfect, a balanced binary tree

## Table of Contents

- [Binary Trees](#binary-trees)
- [Difference Between Binary Tree and Binary Search Tree](#difference-between-binary-tree-and-binary-search-tree)
- [Binary Tree Properties](#binary-tree-properties)
- [Types of Binary Trees](#types-of-binary-trees)
- [Data Structure](#Data-Structure)
- [Usage](#Usage)
- [Example Output](#Example-Output)
- [Authors](#Authors)

## Binary Trees

A binary tree is a data structure in which each node has at most two children, referred to as the left child and the right child. It is a hierarchical structure commonly used in computer science for various applications, including searching, sorting, and organizing hierarchical data.

## Difference Between Binary Tree and Binary Search Tree

A Binary Search Tree (BST) is a specific type of binary tree that maintains a certain ordering property. In a BST, the left subtree of a node contains only nodes with values less than the node's value, and the right subtree contains only nodes with values greater than the node's value. 


| Feature                     | Binary Tree                            | Binary Search Tree (BST)              |
|-----------------------------|----------------------------------------|---------------------------------------|
| Node Structure              | Each node has at most two children     | Each node has at most two children    |
| Node Ordering               | No specific ordering                   | Left child < Parent < Right child     |
| Tree Types                  | Full, Perfect, Complete, Balanced      | Balanced (AVL, Red-Black), Unbalanced |
| Searching                   | O(n) in general                        | O(log n) in average case              |
| Insertion/Deletion          | O(1) if position is known              | O(log n) in average case              |
| Use Case                    | Hierarchical data representation       | Dynamic ordered data sets             |

## Binary Tree Properties

- **Node**: Each element in a binary tree is called a node. A node contains data and may have references to its children.
- **Root**: The topmost node of the binary tree is called the root. It is the starting point of the tree.
- **Parent**: Each node (except the root) has one parent node. The parent is the node that is directly above the current node and connected to it.
- **Children**: Nodes connected to a node from the left and right are called the left child and the right child. These are the nodes directly below a parent node.
- **Leaf**: Nodes that do not have any children are called leaf nodes or terminal nodes. They are the end points of the tree.
- **Subtree**: Any node with its descendants forms a subtree. A subtree is a portion of the tree that can be considered as a tree on its own.
- **Depth**: The depth of a node is the number of edges from the root to the node. The root has a depth of 0.
- **Height**: The height of a node is the number of edges on the longest path from the node to a leaf. The height of a tree is the height of the root node.
- **Level**: The level of a node is its depth plus one. The root is at level 1, its children are at level 2, and so on.
- **Degree**: The degree of a node is the number of children it has. In a binary tree, the maximum degree of any node is 2.

## Types of Binary Trees

- **Complete Binary Tree:** A binary tree in which all levels are completely filled, except possibly the last level, which is filled from left to right.
- **Full Binary Tree:** A binary tree in which every node has either 0 or 2 children.
- **Perfect Binary Tree:** A binary tree in which all internal nodes have exactly two children, and all leaf nodes are at the same level.
- **Balanced Binary Tree:** A binary tree in which the height of the left and right subtrees of any node differs by at most one.

## Data Structure

The project uses the following data structure for the binary tree nodes:

```c
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
```

## Usage

To run the program, use the following command:

```sh
./binary_tree
```
## Example Output

```sh
       .-------(098)-------.
  .--(012)--.         .--(402)--.
(006)     (016)     (256)     (512)
```

## Authors

This project was implemented by:
-   [BOUJIR Imane](https://github.com/Imane-Bjr)
-   [TACHI Yassine](https://github.com/TachiYassine)
