//linear search

#include<iostream>
using namespace std;
#define maxSize 100


int linearSearch(int *a, int n, int x){

for(int i = 0; i<n; i++){
    if(a[i] == x){
        return i;
    }
}
return -1;


}

int main(){

int n,arr[maxSize];
cout<<"how many numbers: ";
cin>>n;
cout<<"Enter value: ";
for(int i = 0; i<n; i++){
    cin>>arr[i];
}
int s;

cout<<"What number to search: " ;
cin>>s;

int result = linearSearch(arr,n,s);

if(result == -1 ) cout<<"Number is not found in array";
else{
    cout<<s<<" is found in "<<result<<" index"<<endl;
}

}
