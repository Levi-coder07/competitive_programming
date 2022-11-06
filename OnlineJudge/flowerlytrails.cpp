#include <iostream>
#include <vector>
#include <tuple>
using namespace std;

struct graph{
    vector<tuple<int,int,int>> aristas;
    int points;
};
int main(){
    graph G;
    int p , t;
    int p1 , p2 , l;
    while(cin>>p>>t){
        G.points = p;
        for(int i = 0;i<t;i++){
            cin>>p1>>p2>>l;
            cout<<"HOLA";
            G.aristas.push_back(make_tuple(p1,p2,l));
           
        }
        for(int i = 0;i<t;i++){
            
            cout<<get<0>(G.aristas[i]);
        }


    }
}