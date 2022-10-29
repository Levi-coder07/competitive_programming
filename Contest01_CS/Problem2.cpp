#include <iostream>
using namespace std;
int main(){
    string word = "";
    string letters[6] = {"BFPV","CGJKQSXZ","DT","L","MN","R"};
    while(cin>>word){
        int control=0;
        for(int i = 0;i<word.size();i++){
            for(int j = 0;j<6;j++){
                if(letters[j].find(word[i])!=std::string::npos){    
                    if(control!=j+1){
                        cout<<j+1;
                        control = j+1;
                        break;
                    }else{
                        break;
                    }
                }
                if(j==5){
                    control = 0;
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
