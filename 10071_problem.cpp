#include <iostream>
using namespace std;
int displacement(int a,int b){
    return a*2*b;
}
int main(){
    int a , b;
    
    while(cin>>a>>b){
        
        cout<<displacement(a,b)<<'\n';
    }
    
    return 0;
}
