#include<stdio.h>
#include<stdlib.h>
typedef struct linklist node;
node *start='\0';


struct linklist
{
   int data;
   /*float data_2;
   char data_3;
   char data_4[60];*/
   
   struct linklist *next;
};

//****************************************************************************************8
node *getnode()
{
   node *newnode;
   newnode=(node *)malloc(sizeof(node));
   printf("entre the number\n");
     scanf("%d",&newnode->data);

     newnode->next='\0';
     
return newnode;

}

//**********************************************************************************************
int count()  
{ 
    node *temp;
    int count=0;

     if(start=='\0')
        printf("link list is empty.There is no nodes");

    else 
    {
       temp=start;
       while(temp!='\0')
       {
          temp=temp->next;
          count++;

        }

      }


return count;
}
//****************************************************************************************
void search()
{
    node *ptr;
    int count=0;
   
   ptr=start;
    
     if(ptr=='\0')
       printf("link list is empty\n");

    else
     {
         printf("what value do you want to search : ");
           scanf("%d",value);
         while(ptr!='\0')
         {
            if(ptr->data==value)
            {
                count++;
                printf("%d possition is %d\n",ptr->data,count);

            }

             ptr=ptr->next;  
       
         }
        

        if(count==0)
            printf("not found\n");


      }


}

//************************************************************************************************
void sum()
{
     node *ptr;
     int sum=0;

      ptr=start;

     if(ptr=='\0')
       printf("link list is empty\n");

     else
   {
         while(ptr!='\0')
         {
            sum=sum+ptr->data;  
            ptr=ptr->next;
         }
      
         printf("sum = %d\n",sum);
    }

}
//*********************************************************************************

void addmidel_after()
{
   node *ptr,*preptr,newnod;
   int value;
   
   printf("what value afrer enter the nownod\n");
     scanf("%d",&value);

     newnod=(node *)malloc(sizeof(node));
         printf("enter data\n");
             scanf("%d",&newnod->data);

    ptr=start;
    preptr=ptr;


    while(preptr->data==value) 
   {
      preptr=ptr;
      ptr=ptr->next;
   }  
     
      newnode->next=ptr;
      preptr->next=newnod;


     free(ptr);
     free(preptr);
   
   
}

//**********************************************************************************   

void addmidel_brfore()
{
   node *ptr,*preptr,newnode;
   int value;
   
   printf("what value before enter the nownod\n");
     scanf("%d",&value);

     newnode=(node *)malloc(sizeof(node));
         printf("enter data\n");
             scanf("%d",&newnode->data);

    ptr=start;
    preptr=ptr;


    while(ptr->data==value) 
   {
      preptr=ptr;
      ptr=ptr->next;
   }  
     
      newnode->next=ptr;
      preptr->next=newnode;


     free(ptr);
     free(preptr);
   
   
}
//********************************************************************************


void add_biginin()
{
   node *newnode,*ptr;
 
   
  newnode=(node *)malloc(sizeof(node));
    printf("enter data\n");
      scanf("%d",&newnode->data);

    ptr=start;
    newnode->next=start;
    start=newnode;

   free(ptr);
   

}

//*************************************************************************************
void add_end()
{
   node *newnod,*ptr;
 
   
 newnod=(node *)malloc(sizeof(node));
    printf("enter data\n");
      scanf("%d",&newnod->data);
    
    
    ptr=start;
    while(ptr->next!='\0')
    {
       ptr=ptr->next;
    }
    
    newnode->next=ptr->next;
    ptr->next=newnod;

   
     free(ptr);
  

}
//**************************************************************************************

void display()
{
    node *ptr; 


    if(start=='\0')
       printf("link list is empty\n");

    
   else
   {  
       ptr=start;
      while(ptr!='\0')
      {
           printf("%d\n",ptr->data_1);
           ptr=ptr->next;
      }

   }

   free(ptr);
   

}
//***********************************************************************************

void delete_biginin()
{
   node *ptr;
 
    ptr=start;
    start=start->next;

   free(ptr);
   

}
//**********************************************************************
void delete_end()
{
   node *ptr;
 
   ptr=start;
    while(ptr->next!='\0')
    {
       ptr=ptr->next;
    }
    
    ptr='\0';

    free(ptr);
  

}
//**************************************************************

void delete_midel()
{
   node *ptr,*preptr;
   int value;
   
   printf("what value delete\n");
     scanf("%d",&value);

     

    ptr=start;
    preptr=ptr;


    while(ptr->data==value) 
   {
      preptr=ptr;
      ptr=ptr->next;
   }  
     
      preptr->next=ptr->next;
      


     free(ptr);
     
   
}
//*********************************************************************


int main()
{
   node *newnode;
   node *temp;
   int i,n;

     printf("how many values do you want to enter\n");
         scanf("%d",&n);
   for(i=1;i<=n;i++)
   {

       newnode=(node *)malloc(sizeof(node));
   printf("entre the number\n");
     scanf("%d",&newnode->data);

     newnode->next='\0';
     
       if(start=='\0')
           start=newnode;  

      else
       { 
          temp=start; 
    
          while(temp->next!='\0')
           {
              temp=temp->next;
            }      

         temp->next=newnode;

        }

    }

}


 //count();
  //printf("value = ");
     //scanf("%d",&a);
 //search(a);

 //sum();

 delete_end();
 display();




  

return 0;

}



