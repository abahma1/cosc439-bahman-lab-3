#include<stdlib.h>
#include<stdio.h>
#include<argp.h>
#include<sys/wait.h>
#include<unistd.h>

void reca(int N)
{
static int p;
for(int i=0; i<N; i++)
{

if(i==0)
{
printf("\n%d",i);
p=1;
}
else if((p)%i==0)
{
printf("\n%d",(p)/i);
p=p/i;
}
else
{
printf("\n%d",(p)*i);
p=p*i;
}
}



}
int main(int argc, char** argv) {
int N= atoi(argv[1]);
pid_t pid = fork();
if (pid == 0) {
reca(N);

}
else{
printf("\nSTART\n");
wait(NULL);
printf("\nEND\n");
}
return 0;
}
