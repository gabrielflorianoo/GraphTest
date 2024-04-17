#include "graph.c"

int main()
{
    Graph *g = create();

    Graph *c = create();
    insertDist(c, 2);

    insertPoint(g, c);

    Graph *c2 = create();
    insertDist(c2, 5);

    insertPoint(g, c2);

    printf("Parent: %d, Child: %d, Child2: %d\n", g->distance, g->graphs[0]->distance, g->graphs[1]->distance);

    return 0;
}
