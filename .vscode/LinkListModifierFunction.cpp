#include<bits/stdc++.h>
using namespace std;
int main(){


list <int> myList={10,20,30};
list<int> newList;
newList=myList;
for(int val: newList){
    cout<<val <<" ";
}
cout<<endl;
//1.pushBack and pushfront
myList.push_front(100);
for(int val : myList){
    cout<<val<<" ";
}

cout<<endl;

//2 pop_back and pop_front
myList.pop_front();
for(int val :myList){
    cout<<val<<" ";
}
}