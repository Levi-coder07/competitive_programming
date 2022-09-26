#include <iostream>
#include <map>
#include <set>
using namespace std;

int main(){
    int n;
    int maxino;
    int course;
    int *Total;
    while(cin>>n){
        if(n==0){break;}
        else{
            map<set<int, greater<int>>,int> uni;
            set<int,greater<int> > courses;
            map<set<int, greater<int>>,int>::iterator it;
            set<int,greater<int> >::iterator itr;
            for(int i = 0;i<n;i++){
                for(int i = 0 ;i<5;i++){
                    cin>>course;
                    courses.insert(course);
                    
                }
            }
            for(it=uni.begin();it!=uni.end();++it){
                    cout<<it->first<<endl;      
                
            }

        }
    }
        
        cout<<endl;
    

      
}
