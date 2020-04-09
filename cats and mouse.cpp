#include <iostream>
using namespace std;
int main(){
    int n;
    int x,y,z;
    cin>>n;
    for(int i=0;i<n;i++){
    cin>>x>>y>>z;
    int p=z-x;
    int q=z-y;
    if(p<0){
        p=-p;
    
    }
    if(q<0){
        q=-q;
    }
    if(p<q){
        cout<<"Cat A"<<endl;
    }
    if(p>q){
        cout<<"Cat B"<<endl;
    }
    if(p==q) {
        cout<<"Mouse C"<<endl;
    }
    }
}




