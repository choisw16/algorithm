#include <iostream>

using namespace std;

int main() {
    int page;
    int drop;
    int droppage[3];
    while(1){
        cin>>page;

        if(page==0){
            break;
        }

        cin>>drop;

        if(drop%2==0){
            droppage[0]=drop-1;
            droppage[1]=page-drop+1;
            droppage[2]=page-drop+2;
            if(droppage[0]<droppage[1] && droppage[0]<droppage[2]){
                if(droppage[1]<droppage[2]){
                    cout<<droppage[0]<<" "<<droppage[1]<<" "<<droppage[2]<<endl;
                }
                else{
                    cout<<droppage[0]<<" "<<droppage[2]<<" "<<droppage[1]<<endl;
                }
            }
            else if(droppage[1]<droppage[0] && droppage[1]<droppage[2]){
                if(droppage[0]<droppage[2]){
                    cout<<droppage[1]<<" "<<droppage[0]<<" "<<droppage[2]<<endl;
                }
                else{
                    cout<<droppage[1]<<" "<<droppage[2]<<" "<<droppage[0]<<endl;
                }
            }
            else if(droppage[2]<droppage[0] && droppage[2]<droppage[1]){
                if(droppage[0]<droppage[1]){
                    cout<<droppage[2]<<" "<<droppage[0]<<" "<<droppage[1]<<endl;
                }
                else{
                    cout<<droppage[2]<<" "<<droppage[1]<<" "<<droppage[0]<<endl;
                }
            }
        }
        else if(drop%2==1){
            droppage[0]=drop+1;
            droppage[1]=page-drop;
            droppage[2]=page-drop+1;
            if(droppage[0]<droppage[1] && droppage[0]<droppage[2]){
                if(droppage[1]<droppage[2]){
                    cout<<droppage[0]<<" "<<droppage[1]<<" "<<droppage[2]<<endl;
                }
                else{
                    cout<<droppage[0]<<" "<<droppage[2]<<" "<<droppage[1]<<endl;
                }
            }
            else if(droppage[1]<droppage[0] && droppage[1]<droppage[2]){
                if(droppage[0]<droppage[2]){
                    cout<<droppage[1]<<" "<<droppage[0]<<" "<<droppage[2]<<endl;
                }
                else{
                    cout<<droppage[1]<<" "<<droppage[2]<<" "<<droppage[0]<<endl;
                }
            }
            else if(droppage[2]<droppage[0] && droppage[2]<droppage[1]){
                if(droppage[0]<droppage[1]){
                    cout<<droppage[2]<<" "<<droppage[0]<<" "<<droppage[1]<<endl;
                }
                else{
                    cout<<droppage[2]<<" "<<droppage[1]<<" "<<droppage[0]<<endl;
                }
            }
        }

    }
    return 0;
}
