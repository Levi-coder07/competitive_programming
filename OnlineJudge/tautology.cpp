#include <iostream>
using namespace std;
bool check(string text){
    for(int i = 0;i<text.length();i++){
        
    }
}

int main(){
    string text;
    while(cin>>text){
        if(text=="0"){break;}
        cout<<text;
        bool tau;
        tau = check(text);
        if(tau){
            cout<<"tautology"<<endl;

        }
        else{
            cout<<"not"<<endl;
        }
    }

    return 0;
}