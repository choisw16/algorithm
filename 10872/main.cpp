#include <iostream>

using namespace std;

int factorial(int n){
    if(n==1 || n==0){
        return 1;
    }
    else{
        return factorial(n-1)*n;
    }
}

int main() {
    int n;
    cin>>n;
    cout<<factorial(n)<<"\n";

    return 0;
}
