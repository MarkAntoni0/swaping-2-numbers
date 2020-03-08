#include <stdio.h>

void swap(int *p1, int *p2){
    int t = *p1;
    *p1 = *p2;
    *p2 = t;
    printf("x: %d, y:%d \n", *p1,*p2);
}

int main(int argc, const char * argv[]) {
    printf("***IRONHIDE***\n");
    int x=20;
    int y=30;
    printf("x: %d, y:%d \n", x,y);
    swap(&x, &y);
    
    
    
    return 0;
}
