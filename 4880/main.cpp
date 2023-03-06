#include <iostream>

using namespace std;

int arr[3];

int main() {

    while(true){
        for(int i=0;i<3;i++){
            int temp;
            cin>>temp;
            arr[i]=temp;
        }

        if(arr[0]==0 && arr[1]==0 && arr[2]==0){
            break;
        }

        if((arr[1]-arr[0])==(arr[2]-arr[1])){
            cout<<"AP "<<arr[2]+(arr[2]-arr[1])<<endl;
        }
        else if((arr[1]/arr[0])==(arr[2]/arr[1])){
            cout<<"GP "<<arr[2]*(arr[2]/arr[1])<<endl;
        }

        for(int i=0;i<3;i++){
            arr[i]=0;
        }
    }

    return 0;
}
