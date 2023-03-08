#include <iostream>

using namespace std;

int main() {
    int n;
    int ans;
    cin>>n;
    while(n--){
        int t;
        cin>>t;
        int i=0;
        while(1){
            if(i+(i*i)>t){
                cout<<i-1<<endl;
                break;
            }
            else{
               ans=i;
            }
            i++;
        }
    }
    return 0;
}
