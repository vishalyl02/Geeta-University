#include <stdio.h>

int main() {
    int a = 5;
    int *p = &a;
    *p = 10;
    
    printf("a = %d\n", a);
    return 0;
}




#include <stdio.h>

int main() {
    int x = 10;
    int *p = &x;
    *p = 20;
    printf("%d\n", x);
    return 0;
}



#include <stdio.h>

int main() {
    int num = 50;
    int *ptr = &num;
    printf("%p\n", ptr);
    return 0;
}


