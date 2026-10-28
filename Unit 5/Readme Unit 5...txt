 To Develop a Food Delivery Route Connectivity System Using Graph and DFS

1. Problem Statement

Develop a C++ program to represent restaurants and delivery locations using an adjacency matrix, and apply DFS to identify all locations reachable from a selected restaurant.

2. Objectives

1. To represent restaurants and delivery locations using a graph.
2. To store connections between locations using an adjacency matrix.
3. To implement the Depth First Search (DFS) algorithm.
4. To identify all locations reachable from a selected restaurant.
5. To understand graph traversal and connectivity.
6. To learn the practical use of graph data structures in C++.

3. Introduction

Food delivery services connect restaurants with different delivery locations. Understanding the connectivity between these locations is important for studying a delivery network.

This project uses a graph to represent restaurants and delivery locations. The locations are represented as vertices, and the connections between them are represented as edges.

An adjacency matrix is used to store the connections between locations. The Depth First Search (DFS) algorithm is then applied to find all locations reachable from a selected restaurant.

This project helps students understand how graph data structures and traversal algorithms can be used to solve connectivity problems.

4. Concept of the Algorithm

Depth First Search (DFS) is a graph traversal algorithm used to visit vertices in a graph. It starts from a selected vertex and explores one connected path as deeply as possible before returning to explore other paths.

In this project, DFS starts from the selected restaurant and checks its connected locations. A visited array keeps track of locations that have already been visited. This prevents repeated visits and helps identify all reachable locations.

For example, if restaurant 0 is connected to location 1, and location 1 is connected to location 3, DFS can reach location 3 through location 1.

5. Algorithm

1. Start the program.
2. Enter the total number of locations.
3. Create an adjacency matrix to store the connections.
4. Enter the connection details between locations.
5. Select the starting restaurant.
6. Initialize the visited array with false values.
7. Start DFS from the selected restaurant.
8. Mark the current location as visited.
9. Check all connected locations using the adjacency matrix.
10. Visit each connected location that has not been visited.
11. Continue until all reachable locations have been explored.
12. Display all reachable locations.
13. Stop the program.

6. Data Structures Used

i) Graph

A graph consists of vertices and edges. In this project, vertices represent restaurants and delivery locations, while edges represent connections between locations.

A graph helps represent the structure of the food delivery network.

ii) Adjacency Matrix

An adjacency matrix is a two-dimensional array used to store connections between locations.

- "1" indicates that two locations are directly connected.
- "0" indicates that no direct connection exists between them.

It provides a simple way to represent and check connections.

iii) Visited Array

The visited array stores whether a location has already been visited during DFS.

When a location is visited, its value is changed to true. This prevents the algorithm from visiting the same location repeatedly.

iv) Recursion

Recursion allows a function to call itself. In this project, the DFS function uses recursion to explore connected and unvisited locations until no further unvisited connections remain.

7. Working of the System

The Food Delivery Route Connectivity System works using a graph, an adjacency matrix, and the DFS algorithm.

Step 1: Enter the Locations

The user enters the total number of restaurants and delivery locations to be represented in the network.

Step 2: Create the Graph

The program represents each restaurant or delivery location as a vertex in a graph. Connections between locations are represented as edges.

Step 3: Store the Connections

The program uses an adjacency matrix to store the connections. A value of "1" indicates a direct connection, while "0" indicates no direct connection.

Step 4: Select the Starting Restaurant

The user selects a restaurant from which the search will begin.

Step 5: Apply DFS

The DFS algorithm starts from the selected restaurant and explores its connected locations.

Step 6: Mark Visited Locations

The program marks each visited location in the visited array. This prevents repeated visits and avoids an infinite loop when the graph contains cycles.

Step 7: Display the Result

After exploring all reachable locations, the program displays them on the screen.

For example, if location 0 is selected and all five locations are connected through different paths, the output will contain all five locations.

8. Sample Input

Consider a food delivery network containing five locations numbered from 0 to 4.

The following adjacency matrix represents the connections between the locations.

Number of locations: 5

