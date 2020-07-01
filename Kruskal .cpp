#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
class Graph{
    private :
                int V,E;
                vector<pair<int,pair<int,int> > >Edges;
                vector<pair<int,pair<int,int> > >MST;
    public:
                Graph(int V,int E);
                void addedge(int u,int v,int w);
                int kruskal();
                void printMST();
};
Graph :: Graph (int V,int E){
    this -> V= V;
    this -> E =E;
}
void Graph::addedge(int u,int v,int w){
    Edges.push_back({w,{u,v}});
}
void Graph::printMST(){
    vector<pair<int,pair<int,int> > >::iterator it;
    for(it = MST.begin();it!=MST.end();it++){
        cout << it->second.first << " - " << it->second.second << endl;
    }
}
struct Disjointset{
    int *parent,*rnk;
    int n;
        Disjointset(int n){
            this-> n =n;
            parent = new int[n+1];
            rnk = new int[n+1];
            for(int i=0;i<n+1;i++){
                parent[i]=i;
                rnk[i] =0;
                }
            }
    int find(int u){
            if(u==parent[u]) return parent[u];
            else return find(parent[u]);
    }
    void Union(int x,int y){
    x = find(x);
    y = find(y);
    if(x != y){
        if(rnk[x] < rnk[y]){
            rnk[y] += rnk[x];
            parent[x] = y;
        }
        else{
            rnk[x] += rnk[y];
            parent[y] = x;
        }
     }
  }
};
int Graph::kruskal(){
    int MSTWeight = 0; //sum of all vertex weights
    sort(Edges.begin(),Edges.end());
    //for all u in G_v
    //    MAKE-SET(u)
    Disjointset ds(this->V);
    vector<pair<int,pair<int,int> > >::iterator it;
    // for all edges in G
    for(it = Edges.begin(); it!=Edges.end();it++){
        int u = it->second.first;
        int v = it->second.second;
        int setU = ds.find(u);
        int setV = ds.find(v);
        if(setU != setV){
            int w = it->first;
            MST.push_back({w,{u,v}});
            MSTWeight += it->first;
            ds.Union(setU,setV);
        }
    }
    return MSTWeight;
}
int main(){
     int V,E;
     cout << "No.of vertices needed " << endl;
     cin >> V;
     cout << "No.of edges reqd" << endl;
     cin >> E;
     Graph g(V,E);
     int u,v,w;
     // insert edge weights.
     for(int i=0;i<E;i++){
          cin >> u >> v >> w;
          g.addedge(u,v,w);
     }
     int weight =g.kruskal();
     cout << "MST:";
     g.printMST();
     cout << "Weight of MST is: " << weight;

return 0;
}
