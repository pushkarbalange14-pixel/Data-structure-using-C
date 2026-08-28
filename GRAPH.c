#include <stdio.h>
#include <conio.h>

void main()
{
    int graph[10][10];
    int vertices, edges;
    int i, j, u, v;

    clrscr();

    printf("Enter number of vertices: ");
    scanf("%d", &vertices);

    printf("Enter number of edges: ");
    scanf("%d", &edges);

    /* Initialize matrix */
    for(i = 0; i < vertices; i++)
    {
        for(j = 0; j < vertices; j++)
        {
            graph[i][j] = 0;
        }
    }

    /* Enter edges */
    for(i = 0; i < edges; i++)
    {
        printf("\nEnter edge (source destination): ");
        scanf("%d %d", &u, &v);

        graph[u][v] = 1;
        graph[v][u] = 1;
    }

    /* Display adjacency matrix */
    printf("\n\nAdjacency Matrix:\n");

    for(i = 0; i < vertices; i++)
    {
        for(j = 0; j < vertices; j++)
        {
            printf("%d ", graph[i][j]);
        }

        printf("\n");
    }

    getch();
}
