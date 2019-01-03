#include<stdio.h>
#include<conio.h>

int perulangan (int n);
int main (void)
{
int n;
printf("masukan nilai (n) : ");
scanf("%d",&n);
perulangan(n);
getch ();
}
int perulangan(int n)
{
    int i;
    for(i=1;i<=n;i++)
    printf("algoritma dan pemograman\n");
    return (i);
}
