#include <iostream>
#include <queue>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    int temp;
    cin>>n;

    queue<int> q;

    for(int i=1;i<=n;i++){
        q.push(i);
    }

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
        if(!q.empty()){
            temp=q.front();
            q.pop();
            q.push(temp);
        }
    }
    cout<<"\n";

    return 0;
}
