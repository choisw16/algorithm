#include <iostream>

using namespace std;

int inTime[3];
int outTime[3];
int answer[3];

int main() {

    for(int k=0;k<3;k++) {

        for(int i=0;i<3;i++){
            cin>>inTime[i];
        }
        for(int i=0;i<3;i++){
            cin>>outTime[i];
        }

        for (int i = 2; i >= 0; i--) {
            if (outTime[i] < inTime[i]) {
                outTime[i] += 60;
                outTime[i - 1] -= 1;
                answer[i] = outTime[i] - inTime[i];
            } else {
                answer[i] = outTime[i] - inTime[i];
            }
        }

        for (int i = 0; i < 3; i++) {
            cout << answer[i] << " ";
        }
        cout << endl;
    }


    return 0;
}
