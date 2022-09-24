#include <iostream>
using namespace std;
int main(){
    int *array;
    int t,n,a;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>n;
        int mayor = 1;
        for(int j=0;j<n;j++){
            cin>>a;
            if(mayor<a){
                mayor = a;
            }
        }
        cout << "Case " << i << ": " << mayor << endl;
    }
    return 0;
}
