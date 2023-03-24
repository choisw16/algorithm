#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    int t,n,m;
    int num; //중요도
    cin>>t;
    while(t--){
        queue<pair<int,int>> q;
        priority_queue<int> pq;
        cin>>n>>m;
        for(int i=0;i<n;i++){
            cin>>num;
            q.push({i,num});
            pq.push(num);
        }
        int count=0;
        while(!q.empty()){
            int idx = q.front().first;
            int priority = q.front().second;
            q.pop();
            if(pq.top()==priority){
                count++;
                pq.pop();
                if(idx==m){
                    cout<<count<<"\n";
                    break;
                }
            }
            else{
                q.push({idx, priority});
            }
        }
    }

    return 0;
}
