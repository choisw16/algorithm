#include <iostream>
#include <queue>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    queue<int> q;
    int n;
    string cmd;
    cin>>n;
    while(n--){
        cin>>cmd;
        if(cmd=="push"){
            int num;
            cin>>num;
            q.push(num);
        }
        else if(cmd=="pop"){
            if(q.empty()){
                cout<<"-1\n";
            }
            else{
                cout<<q.front()<<"\n";
                q.pop();
            }
        }
        else if(cmd=="size"){
            cout<<q.size()<<"\n";
        }
        else if(cmd=="empty"){
            if(q.empty()){
                cout<<"1\n";
            }
            else{
                cout<<"0\n";
            }
        }
        else if(cmd=="front"){
            if(q.empty()){
                cout<<"-1\n";
            }
            else{
                cout<<q.front()<<"\n";
            }
        }
        else if(cmd=="back"){
            if(q.empty()){
                cout<<"-1\n";
            }
            else{
                cout<<q.back()<<"\n";
            }
        }
    }


    return 0;
}
