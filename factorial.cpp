#include <iostream>
using namespace std;

int fact(int x){
    if(x==0 || x==1) return 1;
    int result = 1;
    while(x>0){
        result = result * (x);
        x--;
    }
    return result;
}


int main(){
    int a;
    cout<<"Enter the number: ";
    cin>>a;

    cout<<"Factorial: "<< fact(a) << endl;
    return 0;
}
