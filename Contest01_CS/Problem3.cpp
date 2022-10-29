#include <iostream>
using namespace std;
bool binarySearch(int arr[], int l, int r, int x)
{
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (arr[m] == x){
            return true;}
        if (arr[m] < x){
            l = m + 1;}
        else{
            r = m - 1;
        }
    }
    return false;
}
int main(){
    int N,M;
    int total = 0;
    int x;
    while(cin>>N>>M){
        if(N==0&&M==0){break;}
        else{
            total = 0;
            int CD1[N];
            for(int i =0;i<N;i++){
                cin>>CD1[i];
            }
            for(int i =0;i<M;i++){
                cin>>x;
                if((binarySearch(CD1,0,N-1,x))){
                    total = total + 1 ; 
                }
            }
        }
        cout<<total;
        cout<<endl;
    }

    return 0;   
}
