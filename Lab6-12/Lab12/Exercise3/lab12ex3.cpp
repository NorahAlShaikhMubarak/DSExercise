#include<stdio.h> 

#include<stdlib.h> 

int arr[100], n; 


void insert(int num,int loc);
void display();
void Largest();

main(){ 

 int choice,num; 

 n=0;/*Represents number of nodes in the heap*/ 

 while(1){ 

  printf("1.Insert\n"); 

  printf("2.Display\n"); 
  
  printf("3.Largest\n");

  printf("4.Quit\n"); 

  printf("Enter your choice : "); 

  scanf("%d",&choice); 

  switch(choice){ 

   case 1: 

   printf("Enter the number to be inserted : "); 

   scanf("%d",&num); 

   insert(num,n); 

   n=n+1; 

   break; 

   case 2: 

   display(); 

   break; 

   case 3: 
     Largest();
   break;
   
   case 4 :  
     exit(0); 

   default: 

   printf("Wrong choice\n"); 

  }/*End of switch */ 

 }/*End of while */ 

}/*End of main()*/ 
void insert(int num,int loc){ 

 int par; 

 while(loc>0){ 

  par=(loc-1)/2; 

  if(num<=arr[par]) { 

   arr[loc]=num; 

   return; 

  } 

  arr[loc]=arr[par]; 

  loc=par; 

 }/*End of while*/ 

 arr[0]=num; /*assign num to the root node */ 

}/*End of insert()*/ 
void display(){ 

int i; 

 if(n==0){ 

  printf("Heap is empty\n"); 

  return; 

 } 

 for(i=0;i<n;i++) 

  printf("%d ",arr[i]); 

 printf("\n"); 
 printf("The largest element : %d",arr[0]); 
 printf("\n"); 

}/*End of display()*/ 

void Largest(){
	printf("The largest node data : %d",arr[0]); 
 printf("\n"); 
	
}

