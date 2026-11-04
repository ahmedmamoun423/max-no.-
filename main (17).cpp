#include <iostream>
using namespace std;
int main(){
    int x,y,z,h;
    char w;
    cout<<"please enter the value of x:"<<endl;
    cin>>x;
    cout<<"please enter the value of y:"<<endl;
    cin>>y;
    cout<<"please enter the value of z:"<<endl;
    cin>>z;
    if(x>=y) {
        if(x>z){
            h=x;
            w='x';}
            else{
            h=z;
            w='z';}
        
    } else{
    if(y>=z){
        h=y;
            w='y';
        }else{h=z;
            w='z';
        }
    }
        
cout<<h<<":"<<w<<endl;
}
