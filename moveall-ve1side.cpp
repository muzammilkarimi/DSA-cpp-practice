#include<bits/stdc++.h>
using namespace std;
int main(){
    int s=0,e=0;
    for(int i=0; i<n; i++){
        if(arr[i]>0){
            e++;
        }
        else if(arr[i]<0){
            swap(arr[s],arr[e]);
            s++;
            e++;
        }

    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}