#include <iostream>

using namespace std;

int main() {
    int answer=0;
    int cmp=1000;//잔돈

    int n;
    cin>>n;

    while(cmp!=n){
        if(cmp-500>=n){
            cmp-=500;
            answer+=1;
        }
        else if(cmp-100>=n){
            cmp-=100;
            answer+=1;
        }
        else if(cmp-50>=n){
            cmp-=50;
            answer+=1;
        }
        else if(cmp-10>=n){
            cmp-=10;
            answer+=1;
        }
        else if(cmp-5>=n){
            cmp-=5;
            answer+=1;
        }
        else if(cmp-1>=n){
            cmp-=1;
            answer+=1;
        }
    }

    cout<<answer<<endl;

    return 0;
}
