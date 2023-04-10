#include <iostream>

using namespace std;

int main() {

    int n, temp;
    int sum=0;
    cin>>n;

    while(n--){
        cin>>temp;
        sum+=temp;
    }

    cout<<sum<<"\n";
    return 0;
}
