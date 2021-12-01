#include<bits/stdc++.h>
using namespace std;
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
    cout<<a<<b;
}
void increament(int &a){
    a+=5; 
    cout<<a<<endl;
}
int main(){
    int a=3;
    // int *p;
    // p=&a;
    int b=4;
    // swap(&a,&b);
    cout<<a<<" "<<b<<endl;
    increament(a);
    cout<<a<<"o";
    return 0;
}