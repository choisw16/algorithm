#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, temp;
    float max = 0;
    float sum=0;
    int arr[1001];
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>temp;
        arr[i]=temp;
        if(max<temp){
            max = temp;
        }
    }

    for(int i=0;i<n;i++){
        sum+=arr[i]/max*100;
    }

    cout<<sum/n<<"\n";

    return 0;
}
