#include<iostream>
using namespace std;
int main(){

   int n=NULL;
   int max = NULL;
   int a[1000];  //if user need 10 array size then 990 slots will be wasted
   cout<<"Enter Size for your Array "<<endl;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++){
    cin>>a[i];
   }

   for(int i=0;i<n;i++){
    if(a[i] > max){
        max = a[i];
    }
   }

   cout<<max;
return 0;
}

