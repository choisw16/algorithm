#include <iostream>

using namespace std;

int main() {
    int answer=0;
    int arr1[50];
    int arr2[50];
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int value;
        cin>>value;
        arr1[i]=value;
    }
    for(int i=0;i<n;i++){
        int value;
        cin>>value;
        arr2[i]=value;
    }

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(arr1[i]>arr1[j]){
                int temp = arr1[i];
                arr1[i]=arr1[j];
                arr1[j]=temp;
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(arr2[i]<arr2[j]){
                int temp = arr2[i];
                arr2[i]=arr2[j];
                arr2[j]=temp;
            }
        }
    }

    for(int i=0;i<n;i++){
        answer=answer+(arr1[i]*arr2[i]);
    }

    cout<<answer<<endl;

    return 0;
}
