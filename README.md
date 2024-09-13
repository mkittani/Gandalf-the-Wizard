# Gandalf the Wizard problem

This project contains three different approaches to solving a problem where you need to find the minimum value-to-weight ratio for a given set of items, each with a weight and value. The aim is to select items such that a certain total weight is reached or approximated, while minimizing the value-to-weight ratio.

## Algorithms Implemented

### 1. **Greedy Algorithm**:
   A simple greedy approach is implemented to find the item with the minimum value-to-weight ratio and compute the result by taking as many of that item as possible.

### 2. **Divide and Conquer Algorithm (DAQ)**:
   This approach uses a divide-and-conquer strategy to recursively find the item with the minimum value-to-weight ratio. It splits the array into two parts, finds the minimum in each, and then compares the results.

### 3. **Dynamic Programming (DP) Algorithm**:
   The dynamic programming approach solves the problem by building a solution using subproblems. It attempts to minimize the value for each possible total weight using previous solutions to smaller weight capacities.

## Usage

Compile and run the code using a C++ compiler. Each algorithm works similarly, expecting input as follows:
- First, the total weight capacity `total_weight`.
- Then, the number of items `n`, followed by the weight and value of each item.

## Example
### Input:
```
500
3
15 25
5 20
25 30
```
### Output:
600
