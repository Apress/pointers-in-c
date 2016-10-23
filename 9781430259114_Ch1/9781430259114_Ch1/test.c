#include<stdio.h>
#include<malloc.h>
int glb_uninit;         /* Part of BSS Segment -- global uninitialized variable, at runtime it is inizialzed to zero */
int glb_init = 10;      /* Part of DATA Segment -- global initialized variable */
void  foo(void)
{
static int num = 0;       /* stack frame count */
int autovar;        /* automatic variable/Local variable */
int *ptr_foo = (int*)malloc(sizeof(int));
if (++num == 4)           /* Creating four stack frames */
    return;
printf("Stack frame number %d: address of autovar: %p\n", num, & autovar);
printf("Address of heap allocated inside foo() %p\n",ptr_foo);
foo();                    /* function call */
}

int main()
{
char *p, *b, *nb;
int *ptr_main = (int*)malloc(sizeof(int));
printf("Text Segment:\n");
printf("Address of main: %p\n", main);
printf("Address of afunc: %p\n",foo);
printf("Stack Locations:\n");
foo();
printf("Data Segment:\n");
printf("Address of glb_init: %p\n", & glb_init);
printf("BSS Segment:\n");
printf("Address of glb_uninit: %p\n", & glb_uninit);
printf("Heap Segment:\n");
printf("Address of heap allocated inside main() %p\n",ptr_main);
return 0;
}
