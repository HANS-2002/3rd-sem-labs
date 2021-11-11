// Modify the above program to include a menu driven program and add options for the depth-first traversal and breadth-first traversal.
#include <stdio.h>

int vertices = 0, edges = 0;

void DFT(int start, int visited[], int Adj[][vertices])
{
    printf("%d ", start);
    visited[start] = 1;
    for (int i = 0; i < vertices; i++)
        if (Adj[start][i] == 1 && (!visited[i]))
            DFT(i, visited, Adj);
}

void _DFT(int start, int Adj[][vertices])
{
    int visited[vertices];
    for (int i = 0; i < vertices; i++)
        visited[i] = 0;
    DFT(start, visited, Adj);
}

void BFT(int curr, int N, int vis[], int dp[], int v[], int Adj[][vertices])
{
    int i = 1;
    while (curr <= N)
    {
        int node = v[curr - 1];
        printf("%d ", node);
        for (int i = 0; i < N; i++)
        {
            int next = Adj[node][i];
            if ((!vis[next]) && (dp[next] < dp[node] + 1))
            {
                v[i++] = next;
                dp[next] = dp[node] + 1;
                vis[next] = 1;
            }
        }
        curr += 1;
    }
}

void _BFT(int Adj[][vertices], int N, int source)
{
    int visited[vertices], dp[vertices], v[vertices + 1];
    for (int i = 0; i < vertices; i++)
        visited[i] = dp[i] = 0;
    v[0] = source;
    dp[0] = 0;
    visited[0] = 1;
    BFT(1, N, visited, dp, v, Adj);
}

void addEdge(int Adj[][vertices], int m, int n)
{
    Adj[m][n] = Adj[n][m] = 1;
}

void printAdjMatrix(int Adj[][vertices])
{
    printf("\nThe Adjacency matrix: \n");
    for (int i = 0; i < vertices; i++)
    {
        for (int j = 0; j < vertices; j++)
            printf("%d ", Adj[i][j]);
        printf("\n");
    }
}

int main()
{
    // { { 1, 2 }, { 2, 3 }, { 4, 5 }, { 1, 5 } }
    int choice = 1;
    printf("Enter number of vertices of undirected graph: ");
    scanf("%d", &vertices);
    int Adj[vertices][vertices];
    for (int i = 0; i < vertices; i++)
        for (int j = 0; j < vertices; j++)
            Adj[i][j] = 0;
    while (choice)
    {
        printf("\n------------GRAPH MENU------------\n"
               "0)To exit\n"
               "1)Add a new edge\n"
               "2)To print Adjajency matrix\n"
               "3)Depth First Traversal\n"
               "4)Breadth First Traversal\n"
               "Enter a choice!\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 0:
            return 0;
            break;
        case 1:
        {
            int m, n;
            printf("Enter 2 vertices to form edge: ");
            scanf("%d %d", &m, &n);
            addEdge(Adj, m, n);
            edges++;
        }
        break;
        case 2:
            printAdjMatrix(Adj);
            break;
        case 3:
        {
            int k;
            printf("Enter node to start DFT: ");
            scanf("%d", &k);
            _DFT(k, Adj);
        }
        break;
        case 4:
        {
            int k;
            printf("Enter node to start BFT: ");
            scanf("%d", &k);
            _BFT(Adj, vertices, k);
        }
        break;
        default:
            printf("Enter a valid choice!\n");
            break;
        }
    }
    return 0;
}
