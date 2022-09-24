#include <iostream>
using namespace std;
void relaOperator(int a,int b){
    if(a<b){
        cout<<"<";
    }else if(a>b){
        cout<<">";
    }else{
        cout<<"=";
    }
}
int main(){
    int a , b;
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a>>b;
        relaOperator(a,b);
        cout<<'\n';
    }
    return 0;
}
