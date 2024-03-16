#include <stdio.h>
#include <conio.h>
#include<stdlib.h>

int main()
{   int size;
    printf("Enter the size of queue\n");
    scanf("%d",&size);
    int arr[size-1];
    int R=-1,F=-1,ch,n,i;
    for(;;)	//  for infinite times execution
    {
       	system("cls");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3.Traverse/Display \n");
        printf("4. Terminate\n");
        printf("Enter Choice: ");
        scanf("%d",&ch);

        switch(ch) // to execute different choice
        {
            case 1:
            	
                if(R==size-1)
                {
                    printf("Queue is full");
                    getch(); // to execute or display above message	
                }
                else
                {
                    printf("Enter a number ");
                    scanf("%d",&n);
                    R++;
                    arr[R]=n;
                }
                break;

            case 2:
                if(R==-1&&F==-1||F>=R)
                {
                    printf("Queue is empty");
                    getch();
                }
                else
                {
                  
                    F++;
                     printf("Number Deleted = %d",arr[F]);
                    
                     getch();
                     
                   	
                }
                break;

            case 3:
                if(R==-1&&F==-1||F>=R)
                {
                    printf("Queue is empty");
                    getch();	
                }
                else
                {
                    for(i=F+1; i<=R; i++)
                    {
                        printf("%d ",arr[i]);
                    }
                    getch();	
                }
                break;
                case 4:
                	exit(0);
                	break;

            
            default:
                printf("Wrong Choice");
                getch();	
        }
    }
    return 0;
}
