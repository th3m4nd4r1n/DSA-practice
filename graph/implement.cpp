#include<bits/stdc++.h>
using namespace std;

class graph{
    public:
    unordered_map<int, list<int> > adj;
    
    void addEdge(int u, int v, bool directed){
        //dir -> 0 for undirected
        //dir -> 1 fro directed
            adj[u].push_back(v);
        if (!directed)
        {
            adj[v].push_back(u);
        }
        
    }
void printAdjList(){
    for(auto i:adj){
        cout<<i.first<< "->";
        for(auto j:i.second){
            cout<<j<<", ";
    }
    cout<<endl;
}

}};

int main(int argc, char const *argv[])
{
    cout<<"Enter number of nodes: ";
    int nodes;
    cin>>nodes;
    cout<<"\nEnter the number of edges: ";
    int edg;
    cin>>edg;

graph g;

    for(int i=0; i<edg; i++){
        int u,v;
        cin>>u>>v;
        g.addEdge(u,v,0);
    }
    g.printAdjList();
    return 0;
}
