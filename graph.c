#include "graph.h"

Graph *create() {
    Graph *g = (Graph *)malloc(sizeof(Graph));
    g->distance = 0;
    g->capacity = 2;
    g->gSize = 0;
    g->visited = 0;
    g->graphs = (Graph **)malloc(2 * sizeof(Graph *));
    if (!g->graphs) {
        printf("Could not allocate memory for the graphs");
    }

    return g;
}

void insertDist(Graph *g, int distance) {
    if (distance <= 0) {
        printf("Tried to create a Graph with null or negative distance");
        return;
    }

    g->distance = distance;
}

void expandGraphsArray(Graph *g) {
    if (g->gSize >= g->capacity) {
        g->capacity *= 2;
        g->graphs = (Graph **)realloc(g->graphs, g->capacity * sizeof(Graph *));
        if (!g->graphs) {
            printf("Could not reallocate the graphs");
            exit(EXIT_FAILURE);
        }
    }
}

void insertPoint(Graph *graph, Graph *child) {
    expandGraphsArray(graph);
    graph->graphs[graph->gSize++] = child;
}

void removeFirst(Graph *g) {
    printf("Deleted with distance: %d\n", g->graphs[0]->distance);

    free(g->graphs[0]);
    for (int i = 1; i < g->gSize; i++) {
        g->graphs[i - 1] = g->graphs[i];
    }
    g->gSize--;
}

void removeAtPoint(Graph *g, int point) {
    printf("Deleted with distance: %d\n", g->graphs[point]->distance);

    free(g->graphs[point]);
    for (int i = point; i < g->gSize - 1; i++) {
        g->graphs[i] = g->graphs[i + 1];
    }
    g->gSize--;
}

void removeLast(Graph *g) {
    printf("Deleted with distance: %d\n", g->graphs[g->gSize - 1]->distance);

    free(g->graphs[g->gSize]);
    g->graphs[g->gSize--];
}

void deletePoint(Graph *graph, int distance) {
    for (int i = 0; i < graph->gSize; i++) {
        Graph *child = graph->graphs[i];

        if (child->distance == distance) {
            // Remove First
            if (i == 0)
                removeFirst(graph);
                // Remove Last
            else if (i == graph->gSize - 1)
                removeLast(graph);
                // Remove At Point
            else
                removeAtPoint(graph, i);

            break;
        }
    }
}

void printChilds(Graph *g) {
    if (g == NULL || g->graphs == NULL) {
        printf("Graph is empty.\n");
        return;
    }

    for (int i = 0; i < g->gSize; i++) {
        if (g->graphs[i] != NULL) // Check for NULL pointer
        {
            if (i < g->gSize - 1)
                printf("%d, ", g->graphs[i]->distance);
            else
                printf("%d\n", g->graphs[i]->distance);
        } else {
            printf("NULL, "); // Print NULL if the pointer is NULL
        }
    }
}

void freeGraph(Graph *g) {
    if (g->graphs != NULL) {
        for (int i = 0; i < g->gSize; i++) {
            if (g->graphs[i] != NULL) {
                freeGraph(g->graphs[i]); // Recursively free child graphs
            }
        }

        free(g->graphs); // Free the graphs array
    }

    free(g);
}

int depthFirstSearch(Graph *g, int target) {
    // visited must be a varible in the Graph struct
    if (g->visited) {
        return 0;
    }

    g->visited = 1;

    if (g->distance == target) {
        printf("Graph Found!\n");
        return 1;
    }


    for (int i = 0; i < g->gSize; i++) {
        if (g->graphs[i] != NULL) {
            int found = depthFirstSearch(g->graphs[i], target);
            if (found) {
                return 1;
            }
        }
    }
    return 0;
}
