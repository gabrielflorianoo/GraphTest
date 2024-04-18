#include "graph.c"

int main()
{
    Graph *g = create();

    Graph *c = create();
    insertDist(c, 2);

    Graph *c2 = create();
    insertDist(c2, 3);

    Graph *c3 = create();
    insertDist(c3, 4);
    
    Graph *c4 = create();
    insertDist(c4, 5);

    insertPoint(g, c);
    insertPoint(g, c2);
    insertPoint(g, c3);
    insertPoint(g, c4);
    
    printf("Child: %d, %d\n", g->graphs[1]->distance, g->graphs[2]->distance);
    
    // deletePoint(g, 3);
    return 0;
}
