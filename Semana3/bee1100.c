#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 8

int dx[] = {-2, -1, 1, 2, 2, 1, -1, -2};
int dy[] = {1, 2, 2, 1, -1, -2, -2, -1};

int BFS(const char *from, const char *to){
    char q[3 * N * N][3];
    int front = 0, rear = 0;
    char dist[N * N][N * N];
    memset(dist, -1, sizeof(dist));

    strcpy(q[rear++], from);
    dist[from[0] - 'a'][from[1] - '1'] = 0;

    while(front != rear){
        char curr[3];
        strcpy(curr, q[front++]);
        if(strcmp(curr, to) == 0) 
            return dist[curr[0] - 'a'][curr[1] - '1'];
        int x = curr[0] - 'a', y = curr[1] - '1';
        for(int i = 0; i < N; ++i){
            int newX = x + dx[i], newY = y + dy[i];
            if(newX >= 0 && newX < N && newY >= 0 && newY < N){
                char next[3];
                next[0] = 'a' + newX;
                next[1] = '1' + newY;
                next[2] = '\0';
                if(dist[next[0] - 'a'][next[1] - '1'] == -1){
                    dist[next[0] - 'a'][next[1] - '1'] = dist[curr[0] - 'a'][curr[1] - '1'] + 1;
                    strcpy(q[rear++], next);
                }
            }
        }
    }
    return -1;
}

int main(){
    char from[3], to[3];
    while(scanf("%s %s", from, to) != EOF)
        printf("To get from %s to %s takes %d knight moves.\n", from, to, BFS(from, to));
    return 0;
}
