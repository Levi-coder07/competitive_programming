#include <iostream>
#include <set>
using namespace std;
int main(){
    int size,absolute ; 
    while(cin>>size){
        int * array = new int[size];
    
        set<int, greater <int >> valores;
        for(int i = 0 ;i<size;i++){
            cin>>array[i];
        }
        for(int j= 0;j<size-1;j++){
                absolute = abs(array[j] - array[j+1]);
                if(absolute!=0){valores.insert(absolute);}
            }
        
        if(valores.size()==size-1&&*(valores.begin())==size-1){
                cout<<"Jolly"<<endl;

        }else{
                cout<<"Not jolly"<<endl;
        }
    }
    

    return 0;
}