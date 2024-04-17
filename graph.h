#ifndef GRAPH_H
#define GRAPH_H

typedef struct Graph
{
    int distance; // Distance of the Graph
    int gSize;    // Amount of graphs that is attached
    int capacity; // Capacity of the graphs array
    struct Graph **graphs;  // Array of graphs
} Graph;

Graph *create();
void insertDist(Graph *g, int distance);
void expandGraphsArray(Graph *g);
void insertPoint(Graph *graph, Graph *child);

#endif
