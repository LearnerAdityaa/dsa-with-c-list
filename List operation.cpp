#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int i,n,m;
int main(){
	int size,ch,pos;
	printf("Enter the size of list\n");
	scanf("%d",&size);
	int list[size-1];
	for(;;)
	{	
	int ch;
	printf("\n");
	system("cls\n");
	printf("1.create list\n");	
	printf("2.insert element\n");
	printf("3.delete element\n");
	printf("4.modify element\n");
	printf("5.Traverse\n");
	printf("6.Searching\n");
	printf("7.exit\n");
	printf("Enter the choice\n");
    scanf("%d",&ch);
	 
	switch(ch){
		    case 1:
			printf("Enter the no. element to be inserted\n");
			scanf("%d",&n);
			printf("Enter any %d elements of given list\n",n);
			for(i=0;i<n;i++){
				scanf("%d",&list[i]);
			}
			break;
			
			case 2:
				int nel;
				printf("Enter the position at you want to insert element\n");
				scanf("%d",&pos);
				printf("Enter the element you want to insert\n");
				scanf("%d",&nel);
				for(i=n-1;i>=pos-1;i--){
				list[i+1]=list[i];
				}
				list[pos]=nel;
				n=n+1;
				getch();
				break;
				
				case 3:
				printf("Enter the position which you want to delete\n");
				scanf("%d",&pos);
				for(i=pos;i<n;i++){
					list[i]=list[i+1];
					}
				n=n-1;
				break;
				case 4:
					int num;
					printf("Enter the position you want to update\n");
					scanf("%d",&pos);
					printf("Enter the new element\n");
					scanf("%d",&num);
					list[pos]=num;
					getch();
					break;
					
				case 5:
						printf("Elements in list are\n");
						for(i=0;i<=n-1;i++){
						printf("%d \t",list[i]);
							
						}
						getch();		
						break;
					
				case 6:
				int x;
			    printf("Enter the element you want to search\n");
				 scanf("%d",&x);
				 for(i=0;i<size;i++){
				 	if(x==list[i]){
				 		printf("%d found at %d index",x,i);
				 		getch();
					 }
					 
				 }
				    break;
				case 7:
					exit(0);
					break;
				default:
				printf("wrong choice\n");
				getch();
					} 
					
	
	
    }
    return 0;

}

	

