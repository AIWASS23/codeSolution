#include <stdio.h>

int main() {

    int n; 
    while(scanf("%d",&n),n) {
        int a[n];

        for(int i = 0; i < n; i++) {
            scanf("%d",&a[i]);
        }
        int t = 10;
        for(int i = 1; i < n; i++) {
            if(a[i] - a[i - 1] <= 10) {
                t+= (a[i] - a[i - 1]); 
            } else {
                t += 10;
            } 
        }
        printf("%d\n",t);
    }
    return 0;
}
