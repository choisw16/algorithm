#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    queue<char> q;
    stack<int> st;

    int n;
    int num;
    int maxValue=0;
    bool succ=true;

    cin>>n;

    while(n--){
        cin>>num;
        if(st.empty()){
            for(int i=0;i<num;i++){
                st.push(i+1);
                q.push('+');
                maxValue=st.top();
            }
            st.pop();
            q.push('-');
        }else if(st.top()>num){
            cout<<"NO\n";
            succ=false;
        }else{
            int a=num-maxValue;
            for(int i=0;i<a;i++){
                st.push(maxValue+1);
                maxValue=st.top();
                q.push('+');
            }
            st.pop();
            q.push('-');
        }
    }

    if(succ== true){
        while(!q.empty()){
            cout<<q.front()<<"\n";
            q.pop();
        }
    }

    return 0;
}
