#include<iostream>
using namespace std;

void printAdjacencyMatrix(int adjmat[][101], int n) {
    cout << "Adjacency Matrix : " << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << adjmat[i][j] << "\t";
        }
        cout << endl;
    }
}

int main(){
    int n,m;
    cout<<"enter the number of vertices : ";
    cin>>n;
    cout<<"enter the number of edges : ";
    cin>>m;
    int adjmat[n+1][n+1]={0};

    for(int i=0;i<m;i++){
        int u,v;
        cout<<"enter the points to connect : ";
        cin>>u>>v;
        adjmat[u][v]=1;
        adjmat[v][u]=1;
    }
    printAdjacencyMatrix(adjmat,n);
    return 0;
}