#include<iostream>
using namespace std;

int main(){
    int i,n;
    cin>>n;
    long double a[n];
     long double count1=0,count2=0,count3=0,d1=1,d2=1,d3=1;
   for(i=0;i<n;i++){
       cin>>a[i];
   } 
    for(i=0;i<n;i++){
        if(a[i]>0){
            count1+=1; }  
    }
                 
    d1=count1/n;
        cout<<d1<<endl;
        
    for(i=0; i<n; i++){
        if(a[i]<0){
            count2+=1; 
            
        }
    }d2=count2/n;
    cout<<d2<<endl;
    
    
    for(i=0; i<n; i++){
        if(a[i]==0){
            count3+=1; }
            
        
    }d3=count3/n;
    cout<<d3<<endl;
    return 0;
}
