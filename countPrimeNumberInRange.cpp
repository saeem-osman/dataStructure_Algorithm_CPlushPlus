#include <iostream>
#include<math.h>
using namespace std;

int isPrime(int a){
    if(a < 2) return 0;
    int flag = 1;
    for(int i = 2; i<=(int)sqrt(a); i++){
        if(a%i == 0){
            flag = 0;
            break;
        }

    }
    return flag;

}

int main(){
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    int sum = 0;
    for(int i = 2; i<a; i++){
        sum = sum + isPrime(i);
    }
    cout<<"Result is: "<<sum<<endl;

}
