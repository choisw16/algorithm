#include <iostream>

using namespace std;

char colorArr[100][100];
bool visited[100][100];
int n;

bool dfs(int x, int y, char color){
    if(x<0 || x>=n || y<0 || y>=n){
        return false;
    }
    if(visited[x][y]==false && colorArr[x][y]==color){
        visited[x][y]=true;
        dfs(x-1,y,color);
        dfs(x+1,y,color);
        dfs(x,y-1,color);
        dfs(x,y+1,color);
        return true;
    }
    return false;
}

int main() {

    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            char color;
            cin>>color;
            colorArr[i][j]=color;
        }

    }

    int result1=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(dfs(i,j,colorArr[i][j])){
                result1+=1;
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            visited[i][j]=false;
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(colorArr[i][j]=='R'){
                colorArr[i][j]='G';
            }
        }
    }

    int result2=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(dfs(i,j,colorArr[i][j])){
                result2+=1;
            }
        }
    }

    cout<<result1<<" "<<result2<<endl;

    return 0;
}
