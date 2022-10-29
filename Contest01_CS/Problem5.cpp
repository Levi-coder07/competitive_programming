<<<<<<< HEAD
#include <iostream>
using namespace std;
const int N = 200005;
struct almost_union_find{
    int sets[N];long long suma[N], count[N];
    void init(int n){
        for(int i = 1;i<=n;i++){
            sets[i] = i+n;
            sets[i+n] = i+n;
            suma[i+n] = i;
            count[i+n] = 1;
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
        count[y] += count[x];
        suma[y]  += suma[x];
        sets[x] = y;
        return true;
    }
    bool move(int p,int q){
        int p_ = find(p);
        int q_ = find(q);
        
        if(p_==q_){
            
            return false;
        }
        ++count[q_];
        --count[p_];
        suma[q_] += p;
        suma[p_] -= p;
        sets[p] =q_;
        return true;
    }
    void print(int n){
        for(int i = 1;i<=n;i++){
            cout<<sets[i]<<" ";
        }
    }
   

};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int tipo;
    int p , q;
    int n , m;
    while(cin>>n>>m){
        almost_union_find elements;
        elements.init(n);
        for(int i=0;i<m;i++){
            cin>>tipo;
            if(tipo==1){
                cin>>p>>q;
                elements.join(p,q);
            }else if (tipo ==2){
                cin>>p>>q;
                elements.move(p,q);
            }else{
                cin>>p;
                cout<< elements.count[elements.find(p)] <<" "<<elements.suma[elements.find(p)]<<endl;
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
=======
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
>>>>>>> d727bba0f8cf575e91f3832b47ff0b6f6de79ee0
