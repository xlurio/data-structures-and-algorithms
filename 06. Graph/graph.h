#include <stdio.h>
#include "list.h"

struct Graph
{
    int vertical_size;
    int *horizontal_size;
    struct List **vertices;
};

struct Graph *create_graph(int size)
{
    int i;

    struct Graph *new_graph = (struct Graph *)malloc(sizeof(struct Graph));
    new_graph->vertical_size = size;
    new_graph->horizontal_size = (int *)malloc(size * sizeof(short));
    *(new_graph->vertices) = (struct List *)malloc(size * sizeof(struct List));

    for (i = 0; i < size; i++)
    {
        new_graph->horizontal_size[i] = 0;
        new_graph->vertices[i] = create_list(size);
    }

    return new_graph;
}

void add_edge(int vertex_number, int value, struct Graph **graph_to_push_to)
{
    struct List *list_to_push_to = (struct List *)malloc(sizeof(struct List));
    list_to_push_to = (*graph_to_push_to)->vertices[vertex_number];
    append_to_list(value, &list_to_push_to);

    (*graph_to_push_to)->horizontal_size[vertex_number]++;
}

void print_graph(struct Graph **graph_to_print)
{
    for (int vertex_number = 0; vertex_number < (*graph_to_print)->vertical_size; vertex_number++)
    {
        printf("Vertex %i:\t", vertex_number);

        for (int i = 0; i < (*graph_to_print)->horizontal_size[vertex_number]; i++)
        {
            printf("%i\t", get_item_from_list(i, &((*graph_to_print)->vertices[vertex_number])));
        }

        printf("\n\n");
    }
}