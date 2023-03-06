#include <iostream>

//5
//1 1 1 1 1 1 1 1 1 1
//1 2 3 4 5 1 2 3 4 5
//3 2 2 1 5 1 2 2 2 2
//1 2 3 4 5 1 2 3 4 5
//1 2 3 4 5 1 2 3 4 5

using namespace std;

int main() {

    int arr[10];
    int n;
    int check=0;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<10;j++){
            int temp;
            cin>>temp;
            arr[j]=temp;
            if(arr[j]==j%5+1){
                check++;
            }
        }
        if(check==10){
            cout<<i+1<<endl;
        }
        check=0;
    }

    return 0;
}
