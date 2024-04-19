
#include "graph.h"

int main() {
    // Create some graph nodes
    Graph *node1 = create();
    Graph *node2 = create();
    Graph *node3 = create();
    Graph *node4 = create();
    Graph *node5 = create();
    Graph *node6 = create();
    Graph *node7 = create();
    Graph *node8 = create();
    Graph *node9 = create();
    Graph *node10 = create();

    insertDist(node1, 1);
    insertDist(node2, 2);
    insertDist(node3, 3);
    insertDist(node4, 4);
    insertDist(node5, 5);
    insertDist(node6, 6);
    insertDist(node7, 7);
    insertDist(node8, 8);
    insertDist(node9, 9);
    insertDist(node10, 10);

    // Create a tree structure
    insertPoint(node1, node2);
    insertPoint(node1, node3);
    insertPoint(node2, node4);
    insertPoint(node2, node5);
    insertPoint(node3, node6);
    insertPoint(node3, node7);
    insertPoint(node4, node8);
    insertPoint(node4, node9);
    insertPoint(node5, node10);

    // Test isTree function for tree structure
    printf("Is the first graph a tree? %s\n", isTree(node1) ? "Yes" : "No");

    // Reset visited flags for next test
    resetVisited(node1);

    // Create a cycle to make it a non-tree
    insertPoint(node10, node1);

    // Test isTree function for non-tree structure
    printf("Is the second graph a tree? %s\n", isTree(node1) ? "Yes" : "No");

    // Free the graph nodes
    freeGraph(node1);
    freeGraph(node2);
    freeGraph(node3);
    freeGraph(node4);
    freeGraph(node5);
    freeGraph(node6);
    freeGraph(node7);
    freeGraph(node8);
    freeGraph(node9);
    freeGraph(node10);

    return 0;
}
