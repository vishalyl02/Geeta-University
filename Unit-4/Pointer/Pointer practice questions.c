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
    int arr[] = {1, 2, 3, 4, 5};
    int *p = arr;

    printf("%d %d\n", *p, *(p + 2));
    return 0;
}





#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30};
    int *p = arr;

    printf("%d %d\n", *(p + 1), *(p + 2));
    return 0;
}




#include <stdio.h>

int main() {
    int *p = NULL;

    printf("%p\n", p);
    return 0;
}


#include <stdio.h>

int main() {
    int x = 10;
    int *p = &x;
    int **q = &p;

    printf("%d\n", **q);
    return 0;
}
