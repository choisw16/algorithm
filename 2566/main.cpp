#include <iostream>

using namespace std;

int main() {
    int num;
    int max=0;
    int a,b;
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cin>>num;
            if(max<num){
                max=num;
                a=i;
                b=j;
            }
        }
    }

    cout<<max<<"\n"<<a+1<<" "<<b+1<<"\n";

    return 0;
}
