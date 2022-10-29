#include <iostream>
#include <map>
using namespace std;
const int N = 10002;
struct almost_union_find{
    int sets[N];long long count[N];
    int maximo = 1;
    void init(int n){
        for(int i = 1;i<=n;i++){
            sets[i] = i+n;
            sets[i+n] = i+n;
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
        sets[x] = y;
        if(count[y]>maximo){
            maximo = count[y];
            count[N] = maximo;
        }

        return true;
    }
};
int main(){
    int r , c;
    string animal,predator;
    while(cin>>c>>r){
        if(c==0&r==0){break;}
        almost_union_find animals;
        animals.init(c);
        map<string,int> chain;
        for(int i = 1;i<=c;i++){
            cin>>animal;
            chain[animal] = i;

        }
        for(int i = 0;i<r;i++){
            cin>>animal>>predator;
            int k = chain[animal];
            int j = chain[predator];
            animals.join(k,j);
        }
        
        cout<<animals.count[N]<<endl;
    }
    
}