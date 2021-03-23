#include <stdio.h>       
#include <pthread.h>     


void* PrintHello(void* data)
{
    int my_data = (int)data;     	

  
    printf("\nHello world! I am thread %d\n", my_data);
    		/* terminate the thread */
}

int main(int argc, char* argv[])
{
    int        rc= atoi(argv[1]);         	/* return value                           */
    pthread_t  thread_id[100];
    int i, j;     	

    
    for(i=0;i<rc;i++)
{
		int data=i+1;
    printf("\nCreating thread %d....",i+1);
  
    pthread_create(&thread_id[i], NULL, PrintHello, (void*)data);  
}

    for(j=0; j < rc; j++)
   {
      printf("\nJoining thread %d....",j+1);
      pthread_join(thread_id[j], NULL);
   }
  
    
    
 
   return 0;
}
