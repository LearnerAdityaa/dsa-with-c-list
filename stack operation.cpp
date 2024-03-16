#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{   int size;
    printf("Enter the size of stack\n");
    scanf("%d",&size);
    int arr[size];
	int top=-1,ch,n,i;

    for(;;)		
    {
        system("cls");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Traverse/Display\n");
        printf("4. Terminate\n");
        printf("Enter Choice: ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                if(top==size-1)
                {
                    printf("Stack is full");
                    getch();
                }
                else
                {
                    printf("Enter a number ");
                    scanf("%d",&n);
                    top++;
                    arr[top]=n;
                    getch();
                }
                break;

            case 2:
                if(top==-1)
                {
                    printf("Stack is empty");
                   	 getch();
                }
                else
                {
                    printf("Number Popped = %d",arr[top]);
                    top--;
                   	 getch();
                }
                break;

            case 3:
                if(top==-1)
                {
                    printf("Stack is empty");
                     getch();	
                }
                else
                {   printf("The items in stack are as follows:\n");
                    for(i=top; i>=0; i--)
                    {
                        printf("%d\t", arr[i]);
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
