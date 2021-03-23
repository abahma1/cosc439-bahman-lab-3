#include<unistd.h>
#include<stdio.h>
int main()
{
char N;
printf("Provide a Targer N:");
scanf("%c",&N);
char *num = &N;
printf("You entered %c", *num);
printf("\n");
char *args[3] = {"./reca", num, NULL};
if(execvp("./reca",args))
{
}
else
{
printf("\n Could not find the specified file\n");
return 0;
}



}
