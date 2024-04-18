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

void removeFirst(Graph *g)
{
    free(g->graphs[0]);
    for (int i = 0; i < g->gSize - 1; i++)
    {

    }
}

void removeAtPoint(Graph* g, int point)
{

}

void removeLast(Graph *g)
{
    free(g->graphs[g->gSize]);
    g->graphs[g->gSize--];
}

void deletePoint(Graph *graph, int distance)
{
    for (int i = 0; i < graph->gSize; i++)
    {
        Graph child = graph->graphs[i];
        if (child->distance == distance)
        {
            // Remove First
            // Remove At Point
            // Remove Last
        }
    }
}
