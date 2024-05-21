#include <stdio.h>

int main(){    	
    int a = 0;
    int b = 0;
    int time;
    int index;

    scanf("%d", &time);

    for(int i = 0; i < time; i++){
        scanf("%d", &index);

        if(index == 1){
            a = 1 - a; 
        } else if(index == 2){
            a = 1 - a; 
            b = 1 - b; 
        }
    }

    printf("%d\n%d\n", a, b);

    return 0;
}
