#include<bits/stdc++.h>
using namespace std;
int main(){
      list<int>mylist={1,2,3};
      list<int>mylist2(mylist);
      for(auto it=mylist2.begin();it!=mylist2.end();it++){
        cout<<*it<<" ";
      }
    //iterative for loop 
    cout<<endl;
    for(int val:mylist2){
        cout<<val<<" ";
    }
}