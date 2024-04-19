#include "graph.h"

int main()
{
    Graph *g = create();

    // Creating child graphs
    Graph *c1 = create();
    insertDist(c1, 2);

    Graph *c2 = create();
    insertDist(c2, 3);

    Graph *c3 = create();
    insertDist(c3, 4);

    Graph *c4 = create();
    insertDist(c4, 5);

    Graph *c5 = create();
    insertDist(c5, 6);

    Graph *c6 = create();
    insertDist(c6, 7);

    // Inserting child graphs into the main graph
    insertPoint(g, c1);
    insertPoint(g, c2);
    insertPoint(g, c3);
    insertPoint(g, c4);
    insertPoint(g, c5);
    insertPoint(g, c6);

    // Displaying the distances of child graphs
    printf("Child Distances: ");
    for (int i = 0; i < g->gSize; i++) {
        printf("%d ", g->graphs[i]->distance);
    }
    printf("\n");

    freeGraph(g);

    return 0;
}
