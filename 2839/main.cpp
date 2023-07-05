#include <iostream>
using namespace std;

int main() {
    int n;
    int cntOf5 = 0;
    int ans = 0;

    cin>>n;
    for(int i=n/5;i>=0;i--){
        cntOf5 = n - (5 * i);
        if(cntOf5 % 3 == 0){
            ans = i+(cntOf5 / 3);
            cout<<ans<<"\n";
            return 0;
        }
    }

    cout<<-1<<"\n";

    return 0;
}
