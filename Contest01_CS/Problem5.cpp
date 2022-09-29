#include <iostream>
using namespace std;
#define N 100000
struct almost_union_find{
    int *sets = new int[N];
    void init(int n){
        for(int i = 1;i<=n;i++){
            sets[i] = i;
        }
    }
    int find(int x){
        if(sets[x] == x){return x;}
        return sets[x] = find(sets[x]);
    }
    int find2(int x){
        if(sets[x] == x){return x;}
        return sets[x] = x;
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
    void sum(int n,int p){
        int suma=0,count =0;
        
        for(int i = 1;i<=n;i++){
            if(sets[i]==sets[p]){
                count++;
                suma = suma + i;
                
            }
           

        }
        cout<<count<<" output "<<suma<<endl;
    }

};
int main(){
    int tipo;
    int p , q;
    int n , m;
    
    while(scanf("%d %d",&n,&m)!=EOF){
        almost_union_find elements;
        elements.init(n);
        for(int i=0;i<m;i++){
            scanf("%d",&tipo);
            if(tipo==1){
                scanf("%d %d",&p,&q);
                elements.join(p,q);
            }else if (tipo ==2){
                scanf("%d %d",&p,&q);
                elements.move(p,q);
            }else{
                
                scanf("%d",&p);
                
                elements.sum(n,p);
                //elements.print(n);
            }
        }

    }
    return 0;
    //Algorithm
    //Goodrich
    // Skiena
    // Sedgewick
}
