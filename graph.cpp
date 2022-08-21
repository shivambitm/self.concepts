#include <bits/stdc++.h>
using namespace std;
#define I INT_MAX

void shortestPathAlgorithm() {
    singleSource() {
        //cost of shortest path from source to destination (Dijkstra Algo) - not used for -ve weight

    }
    bellmanFord() {
        //used for both +ve and -ve weight edges
    }
    allPairs() {
        //cost of shortest path from each vertex to every vertex (Floyd Warshall Algo) -
    }
}

void spanningTree() {
    //sub graph of a graph having all vertices of a graph having all vertices of graph but n-1 edges, so that no cycle can be made
    //prims algorithm for findiing minimum cost spanning tree

}
void PrimsMST() {
    // use cut method - cuts lagate jaana hai bss dekhna yeh hai ki loop na ban jaae
    // tree me hmesha 1 origin point hota hai lekin grpah me aisa koi origin point nhi hota hai
    //select a minimum cost edge from graph
    //from graph, select a min. cost edge from connected edge,
    // select the min. but connected
    // traversing and selecting n-1 edges
    //tc: O(n*log n)

    int cost[][8] =
    {   {I, I, I, I, I, I, I, I},
        {I, I, 25, I, I, I, 5, I},
        {I, 25, I, 12, I, I, I, 10},
        {I, I, 12, I, 8, I, I, I},
        {I, I, I, 8, I, 16, I, 14},
        {I, I, I, I, 16, I, 20, 18},
        {I, 5, I, I, I, 20, I, I},
        {I, I, 10, I, 14, 18, I, I}
    };
    int near[8] = {I, I, I, I, I, I, I, I};
    int t[2][6];
    int main()
    {
        int i, j, k, u, v, n = 7, min = I;

        for (i = 1; i <= n; i++)
        {
            for (j = i; j <= n; j++)
            {
                if (cost[i][j] < min)
                {
                    min = cost[i][j];
                    u = i;
                    v = j;
                }
            }
        }
        t[0][0] = u; t[1][0] = v;
        near[u] = near[v] = 0;

        for (i = 1; i <= n; i++)
        {
            if (near[i] != 0)
            {
                if (cost[i][u] < cost[i][v])
                    near[i] = u;
                else
                    near[i] = v;
            }
        }

        for (i = 1; i < n - 1; i++)
        {
            min = I;
            for (j = 1; j <= n; j++)
            {
                if (near[j] != 0 && cost[j][near[j]] < min)
                {
                    k = j;
                    min = cost[j][near[j]];
                }
            }
            t[0][i] = k;
            t[1][i] = near[k];
            near[k] = 0;

            for (j = 1; j <= n; j++)
            {
                if (near[j] != 0 && cost[j][k] < cost[j][near[j]])
                    near[j] = k;
            }

        }

        for (i = 0; i < n - 1; i++)
        {
            cout << "(" << t[0][i] << "," << t[1][i] << ")" << endl;
        }

    }
}

void kruskalsMST() {
    //always seect min. cost edge, then next min. but make sure that it must make a cycle
    //tc: O(n**2)

    //heap gives min and max value
    //for n vertices, to construct the spannig tree we require n vertices and n-1 edges, it will always a connected graph, no loop or cycle exist.
    // how to find the min. cost spannig tree //
    //step 1: jo weight diya hai usko ascending order me collect krlo
    // step 2: grapah ko spannig tree me badalne ke liye total no. of vertices chahaiye jitna original graph me the
    // step 3: jabtak loop nhi banrha hai tbtak spanningTree banate rehna hai
    // spanning tree ke liye loop allowed nhi hai
    // jo cost aaya hai usko add kar dijiye, wahi hai min. coost tree hai
    //kruskal can find spanning trees for individual componenets,this was not possible in prim's algorithm
}

