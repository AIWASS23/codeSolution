#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int first;
    int second;
    int distance;
    int vel;
    float time;

    scanf("%hd%hd%hd",&first,&distance,&vel);
    time = distance * 1.0 / vel;

    scanf("%d",&second);
    scanf("%d%d",&distance,&vel);
    printf("%d\n", ((distance * 1.0 / vel) < time) ? second : first);
        
    return 0;
}