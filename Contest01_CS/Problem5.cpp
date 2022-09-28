#include <iostream>
using namespace std;
#define N 10000
struct almost_union_find{
    int sets[N];
    void init(int n){
        for(int i = 1;i<=n;i++){
            sets[i] = i;
        }
    }
    int find(int x){
        if(sets[x] == x){return x;}
        return sets[x] = find(sets[x]);
    }
    bool join (int x , int y){
        x = find(x);
        y = find(y);
        if(x == y){
            return false;
        }
        sets[y] = x;
        return true;
    }
    bool move(int p,int q){
        q = find(q);
        if(sets[p]==q){
            cout<<"HOLA";
            return false;
        
        }
        sets[p] =q;
        return true;
    }
    void print(int n){
        for(int i = 1;i<=n;i++){
            cout<<sets[i]<<" ";
        }
    }
    void sum(int p,int n){
        int suma=0,count =0;
        p = find(p);
        for(int i = 1;i<=n;i++){
            if(sets[i]==p){
                count++;
                suma = suma + i;
            }
           
        }
        cout<<count<<" "<<suma<<endl;
    }

};
int main(){
    int p , q;
    int n , m;
    int tipo;
    while(cin>>n>>m){
        almost_union_find elements;
        elements.init(n);
        for(int i=0;i<m;i++){
            cin>>tipo>>p>>q;
            if(tipo==1){
                elements.join(p,q);
            }else if (tipo ==2){
                elements.move(p,q);
            }else{
                elements.sum(n,p);
                elements.print(n);
            }
        }

    }
    return 0;
}
