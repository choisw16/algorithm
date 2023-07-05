#include <iostream>
using namespace std;

int l, p, v;
int result=0;
int i=1;

int main() {
    cin>>l>>p>>v;
    while((l!=0)||(p!=0)||(v!=0)){
        result = l*(v/p) + min(l, v%p);
        cout<<"Case "<<i<<": "<<result<<"\n";
        i++;
        cin>>l>>p>>v;
    }
    return 0;
}
