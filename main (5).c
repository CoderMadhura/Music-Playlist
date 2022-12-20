/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

//CODE FOR MUSIC PLAYLIST:BEATZZ
#include <stdio.h>
#include<stdlib.h>
#include<string.h>

struct MP
{
    char song[20];
    struct MP *next;
}
*start=NULL,*q,*t;

int main()
{
    int ch;
    void insert_beg();
    void delete_beg();
    void display();
    
    while(1)
    {
        printf("\n\n----Menu----");
        printf("\n 1.Insert a song\n 2.Display playlist\n 3.Delete a song \n 4.Exit\n");
        printf("Enter your choice :");
        scanf("%d",&ch);
        
        switch(ch)
        {
            case 1:
            printf("\n---Insert Menu--");
            printf("\n 1.Insert song at beginning\n2.Exit");
            printf("\n\n Enter your choice:");
            scanf("%d",&ch);
              switch(ch)
              { 
                  case 1: insert_beg();
                  break;
                  case 2:exit(0);
                  default: printf("\nWrong Choice");
              }
            break;
            case 2:
            display();
            break;
            case 3:
            printf("\n---Delete Menu---");
            printf("\n 1.Delete song from beginning\n2.exit");
            printf("\n\n Enter your choice:");
            scanf("%d",&ch);
                switch(ch)
               {
                 case 1:
                 delete_beg();
                 break;
                 case 2:
                 exit(0);
                 default:printf("Wrong Choice");
                
                }
            break;
            case 4:exit(0);
            break;
            default:printf("Wrong Choice!");
            
        }
   }
   return 0;
}
void insert_beg()
{   
    char alpha[20];
    char temp;
    struct MP m;
    
    t=(struct MP*)malloc(sizeof(struct MP));
    printf("Enter song:");
    scanf("%c",&temp);
    scanf("%[^\n]",alpha);
    //*t->song=*alpha;
    strcpy(t->song,alpha);
    if(start==NULL)
    {
        t->next=NULL;
        start=t;
    }
    else
    {
        t->next=start;
        start=t;
      
        
    }
}
void display()
{
    if (start==NULL)
    {
        printf("\nPLayList is empty");
        
    }
    else
    {
        q=start;
        printf("The Playlist is:\n");
        while(q!=NULL)
        {
            printf("%s\n",q->song);
            q=q->next;
            
        }
    }
}

void delete_beg()
{
    if (start==NULL)
    {
        printf("The Playlistlist is empty");
        
    }
    else
    {   
        q=start;
        start=start->next;
        printf("deleted song is%s",q->song);
        free(q);
}
}