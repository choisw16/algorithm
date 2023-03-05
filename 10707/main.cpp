#include <iostream>

using namespace std;

int main() {
    int A,B,C,D,P;
    int result1;
    int result2;

    cin>>A>>B>>C>>D>>P;

    result1=A*P;
    if(C<P){
        result2 = B+(P-C)*D;
    }
    else{
        result2 = B;
    }

    if(result1>result2){
        cout<<result2<<endl;
    }
    else{
        cout<<result1<<endl;
    }


    return 0;
}
