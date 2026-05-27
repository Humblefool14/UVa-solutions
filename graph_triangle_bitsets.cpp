#include <iostream>
#include <vector>
#include <bitset>

using namespace std;

// Set slightly larger than 2000 to prevent out-of-bounds errors
const int MAXN = 2005; 
bitset<MAXN> adj[MAXN];

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    if (!(cin >> n >> m)) return 0;

    // Read edges and populate the bitset adjacency matrix
    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        // If your graph is 1-indexed, keep these as is. 
        // If 0-indexed, they work perfectly fine too.
        adj[u][v] = 1;
        adj[v][u] = 1;
    }

    long long triple_count = 0;

    // Iterate through all possible pairs of vertices (u, v) where u < v
    for (int u = 1; u <= n; ++u) {
        for (int v = u + 1; v <= n; ++v) {
            // If an edge exists between u and v, find their shared neighbors
            if (adj[u][v]) {
                // Bitwise AND operation computes the intersection in O(N/64)
                triple_count += (adj[u] & adj[v]).count();
            }
        }
    }

    // Each unique triple (a, b, c) is counted exactly 3 times 
    // (once for each of its 3 edges), so divide by 3.
    cout << triple_count / 3 << "\n";

    return 0;
}
