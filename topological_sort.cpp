#include <bits/stdc++.h> 
using namespace std; 

class Graph{
    int V; 
    list<int> *adj; 
    vector<int> indegree; // for getting the number of inward source edges. 
    void alltopologicalSortUtil(vector<int>& result,bool visited[]);

    public:
    Graph(int V); 
    void addEdge(int v, int w); 
    void alltopologicalsort();
}

Graph::Graph(int V){
    this->V = V; 
    adj = new list<int>[V]; 
    for(int i =0; i< V; i++){
     indegree.push_back(0); 
    }
}

void Graph::addEdge(int v, int w){
    adj[v].push_back(w); 
    indegree[w]++; 
}

void Graph::alltopologicalsortUtil(vector<int> &result, bool visited[]){
    // To indicate whether all topological are found
    // or not
    bool flag = false; 

    vector<int> zeroIndegree; /// Precompute the zero edges first. 
    for (int i = 0; i < V; i++) {
        if (indegree[i] == 0 && !visited[i]) {
            zeroIndegree.push_back(i);
        }
    }

    for(int i :zeroIndegree){
        vector<int> affected; 

        for(int j:adj[i]){
            indegree[j]--;
            if(indegree[j]==0){
                affected.push_back(j); 
            }
        }

        result.push_back(i); 
        visited[i] = true;

        alltopologicalSortUtil(result, visited);
        visited[i] = false; 
        result.pop_back(); 
    }

    

        // Backtracking: restore state
        visited[i] = false;
        result.pop_back(); // More efficient than erase
        
        // Restore indegree of adjacent vertices
        for (int j : adj[i]) {
            indegree[j]++;
        }
        
        flag = true;
 
/*
    for (int i = 0; i < V; i++)
    {
        //  If indegree is 0 and not yet visited then
        //  only choose that vertex
        if (indegree[i] == 0 && !visited[i])
        {
            //  reducing indegree of adjacent vertices
            list<int>:: iterator j;
            for (j = adj[i].begin(); j != adj[i].end(); j++)
                indegree[*j]--;
 
            //  including in result
            result.push_back(i);
            visited[i] = true;
            alltopologicalSortUtil(result, visited);
 
            // resetting visited, res and indegree for
            // backtracking
            visited[i] = false;
            result.erase(result.end() - 1);
            for (j = adj[i].begin(); j != adj[i].end(); j++)
                indegree[*j]++;
 
            flag = true;
        }
    }
 */ 
 
    //  We reach here if all vertices are visited.
    //  So we print the solution here
    if (!flag)
    {
        for (int i = 0; i < result.size(); i++)
            cout << result[i] << " ";
        cout << endl;
    }
}

void Graph::alltopologicalsort(){
    bool *visited = new bool[V]; 
    for(int i =0; i<V; i++){
        visited[i] = false; 
    }

    vector<int> result; 
    alltopologicalsortUtil(result, visited); 
    delete[] visited;

}

// Driver program to test above functions
int main() {
    // Create a graph given in the above diagram
    Graph g(6);
    g.addEdge(5, 2);
    g.addEdge(5, 0);
    g.addEdge(4, 0);
    g.addEdge(4, 1);
    g.addEdge(2, 3);
    g.addEdge(3, 1);
    
    cout << "All Topological sorts\n";
    g.alltopologicalsort();
    
    return 0;
}