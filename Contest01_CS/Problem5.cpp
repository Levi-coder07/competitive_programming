#include <iostream>
using namespace std;
#define N 10000
struct almost_union_find{
    int sets[N];
    void init(int n){
        for(int i = 0;i<n;i++){
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
};
int main(){
    return 0;
}