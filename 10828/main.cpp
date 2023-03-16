#include <iostream>
#include <stack>

using namespace std;

int main() {
    string cmd;
    stack<int> st;
    int n;
    cin>>n;

    while(n--){
        cin>>cmd;
        if(cmd=="push"){
            int num;
            cin>>num;
            st.push(num);
        }
        else if(cmd=="pop"){
            if(st.empty()){
                cout<<"-1\n";
            }
            else{
                cout<<st.top()<<"\n";
                st.pop();
            }
        }
        else if(cmd=="top"){
            if(st.empty()){
                cout<<"-1\n";
            }
            else{
                cout<<st.top()<<"\n";
            }
        }
        else if(cmd=="empty"){
            if(st.empty()){
                cout<<"1\n";
            }
            else{
                cout<<"0\n";
            }
        }
        else if(cmd=="size"){
            cout<<st.size()<<"\n";
        }
    }

    return 0;
}
