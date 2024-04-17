#include <stdlib.h>
#include <stdio.h>
#include "graph.h"

Graph *create()
{
    Graph *g = (Graph*)malloc(sizeof(Graph));
    g->distance = 0;
    g->capacity = 2;
    g->gSize = 0;
    g->graphs = (Graph**)malloc(sizeof(Graph*));
    if (!g->graphs)
    {
        printf("Could not allocate memory for the graphs");
    }

    return g;
}

void insertDist(Graph *g, int distance)
{
    if (distance <= 0)
    {
        printf("Tried to create a Graph with null or negative distance");
        return;
    }

    g->distance = distance;
}

void expandGraphsArray(Graph *g)
{
    if (g->gSize >= g->capacity)
    {
        g->capacity *= 2;
        g->graphs = (Graph**)realloc(g->graphs, g->capacity * sizeof(Graph*));
        if (!g->graphs)
        {
            printf("Could not reallocate the graphs");
            exit(EXIT_FAILURE);
        }
    }
}

void insertPoint(Graph *graph, Graph *child)
{   
    expandGraphsArray(graph);
    graph->graphs[graph->gSize++] = child;
}
