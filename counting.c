#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main() 
{   
	printf("%d \n",getppid());
	printf("%d \n",getpid());
	
    
        if(fork() == 0) 
        {  
            if(fork()==0)
			{
				if(fork()==0)
				{
					if(fork()==0)
					{
						for(int i=0;i<1000;i++)
						{
							printf(" %d ",i);
						}
					}
	                   else
{				
						wait(NULL);
				        for(int i=1000;i<2000;i++)
				        {
					      printf(" %d ",i);
				        }
					
				}}
				
				else
{
				wait(NULL);
			    for(int i=2000;i<3000;i++)
			    {
				  printf(" %d ",i);			
			    }
				
			}}
else
{
			wait(NULL);
			for(int i=3000;i<4000;i++)
			{
			printf(" %d ", i);		
			}
			
        }}
else{ 
		wait(NULL);
			for(int i=3000;i<5000;i++)
			{
			printf(" %d ", i);		
			}
			
}




		
    
