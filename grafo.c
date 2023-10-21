#include <stdio.h>
#include <stdlib.h>

#define MAX_VERTICES 100

int graph[MAX_VERTICES][MAX_VERTICES];
int numVertices = 0;

void novaAresta(int from, int to) {
    if (from < 0 || from >= numVertices || to < 0 || to >= numVertices) {
        printf("Vertices inválidos.\n");
        return;
    }

    graph[from][to] += 1;
    graph[to][from] += 1;
}

int main() {
    numVertices = 5;

    for (int i = 0; i < numVertices; i++) {
        for (int j = 0; j < numVertices; j++) {
            graph[i][j] = 0;
        }
    }

    srand(10);

    int a, b;
    for (int i = 0; i < numVertices; i++) {
        a = rand() % numVertices;
        b = rand() % numVertices;
        if (a != b)
            novaAresta(a, b);
    }

    return 0;
}

// Quais os graus dos vértices conectados ao vértice com maior grau?