#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;
int move(string directions[],string record){
    if(record==directions[0]){
            return -1;
    }else if (record==directions[1]){
            return 1 ;
    }else{
             return 0;
    }
   
}
    
int main(){
    int cases,n;
    string directions[] = {"LEFT","RIGHT"};
    cin>>cases;
    for ( int i = 0 ;i<cases;i++){
        cin>>n;
        string *record = new string[n];
        int index= 0;
        int current_pos=0;
        for(int j = 0;j<n;j++ ){
            cin>>std::ws;
            getline(cin,record[j]);
            current_pos += move(directions,record[j]);
            if(move(directions,record[j])==0){
                string value = record[j].substr(record[j].find_first_of("0123456789"));
                index = stoi(value)-1;
                current_pos += move(directions,record[index]);
                record[j] = record[index];
            }
        }
        cout<<current_pos<<endl;
        delete [] record;
    }
    
    return 0;
}