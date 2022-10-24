#include <iostream>
using namespace std;
int buildseg(int *array,int l , int r ){
    if(l==r){
        return;
    }
    int mid = l+r;
    buildseg(array,l,mid);
    buildseg(array,mid+1,r);
}
int main(){
    int Test,n;
    cin>>Test;
    for(int i = 0;i<Test;i++){
        cin>>n;
        while(n--){

        }
    }
}
