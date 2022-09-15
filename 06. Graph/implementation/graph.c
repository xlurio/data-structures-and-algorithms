#include "graph.h"

int main(void)
{
    printf("Creating a graph...\n");

    struct Graph *some_graph = (struct Graph *)malloc(sizeof(struct Graph));
    some_graph = create_graph(4);

    printf("Graph created!\n");
    printf("\n************************\n");
    printf("Adding nodes...\n");

    add_edge(0, 1, &some_graph);
    add_edge(0, 2, &some_graph);
    add_edge(1, 2, &some_graph);
    add_edge(2, 0, &some_graph);
    add_edge(2, 3, &some_graph);
    add_edge(3, 3, &some_graph);

    print_graph(&some_graph);

    printf("Nodes added!");

    free(some_graph);

    return 0;
}