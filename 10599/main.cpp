#include <iostream>

using namespace std;

int main() {
    int a,b,c,d;
    a=1;
    b=1;
    c=1;
    d=1;
    while(1){
        cin>>a>>b>>c>>d;
        if(a==0 && b==0 && c==0 && d==0){
            break;
        }
        cout<<c-b<<" "<<d-a<<endl;
    }
    return 0;
}