Adjacency Matrix:
0 1 1 0 0
1 0 0 1 0
1 0 0 1 1
0 1 1 0 1
0 0 1 1 0

Starting location: 0

9. Sample Output

Reachable locations from location 0:
0 1 3 2 4

10. Explanation of Output

The DFS algorithm starts from location 0 and marks it as visited.

It checks the connections of location 0 and visits location 1. From location 1, it visits location 3. It then explores other connected locations that have not yet been visited.

Finally, the algorithm reaches locations 2 and 4 and displays all reachable locations.

Since all five locations are connected through one or more paths, all five locations appear in the output.

The exact order of locations may vary depending on how the program checks neighboring vertices.

11. Time Complexity and Space Complexity

Time Complexity

The time complexity describes how the execution time increases as the number of locations grows.

For an adjacency matrix implementation of DFS, the time complexity is O(V²) because the algorithm may check all possible connections for every visited vertex.

Space Complexity

The space complexity is O(V²) because the adjacency matrix requires space for V × V entries.

The visited array and recursion stack require up to O(V) additional space.

Here, V represents the total number of vertices in the graph.

12. Features of the System

1. Graph Representation: Represents restaurants and delivery locations as vertices and connections as edges.
2. Adjacency Matrix: Stores the connections between locations in a two-dimensional array.
3. DFS Traversal: Explores connected locations from the selected starting point.
4. Reachability Checking: Identifies all locations reachable through the given connections.
5. Visited Tracking: Prevents repeated visits during graph traversal.
6. Simple Input and Output: Accepts input and displays results through a C++ console.

13. Applications

1. Used to study connectivity between restaurants and delivery locations.
2. Helps identify locations reachable from a selected restaurant.
3. Useful for understanding delivery network connections.
4. Can be used to study transportation networks.
5. Helps students learn graph traversal algorithms.
6. Useful for understanding connectivity in computer networks.

14. Advantages

1. Easy to Understand: Uses simple graph concepts and basic C++ programming.
2. Finds Reachable Locations: Identifies locations reachable from the selected restaurant.
3. Simple Representation: The adjacency matrix makes connections easy to store.
4. Prevents Repeated Visits: The visited array avoids unnecessary repeated traversal.
5. Useful for Learning: Helps students understand graphs, arrays, recursion, and DFS.
6. Easy to Extend: Additional features can be added in future versions.

15. Limitations

1. Memory Requirement: An adjacency matrix requires more memory as the number of locations increases.
2. No Shortest Route: DFS does not guarantee the shortest delivery route.
3. No Traffic Information: The system does not consider traffic conditions.
4. No Distance Calculation: It does not calculate actual road distances or delivery times.
5. Input Dependency: The results depend on the connections entered by the user.
6. No GPS Support: The basic program does not use real-time maps or GPS data.

16. Future Scope

1. GPS Integration: Real-world restaurant and delivery locations can be added using GPS.
2. Shortest-Path Algorithm: Dijkstra's algorithm can be used to find the shortest or least-cost route when distance or cost data is available.
3. Traffic Updates: Traffic information can help estimate delivery time.
4. Graphical Interface: A graphical interface can display restaurants and delivery locations visually.
5. Multiple Restaurants: The system can be extended to analyze connectivity from multiple restaurants.
6. Distance and Cost Calculation: Distance, fuel usage, and delivery costs can be included in an advanced version.

17. Result

The program represents a food delivery network using an adjacency matrix and applies the Depth First Search algorithm to identify all locations reachable from a selected restaurant.

For the given sample input, all five locations are reachable from location 0. The result demonstrates how graph traversal can be used to study connectivity in a delivery network.

18. Conclusion

The Food Delivery Route Connectivity System demonstrates the use of graphs, adjacency matrices, and the Depth First Search algorithm in C++.

The system identifies all locations reachable from a selected restaurant and helps students understand graph traversal and connectivity.

Although the current system does not calculate the shortest delivery route or use real-time traffic information, it provides a foundation for future improvements. GPS integration, shortest-path algorithms, and distance calculations can make the system more useful for practical delivery network analysis.