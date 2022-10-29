#include <iostream>
#include <vector>
using namespace std;

struct vertex{
    int marbles;
    int moves;
    bool ischild;
    vector<vertex*> son;
};
int Smallest(vertex* actual){
    if(actual->son.empty()){
        actual->moves = actual->marbles - 1;
        return abs(actual->moves);
    }
    int count = 0;

    for(int i = 0;i<actual->son.size();i++){
        count += Smallest(actual->son[i]);
        actual->moves += actual->son[i]->moves; 
        
    }
    if(actual->ischild==true){
        actual->moves += actual->marbles - 1;
        count += abs(actual->moves);
    }
    return count;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int cases = 10;
    int result;
    int n,v,m,d,children,k;
    while(cases--){
        cin>>n;
        if(n==0){break;}
        vertex *array_ver = new vertex[n];
        for(int i = 0 ; i<n;i++){
            cin>>v>>m>>d;
            --v;
            array_ver[v].marbles = m;
            array_ver[v].me = v;
            for(int j = 0 ; j<d;j++){
                cin>>k;
                --k;
                array_ver[v].son.push_back(&array_ver[k]);
                array_ver[k].ischild = true;
            }
        }
        for(int i = 0 ; i<n;i++){
            if(array_ver[i].ischild!=true){
                result = Smallest(&array_ver[i]);
                break;
            }
        }
        cout<<result<<endl;
    }
}