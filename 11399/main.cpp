#include <iostream>

using namespace std;

int arr[1000];

int main() {
    int n;
    int answer =0;

    cin>>n;

    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        arr[i]=num;
    }

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]) {
                int temp;
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=n;j>i;j--) {
            answer += arr[i];
        }
    }

    cout<<answer<<endl;

    return 0;
}
