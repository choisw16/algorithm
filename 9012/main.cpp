#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool isRight(string s){
    int length = s.length();
    stack<char> st;
    for(int i=0;i<length;i++){
        if(s[i]=='('){
            st.push(s[i]);
        }
        else{
            if(st.empty()){
                return false;
            }
            else if(!st.empty()){
                st.pop();
            }
        }
    }
    return st.empty();
}

int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        if(isRight(s)){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }

    return 0;
}