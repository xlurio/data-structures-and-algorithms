#include "queue.h"

int main()
{
    printf("Creating a queue...\n");

    struct Queue *some_stack = create_queue(5);
    print_queue(&some_stack);

    printf("\nQueue created!\n");

    printf("\n************************\n");

    printf("\nEnqueueing...\n");

    enqueue(5, &some_stack);
    enqueue(3, &some_stack);
    print_queue(&some_stack);

    printf("\nQueue enqueued!\n");

    printf("\n************************\n");

    printf("\nDequeueing...\n");

    printf("\n%i dequeued\n", dequeue(&some_stack));
    print_queue(&some_stack);

    print("\n");

    return 0;
}