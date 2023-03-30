#include <iostream>

using namespace std;

int main() {
    int num;
    int sum=0;
    int min=101;
    bool check=false;
    for(int i=0;i<7;i++){
        cin>>num;
        if(num%2==1){
            check=true;
            sum+=num;
            if(min>num){
                min=num;
            }
        }
    }

    if(check == false){
        cout<<"-1\n";
    }
    else{
        cout<<sum<<" "<<min<<"\n";
    }

    return 0;
}
