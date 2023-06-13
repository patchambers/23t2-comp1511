// Demonstrates different 1D while loop outputs for tutorial 3 part 1
// Patrick Chambers (z5264081), 24/9/22


#include <stdio.h>


void a(void) {
    int i = 5;
    while (i > 0) {
        printf("%d\n", i);
        i--;
    }
}


void b(void) {
    int i = 1;
    while (i < 32) {
        printf("%d\n", i);
        i = i + i;
    }
}


void c(void) {
    int i = 0;
    while (i < 32) {
        printf("%d\n", i);
        i = i + 2;
    }
}


void d(void) {
    int i = 5;
    while (i >= 0) {
        printf("%d\n", i);
        i--;
    }
}


void e() {
    int i = 0;
    int keep_going = 1;
    while (keep_going == 1) {
        if (i > 3) {
            keep_going = 0;
        }
        i++;
    }
    printf("%d\n", i);
}


void f(void) {
    int i;
    while (i > 0) {
        printf("%d\n", i);
        i--;
    }

}


void g(void) {
    int i = 0;
    int max = 32;
    while (i < max) {
        printf("%d\n", i);
        max = max + 2;
    }

}


void h() {
    int i = 0;
    int keep_going = 0;
    while (keep_going == 1) {
        if (i > 3) {
            keep_going = 0;
        }
        i++;
    }
    printf("%d\n", i);
}


int main(void) {

    printf("Output A: \n");
    a();
    printf("\n\n");

    printf("Output B: \n");
    b();
    printf("\n\n");

    printf("Output C: \n");
    c();
    printf("\n\n");

    printf("Output D: \n");
    d();
    printf("\n\n");

    printf("Output E: \n");
    e();
    printf("\n\n");

    //printf("Output F: \n");
    //f();
    //printf("\n\n");

    //printf("Output G: \n");
    //g();
    //printf("\n\n");

    printf("Output H: \n");
    h();
    printf("\n\n");

    return 0;
}
