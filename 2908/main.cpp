#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<int> v){
    for(int i=0;i<3;i++){
        cout<<v[2-i];
    }
    cout<<"\n";
}

int main() {
    int num;
    vector<int> a;
    vector<int> b;
    cin>>num;
    a.push_back(num/100);
    a.push_back((num-(num/100)*100)/10);
    a.push_back(num%10);
    cin>>num;
    b.push_back(num/100);
    b.push_back((num-(num/100)*100)/10);
    b.push_back(num%10);

    if(a[2]>b[2]){
        printVector(a);
    }
    else if(a[2]==b[2]){
        if(a[1]>b[1]){
            printVector(a);
        }
        else if(a[1]==b[1]){
            if(a[0]>b[0]){
                printVector(a);
            }
            else{
                printVector(b);
            }
        }
        else{
            printVector(b);
        }
    }
    else{
        printVector(b);
    }

    return 0;
}
