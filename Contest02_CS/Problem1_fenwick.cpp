#include <iostream>
#include <vector>
using namespace std;
long long BITree[5000001];
long long n , operation;
int getSum(long long *BITree, int index)
{
    long long sum = 0; 
    index = index + 1;

    while (index>0)
    {    
        sum += BITree[index];

        index -= index & (-index);
    }
    return sum;
}

void updateBIT(long long *BITree, long long n, long long index, long long val)
{
    
    index = index + 1;
  
    
    while (index <= n)
    {
    
        BITree[index] += val;
  
    
        index += index & (-index);
    }
}
  

  
  
int main()
{
    //ios_base::sync_with_stdio(false);
    long long add,index;
    char signo;
    scanf( "%lld%lld\n", &n, &operation );
    int k = 0;
    for (int i=1; i<=n+1; i++){
        BITree[i] = 0;
    }
    for(int i = 0;i<operation;i++){

        scanf("%c", &signo );
        if(signo == '+'){
            scanf( "%lld%lld\n", &index, &add );
            updateBIT(BITree,n,index,add);
        }else{
            scanf("%lld\n", &index );
            printf("%lld\n", getSum(BITree, index-1));
            }
        }
    

    return 0;
}