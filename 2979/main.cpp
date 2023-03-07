#include <iostream>

using namespace std;

int arr[202];

int main() {
    int a,b,c;
    int ans=0;
    cin>>a>>b>>c;

    for(int i=0;i<202;i++){
        arr[i]=0;
    }

    for(int i=0;i<3;i++){
        int temp1,temp2;
        cin>>temp1>>temp2;
        for(int j=temp1*2;j<=temp2*2;j++){
            arr[j]=arr[j]+1;
        }
    }

    for(int i=1;i<202;i=(i+2)){
        if(arr[i]==3){
            ans=ans+(c*3);
        }
        else if(arr[i]==2){
            ans=ans+(b*2);
        }
        else if(arr[i]==1){
            ans=ans+a;
        }
    }

    cout<<ans<<endl;

    return 0;
}