#define I 65535
int edge[9][3] = {{1, 2, 28}, {1, 6, 10}, {2, 3, 16}, {2, 7, 14}, {3, 4, 12},
    {4, 5, 22}, {4, 7, 18}, {5, 6, 25}, {5, 7, 24}
};
int set[8] = { -1, -1, -1, -1, -1, -1, -1, -1};
int included[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
void join(int u, int v)
{
    if (set[u] < set[v])
    {
        set[u] += set[v];
        set[v] = u;
    }
    else
    {
        set[v] += set[u];
        set[u] = v;

    }
}
int find(int u)
{
    int x = u, v = 0;
    while (set[x] > 0)
    {
        x = set[x];
    }
    while (u != x)
    {
        v = set[u];
        set[u] = x;
        u = v;
    }

    return x;
}
int t[2][7];
int main(int argc, const char * argv[])
{
    int u = 0, v = 0, i, j, k = 0, min = 65535, n = 9;
    i = 0;

    while (i < 6)
    {
        min = 65535;
        for (j = 0; j < n; j++)
        {
            if (included[j] == 0 && edge[j][2] < min)
            {
                u = edge[j][0]; v = edge[j][1]; min = edge[j][2];
                k = j;
            }
        }
        if (find(u) != find(v))
        {
            t[0][i] = u; t[1][i] = v;
            join(find(u), find(v));
            included[k] = 1;
            i++;
// printf("%d %d %d %d\n",u,v,find(u),find(v));

        }
        else
        {
            included[k] = 1;
        }
    }
    printf("Spanning Tree\n");
    for (i = 0; i < 6; i++)
    {
        printf("%d %d\n", t[0][i], t[1][i]);
    }
    return 0;
}
}

class Solution {
    //recursive dfs function  in C++
    void dfs(int node, vector<int> &vis, vector<int> adj[], vector<int> &storeDFS) {
        storeDFS.push_back(node);// aafter storing all the nodes, return it
        vis[node] = 1; //make sure that node is marked true
        for (auto it : adj[node]) { //travel to all its adjacency nodes
            if (!vis[it]) { //if node is not vsited call dfs
                dfs(it, vis, adj, storeDFS);
            }
        }
    }
public:
    vector<int> depthFirstSearch(int V, vector<int> adj[]) { // stored array in adj[]
        //no. of nodes is V, for all it's components
        vector<int> storeDFS;
        vector<int> vis(V + 1, 0); //created visited array of size v+1
        for (int i = 1; i <= V; ++i) {
            if (!vis[i]) { // if node is unvisited, call dfs
                dfs(i, vis, adj, storeDFS);
            }
        }
        return storeDFS;
    }
};



void bfs() {
    vector<int> breadthFirstSearch(int V, vector<int> adj[]) //stored the graph in vector adj[], no.of nodes V
    vector<int> bfs; //which is going to store the traversal nodes
    vector<int> vis(V + 1, 0); // cretaed a vistited array, vis no. of nodes and marks it false initially

    for (int i = 1; i < V; ++i) {
        if (!vis[i]) { //call the bfs if its unvisited, if itsn't visited that means
            //it's the component which has not been visited
            queue<int> q;
            q.push(i); //insert rhe starting node of the component inn queue
            vis[i] = 1;
            while (!q.empty()) { //iterate till the queue is not empty
                int node = q.front(); //took out the first element from queue
                q.pop(); //make sure that it was deleted from queue
                bfs.push_back(node);//our bfs has traversed this node,add it to the bfs vector

                for (auto it : adj[node]) { //all the adjacent nodes were put into the queue
                    if (!vis[it]) { //if that node hasn't been visited, means its maked as 0
                        q.push(it); //take that node and push it to the queue
                        vis[it] = 1; //if it is visites then it shouldn't be pushed afte sometime
                    }
                }
            }
        }
    }
    return bfs; //has been stored in bfs so return
}

void adjacencyMatrix() {
    int n, m; cin >> n >> m;

    //declare the adjacent matrix
    int adj[n + 1][m + 1];

    //take edges as an input
    for (int i = 0; i < m; ++i) {
        int u, v; cin >> u >> v;
        adj[u][v] = 1;  adj[v][u] = 1; //for directed graph, comment the second line
    }
}

void adjacencyList() {
    int n, m; cin >> n >> m;
    vector<int> adj[n + 1]; //declaring the adjacent list
    //take edges as an input for unweighted graph
    for (int i = 0; i < m; ++i) {
        int u, v; cin >> u >> v;
        adj[u].push_back(v); adj[v].push_back(u);
    }

    // FOR weighted graph
    int n, m; cin >> n >> m;
    vector<pair<int, int>> adj[n + 1]; //declaring the adjacent list
    //take edges as an input for unweighted graph
    for (int i = 0; i < m; ++i) {
        int u, v, wt; cin >> u >> v >> wt;
        adj[u].push_back({v, wt}); adj[v].push_back({u, wt});
    }
}

int main() {
//DAG - directed acyclic graph -> topological ordering means we can put the DAG in linear fashion so thatt we can't reach to the starting element once started traversing
//directed graph me ordered pairs bante hai aur undirected graph me unordered pairs bante hai
    adjacencyMatrix;
    adjacencyList;
    compactList;
    bfs; dfs;
    spanningTree;
    PrimsMST;
    kruskalsMST;
    shortestPathAlgorithm
    return 0;
}