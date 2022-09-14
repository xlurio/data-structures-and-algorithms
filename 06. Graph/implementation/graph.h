#include "list.h"

struct Graph
{
    int vertical_size, horizontal_size;
    struct List **vertex;
};

struct Graph *create_graph(int size)
{
    struct Graph *new_graph = (struct Graph *)malloc(sizeof(struct Graph));
    new_graph->vertical_size = size;
    new_graph->horizontal_size = 0;
    *(new_graph->vertex) = (struct List *)malloc(size * sizeof(struct List));
}

void add_node(int vertex_number, int value, struct Graph **graph_to_push_to)
{
    struct List *list_to_push_to = (*graph_to_push_to)->vertex[vertex_number];
    append_to_list(value, &list_to_push_to);

    (*graph_to_push_to)->horizontal_size++;
}