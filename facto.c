#include<stdio.h>
#include<windows.h>
#include<conio.h>
#define ENTER 13
#define  ESC 27

void gotoxy(int,int);
void read2(void);
void readfile(void);
int facto(int);
int factore(int);
int main()
{
   char ch;
   int a;

   system("color 71");
   gotoxy(40,12);
   printf("WELCOME IN FACTORIAL CALCULATOR");
   getch();
   system("cls");
   read_again: read_again3:
   printf("ENTER THE NO......");
   scanf("%d",&a);
   printf("THE FACTORIAL OF (%d!) is %d\n",a,facto(a));
    printf("\n(BY RECURSION METHODE) THE FACTORIAL OF (%d!) is %d",a,factore(a));
    gotoxy(40,12);
    printf("TO CONTINUE PRESS <ENTER>");
    gotoxy(40,14);
    printf("TO EXIT PRESS <ESC> ");
    gotoxy(40,16);
    printf("GETING WRONG ANS PRESS <H>");
    gotoxy(40,18);
    printf("SEE THE CODING OF THIS PRESS <C>");
    read:
    ch=getch();
    if(ch==ENTER)
    {
        system("cls");
        goto read_again;
    }else if(ch==ESC)
    {
      system("cls");
       system("color 0c");
       gotoxy(40,12);
         printf("THANX  WILL MEET AGAIN");
         getch();
         exit(0);


    }else if(ch=='h'||ch=='H')
    {
       system("cls");
    read2();
    getch();
    system("cls");
    goto read_again3;

    }else if(ch=='c'||ch=='C')
    {
        system("cls");
        readfile();

        getch();
          system("cls");
        main();

    }

    else
    {
           goto read;
           system("cls");

    }




}
void gotoxy(int a,int b)
{
 COORD x;
 x.X=a;
 x.Y=b;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),x);


}
int facto(int a)
{
   int f,i;
   f=1;
   for(i=0;i<a;i++)
   {
     f=f*(i+1);

   }
   return f;



}
int factore(int a)
{
    if(a==1)
    return 1;
    else
    return (a*factore(a-1));




}
void readfile(void)
{

    FILE *p;
    char ch;
    p=fopen("coding.txt","r");
    if(p==NULL)
    {
        printf("FILE NOT FOUND");
        getch();
        main();

    }
    while(!feof(p))
    {
        printf("%c",ch);
        ch=fgetc(p);

    }
    fclose(p);



}
void read2(void)
{

    FILE *p;
    char ch;
    p=fopen("error.txt","r");
    if(p==NULL)
    {
        printf("ERROR 404");
        getch();
        main();

    }
    while(!feof(p))
    {
        printf("%c",ch);
        ch=fgetc(p);

    }
    fclose(p);


}
