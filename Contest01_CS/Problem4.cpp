<<<<<<< HEAD
#include <iostream>
#include <map>
#include <set>

using namespace std;

int main(){
    int maximo,popularity,students,n,course;
    while(cin>>n){
        if(n==0){break;}
        else{
            map<set<int>,int> uni;
            //map<int*,int> uni;
            maximo = 0;
            for(int i = 0;i<n;i++){
                set<int> courses;
                
                for(int i = 0 ;i<5;i++){
                    cin>>course;
                    courses.insert(course);
                }
                uni[courses]++;
                
            }
            students = 0;
            map<set<int>,int> :: const_iterator it;
            for(it=uni.begin();it!=uni.end();++it)
            {
                if(it->second>maximo)
                {
                    maximo=it->second;
                }
            }
            for(it=uni.begin();it!=uni.end();++it)
            {
                if((it->second)==maximo)
                {
                    students = students + (it->second);
                }
            }
        }
        cout<<students<<endl;  
    }    
}
=======
#include <iostream>
#include <map>
#include <set>

using namespace std;

int main(){
    int maximo,popularity,students,n,course;
    while(cin>>n){
        if(n==0){break;}
        else{
            map<set<int>,int> uni;
            //map<int*,int> uni;
            maximo = 0;
            for(int i = 0;i<n;i++){
                set<int> courses;
                
                for(int i = 0 ;i<5;i++){
                    cin>>course;
                    courses.insert(course);
                }
                uni[courses]++;
                
            }
            students = 0;
            map<set<int>,int> :: const_iterator it;
            for(it=uni.begin();it!=uni.end();++it)
            {
                if(it->second>maximo)
                {
                    maximo=it->second;
                }
            }
            for(it=uni.begin();it!=uni.end();++it)
            {
                if((it->second)==maximo)
                {
                    students = students + (it->second);
                }
            }
        }
        cout<<students<<endl;  
    }    
}
>>>>>>> d727bba0f8cf575e91f3832b47ff0b6f6de79ee0
