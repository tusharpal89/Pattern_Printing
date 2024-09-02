#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 7; 
    for(int i=0;i<=n-1;++i){
        for(int j=0;j<=n-1;++j){
            if(i==0 || j==n/2){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
         
        }
        cout<<" ";
        cout<<" ";
           for(int j=0;j<=n-1;++j){
            if((j==0 || j==n-1)&& i!=n-1 || i==n-1 && j!=0 && j!=n-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<" ";
        cout<<" ";
             for(int j=0;j<=n-1;++j){
            if(i==0 && j!=0 || i==n-1 && j!=n-1 || j==0 && i>0 && i<n/2 || j==n-1 && i>n/2 && i<n-1 || i==n/2 && j>0 && j<n-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
         cout<<" ";
         cout<<" ";
        for(int j=0;j<=n-1;++j){
            if(j==0 || j==n-1 || i==n/2){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
         cout<<" ";
         cout<<" ";
         for(int j=0;j<=n-1;++j){
            if(i==0 && j>0 && j<n-1 || j==0 && i>0 || j==n-1 && i>0 || i==n/2){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
         cout<<" ";
         cout<<" ";
           for(int j=0;j<=n-1;++j){
            if(j==0 || i-j==n/2 || i==n/2 && j<n/2 || i==0 && j<n/2 || j==n/2 && i>0 && i<n/2){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
         cout<<" ";
          cout<<" ";
           cout<<" ";
           cout<<" ";
            for(int j=0;j<=n-1;++j){
            if(j==0 || (i==0 || i==n/2)&& j!=n-1 || j==n-1 && i>0 && i<n/2){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<" ";
        cout<<" ";
         for(int j=0;j<=n-1;++j){
            if(i==0 && j>0 && j<n-1 || j==0 && i>0 || j==n-1 && i>0 || i==n/2){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<" ";
        cout<<" ";
         for(int j=0;j<=n-1;++j){
            if(j==0 || i==n-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
        
    }
        
    

