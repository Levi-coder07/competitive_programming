#include <iostream>
#include <vector>
using namespace std;
int Smallest(){}
struct vertex{
    int marbles; 
    bool child;
    vector<vertex*> son;
};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int cases = 3;
    int n,v,m,d,children,k;
    while(cases--){
        cin>>n;
        if(n==0){break;}
        vertex array_ver[n];
        for(int i = 0 ; i<n;i++){
            cin>>v>>m>>d;
            array_ver[v].marbles = m;
            cout<<"Marbles from v : "<<array_ver[v].marbles<<endl;
            for(int j = 0 ; j<d;j++){
                cin>>k;
                array_ver[v].son.push_back(&array_ver[k]);
            }
        }
        Smallest();
    }
}