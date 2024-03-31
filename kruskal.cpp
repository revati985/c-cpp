#include<iostream>
#include<vector>
#include<algorithm>           //sort in ascending order
using namespace std;

vector<int>parent;
vector<int>rank;

int find_set(int v){
    if(parent[v]==v){          //each vertex is it's own parent
        return v;
    }
    return parent[v]=find_set(parent[v]);          // root is made all nodes parent
}
void union_set(int x,int y){
    int xroot=find_set(x);
    int yroot=find_set(y);
    if(xroot==yroot){
        return;                  //in same set as common parent
    }
    if(rank[xroot]<rank[yroot]){
        parent[xroot]=yroot;
    }
    else if(rank[yroot]<rank[xroot]){
        parent[yroot]=xroot;
    }
    else{
        parent[yroot]=xroot;      //equal rank set merged
        rank[xroot]++;
    }
}
int main(){
    int n,m;             //n: no. of vertices, m: no. of edges
    cin>>n>>m;

    parent.resize(n+1); 
    rank.resize(n+1);
    for(int i=0;i<=n;i++){          //initializing parent rank arrays
        parent[i]=i;                //each vertex is it's own parent
        rank[i]=0;
    } 
    vector<vector<int>>edges;       //vector declaration for edge(itself a vector of int)
    for(int i=0;i<m;i++){
        int u,v,w; 
        cin>>w>>u>>v;
        edges.push_back({w,u,v});
    }
    sort(edges.begin(),edges.end());
    int cost=0;
    for(const vector<int>& edge : edges){           //iterating each edge in vector
        int w=edge[0];
        int u=edge[1];
        int v=edge[2];
        int x=find_set(u);         //parent of u is x
        int y=find_set(v);
        if(x==y){
            continue;              //in same set
        }
        if(x!=y){
            cout<<u<<" "<<v<<endl;
            cost+=w;
            union_set(x,y);
        }

    }
    cout<<cost<<endl;
    return 0;
}
