#ifndef GRAPH_H
#define GRAPH_H
#include <stdio.h>
#include <stdlib.h>

typedef struct Graph
{
    int distance; 
    int gSize;
    int visited;
    int capacity; 
    struct Graph **graphs;  
} Graph;

Graph *create();
void insertDist(Graph *g, int distance);
void expandGraphsArray(Graph *g);
void insertPoint(Graph *graph, Graph *child);
void removeFirst(Graph *g);
void removeAtPoint(Graph* g, int point);
void removeLast(Graph *g);
void deletePoint(Graph *graph, int distance);
void printChilds(Graph *g);
void freeGraph(Graph *g);
int depthFirstSearch(Graph *g, int target);
int isTree(Graph *g);
void resetVisited(Graph *g);

#endif
