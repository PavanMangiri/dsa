#include <iostream>
using namespace std;

int fib(int x){
    if(x==0) return 0;
    if(x==1 || x == 2) return 1;
    int prev = 1;
    int curr = 1;
    int ref = 0;
    for(int i=3; i<=x ; i++){
        ref = curr;
        curr = prev + curr;
        prev = ref; 
    }
    return curr;
}

int main(){
    int a;

    cout<<"Enter the number: ";
    cin>>a;

    cout<<"Fibonacci sum: "<< fib(a) <<endl;
    return 0;
}