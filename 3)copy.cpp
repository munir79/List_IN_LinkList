#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[5]={10,20,30,40};
    list <int>MyList(a,a+5);
    for(auto it=MyList.begin(); it!=MyList.end();it++){
        cout<<*it<<" ";
    }
}