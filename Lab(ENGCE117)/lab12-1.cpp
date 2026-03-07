#include <stdio.h>
#include <stdlib.h>

int *dijkstra(int *L, int n);

int main() {
    int n = 5; 
    int i, j; 
    int *d, *g;
    
    g = (int *)malloc(n * n * sizeof(int)); 
    
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            g[i * n + j] = -1; 

    g[0 * n + 1] = 100; g[0 * n + 2] = 80;
    g[0 * n + 3] = 30;  g[0 * n + 4] = 10;
    g[1 * n + 2] = 25;  g[3 * n + 1] = 20;
    g[3 * n + 2] = 40;  g[4 * n + 3] = 10;

    d = dijkstra(g, n); 
    
    for(i = 0; i < n - 1; i++)
        printf("%d ", d[i]);
    
    return 0;
}

int *dijkstra(int *L, int n) {

    int *D = (int *)malloc(n * sizeof(int)); 
    int *visited = (int *)calloc(n, sizeof(int)); 
    
    for (int i = 0; i < n; i++) {
        D[i] = L[0 * n + i]; 
    }
    
    visited[0] = 1; 
    
    for (int count = 0; count < n - 2; count++) {
        int v = -1;
        int min_dist = -1;

        for (int i = 1; i < n; i++) {
            if (!visited[i] && D[i] != -1) {
                if (min_dist == -1 || D[i] < min_dist) {
                    min_dist = D[i];
                    v = i;
                }
            }
        }

        if (v == -1) break; 
        visited[v] = 1; 

        for (int w = 1; w < n; w++) {
            if (!visited[w] && L[v * n + w] != -1) {
                int new_dist = D[v] + L[v * n + w];
                if (D[w] == -1 || new_dist < D[w]) {
                    D[w] = new_dist;
                }
            }
        }
    }

    int *result = (int *)malloc((n - 1) * sizeof(int));
    for (int i = 0; i < n - 1; i++) {
        result[i] = D[i + 1];
    }
    
    free(D);
    free(visited);
    return result; 
}