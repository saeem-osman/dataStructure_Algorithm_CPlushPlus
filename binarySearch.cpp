//binary search

#include<iostream>
using namespace std;
#define maxSize 100


int linearSearch(int *a, int n, int x){

int left = 0;
int right = n -1;
while(left<=right){
    int mid = (left+right)/2;
    if(a[mid] == x){
        return mid;
    }
    if(a[mid] < x){
        left = mid +1;
    }
    if(a[mid]> x){
        right = right -1;
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
