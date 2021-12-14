#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
struct STU {
    char ID[20];
    char Name[20];
    float math;
    float physic;
    float english;
};
int main()
{
    int n, i, j, k;
    float res;
    scanf("%d", &n);
    if (n > 10) {
        return 0;
    }
    struct STU* mySTU = (struct STU*)malloc(sizeof(struct STU) * n);   //动态内存分配关键 malloc
    struct STU* p = mySTU;
    for (i = 0; i < n; i++)
    {
        scanf("%s", &p->Name);
        scanf("%s", &p->ID);
        scanf("%f", &p->math);
        scanf("%f", &p->english);
        scanf("%f", &p->physic);
        *(p++);
    }
    struct STU* q = mySTU;
    for (j = 0; j < n; j++)
    {
        res = (q->math + q->physic + q->english) / 3;
        k = (int)res;
        printf("The average score of the %dth student is %d.\n", j + 1, k);
        *(q++);
    }
    return 0;
}