#include<bits/stdc++.h>
#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
int n,d;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}

    int count=0;
for(int i=0;i<n;i++){

    if(a[i]>count){
        cout<<count;
    }
    else{
            int c=0;
        for(int j=0;j<=i;j++){
            if(a[j]==count){
                c=1;
                break;
            }
        }
        if(c==1){
            count++;
            i--;
        }
        else{
            cout<<count;
        }

    }
}


}
