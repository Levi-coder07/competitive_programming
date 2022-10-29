#include <iostream>
using namespace std;
int main(){
    int cases; 
    cin>>cases;
    for ( int i = 1 ;i<=cases;i++){
        string pages[10];
        int numbers[10];
        int mayor=0;
        for(int j = 0;j<10;j++ ){
            cin>>pages[j]>>numbers[j];
            if(mayor<numbers[j]){
                mayor= numbers[j];
            }
        }
        cout<<"Case #"<<i<<":"<<endl;
        for(int j= 0;j<10;j++){
            
            if(mayor==numbers[j]){
                cout<<pages[j]<<endl;
            }
        } 
    }
    return 0;
}