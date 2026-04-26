#include<iostream>
using namespace std;
int main(){
int n,m;
cout<<"enter no of vertices";
cin>>n>>m;
int adj[100][100];
//initialise//
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        adj[i][j]=0;
    }
}
cout << "enter edges";
