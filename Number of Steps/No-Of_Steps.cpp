#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int a[n],b[n];
int i;
for(i=0;i<n;i++){
    cin>>a[i];
}
for(i=0;i<n;i++){
    cin>>b[i];
}
int small =a[0];
for(i=1;i<n;i++){
    small=min(small,a[i]);
}
//cout<<small;
int c,count=0;
for(i=0;i<n;i++){
    if(a[i]!=small){
        c=a[i];

        while(small!=c){
                //c=a[i];
                if(c>small){
            c=c-b[i];
            count++;
                }
                else{
                    cout<<-1;
                    return 0;
                }


        }
    }
}
cout<<count;
}
