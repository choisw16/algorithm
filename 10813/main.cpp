#include <iostream>

using namespace std;

int arr[101];

int main() {

    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        arr[i]=i;
    }

    for(int i=0;i<m;i++){
        int a,b;
        int temp;
        cin>>a>>b;
        temp=arr[a];
        arr[a]=arr[b];
        arr[b]=temp;
    }

    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}
