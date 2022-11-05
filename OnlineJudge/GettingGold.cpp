#include <iostream>
using namespace std;
char map[50][50];
bool visited[51][51];
int directions[4][2] = {
		        { 0,1 },
		        { -1,0 },
		        { 0,-1 },
		        {1,0},
		                } ;
int gold;
void dfs(int x , int y,int filas , int columnas){
    visited[x][y] = true;
    if(map[x][y]=='#'){
        
        return;
    } 
    if(map[x][y]=='G'){
        gold++;

    }
    
    for(int i = 0;i<4;i++){
        int xx = x + directions[i][0] ; int yy = y + directions[i][1];
        if(xx>=0 && yy>=0 && xx<filas && yy <columnas&&map[xx][yy]=='T'||visited[xx][yy]){
            return;
        }
    }
    for(int i = 0;i<4;i++){
        int xx = x + directions[i][0] ; int yy = y + directions[i][1];
        if(xx>=0 && yy>=0 && xx<filas && yy <columnas&&(!visited[xx][yy])){
            dfs(xx,yy,filas,columnas);
        }
    }

    
}
int main(){
    
    int cases;
    int filas,columnas;
    int x , y ;
    while(cin>>columnas>>filas){
        for(int i = 0;i<filas;i++){
            for (int j = 0; j < columnas; j++)
            {
               cin>>map[i][j];
               visited[i][j]=false;
               if(map[i][j]=='P'){
                    x = i;
                    y = j;
               }
            }
        }
        gold = 0;
        dfs(x,y,filas,columnas);
        cout<<gold<<endl;
        for(int i = 0;i<filas;i++){
            for (int j = 0; j < columnas; j++)
            {
               cout<<visited[i][j];
            }
            cout<<endl;
        }
        
    }
}