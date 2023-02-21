#include <iostream>
#include <algorithm>

using namespace std;

int N;
int check[8];
int arr[8];
int test_arr[8];
int maxValue=0;
int cal();

void dfs(int cnt){
    if(cnt==N){
        maxValue = max(maxValue, cal());
        return;
    }
    for(int i=0;i<N;i++){
        if(check[i]==1){
            continue;
        }
        check[i]=1;
        test_arr[cnt]=arr[i];
        dfs(cnt+1);
        check[i]=0;
    }
}

int cal(){
    int temp=0;
    for(int i=0;i<N-1;i++){
        temp = temp + abs(test_arr[i]-test_arr[i+1]);
    }
    return temp;
}

int main() {
    cin>>N;
    for(int i=0;i<N;i++){
        int n;
        cin>>n;
        arr[i]=n;
    }
    for(int i=0;i<N;i++){
        check[i]=1;
        test_arr[0]=arr[i];
        dfs(1);
        check[i]=0;
    }

    cout<<maxValue<<endl;

    return 0;
}
