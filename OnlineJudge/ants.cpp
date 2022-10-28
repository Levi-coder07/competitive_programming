#include <iostream>
using namespace std;
int main(){
    int cases,size,ants;
    cin>>cases;
    while(cases--){
        cin>>size>>ants;
        int pos[ants],min,max1 = 0;
        for(int j = 0;j<ants;j++){
            cin>>pos[j];
        }
        for(int j = 0;j<ants;j++){
            if(size-pos[j]>pos[j]){
                min = max(pos[j],min);
                max1 = max(size-pos[j],max1);
                cout<<"Maximo : "<<max1<<endl;
            }else{
                min = max(size-pos[j],min);
                max1 = max(pos[j],max1);
                cout<<"Maximo : "<<max1<<endl;
            }
            
        }
        cout<<min<<" "<<max1<<endl;
        
    }
}