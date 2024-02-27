#include<bits/stdc++.h>
using namespace std;

int main(){
list<int>myList(10,5);
for (auto it=myList.begin();it!=myList.end();it++){
     cout<<*it<<endl;
}
}
//2 copy 
#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int>list1={1,2,3,4};
    list<int>MyList(list1);
    for(auto it=MyList.begin();it!=MyList.end();it++){
        cout<<*it<<"" ;
    }
}



//3 copy from array to List
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[5]={10,20,30,40};
    list <int>MyList(a,a+5);
    for(auto it=MyList.begin(); it!=MyList.end();it++){
        cout<<*it<<" ";
    }
}