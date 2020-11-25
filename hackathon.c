#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    
    printf("\t\t\t\t\t\t________________________________________________________________________________________________________\n");
    printf("\n");
    
    printf("\t\t\t\t\t\t\t\t_____        ______       _____   ______  _____       _____ ______    ______\n");
    printf("\t\t\t\t\t\t\t\t  |      |   |     |        |    |    |  |     |        |    |    |   |\n");
    printf("\t\t\t\t\t\t\t\t  |      |   |------  --    |    |    |  |------  --    |    |    |   |----\n");
    printf("\t\t\t\t\t\t\t\t  |      |   |              |    ------  |              |    ------   |_____\n");
    printf("\n\t\t\t\t\t\t________________________________________________________________________________________________________\n");
    
    int t,flag=0,max=0,pass1=1,pass2=1;
    
    //There are 21 sticks in a certain deck .... and there are two people playing games ... They have to pick sticks one by one .... maximum a player //can pick 4 sticks ....  you can pass your move maximum 2 times ... !!
    
    char ch1[1000],ch2[1000];
        
        printf("\n\nEnter 1st Player <NAME>: \a");
        scanf(" %s",ch1);
        
        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tEnter 2nd player <NAME>: \a");
        scanf(" %s",ch2);
    
    char choice[10];
    
    printf("\n\t\t\t\t\t\t\tLEVELS:\n");
    printf("\n\t\t\t\t\t\t\t\t•Easy\n\t\t\t\t\t\t\t\t•Moderate\n\t\t\t\t\t\t\t\t•Hard\n\n");
    
    label:
    printf("\n\t\tChoose your LEVEL: ");
    scanf(" %s",choice);
    
    if(strcasecmp(choice,"easy")==0)
    {
        t=10;
        
        char design[]={'P','.','.','.','.','.','.','.','.','.','.','d'};
        printf("\n\t\t\t\t\t\t\t\t%s IS AT STARTING POSITON and %s IS AT ENDING POSITION \n\n\t\t\t\t\t\t\t\tTHERE IS %d STEPS DIFFERENCE BETWEEN BOTH THE PLAYER\n\n\nA Player Can Jump At Max 2 Steps\nA Player Can PASS only 1 Time \n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tA Player Can Jump At Max 2 Steps\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tA Player Can PASS only 1 Time\n\t\t\t\t\t\t\t\t\t",ch1,ch2,t);
        
        for(int i=0;i<t+2;i++)
        {
            printf("%c ",design[i]);
        }
        int ply1=0,p1,p2,ply2=t+1;
        while(1)
        {
            label1 :
            printf("\n\n\n%s ENTER YOUR STEP LENGTH: \a",ch1);
            scanf("%d",&p1);
            
            if(p1>2)
            {
                printf("\n<<!!INPUT EXCEEDED THE LIMIT!!>>\n");
                goto label1;
                
            }
            else
            {
                if(p1==0&&pass1<=1)
                {
                    pass1++;
                }
                else if(p1==0&&pass1>1)
                {
                    printf("\n\t\t\t\t\t\t\t<<<<<YOU HAVE USED YOUR PASS OPTION>>>>>\n");
                    goto label1;
                }
                ply1=ply1+p1;
                flag=1;
            }
            
            printf("\n\n\n\t\t\t\t\t\t\t\t\t");
            
            if(p1!=0)
            {
                design[ply1]='P';
                design[ply1-p1]='.';
            }
            
            for(int i=0;i<t+2;i++)
            {
            printf("%c ",design[i]);
            }
            
            
            
            if(ply1>=ply2)
            {
                break;
            }
            
            printf("\n\n\n\t\t\t\t\t\t\t\t\t%s IS AT %d POSITION\n",ch1,ply1);
            
            label2:
            printf("\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t%s ENTER YOUR STEP LENGTH: \a",ch2);
            scanf("%d",&p2);
            
            
            if(p2>2)
            {
                printf("\n<<!!INPUT EXCEEDED THE LIMIT!!>>\n");
                goto label2;
                
            }
            else
            {
                if(p2==0&&pass2<=1)
                {
                    pass2++;
                }
                else if(p2==0&&pass2>1)
                {
                    printf("\n\n\n\n\t\t\t\t\t\t\t\t\t<<<<<YOU HAVE USED YOUR PASS OPTION>>>>>\n");
                    goto label2;
                }
                ply2=ply2-p2;
                flag=2;
            }
            
            if(p2!=0)
            {
                design[ply2]='d';
                design[ply2+p2]='.';
            }
            
            printf("\n\n\n\n\t\t\t\t\t\t\t\t\t");
            
            for(int i=0;i<t+2;i++)
            {
            printf("%c ",design[i]);
            }
            
            if(ply1>=ply2)
            {
                break;
            }
            
            printf("\n\n\n\t\t\t\t\t\t\t\t\t%s IS AT %d POSITION\n",ch2,ply2);    
        }
        
        if(flag==1)
            printf("\n\n\n\t\t\t\t\t\t\t\t\t\t%s __WINS__\n\n",ch1);
        else
            printf("\n\n\n\t\t\t\t\t\t\t\t\t\t%s __WINS__\n\n",ch2);
        
    }
    else if(strcasecmp(choice,"moderate")==0)
    {
        t=25;
        
        
        
        char design[]={'P','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','d'};
        printf("\n\n\n\n\t\t\t\t\t\t\t\t");
        for(int i=0;i<t+2;i++)
        {
            printf("%c ",design[i]);
        } 
         printf("\n\n\n\t\t\t\t\t\t\t\t%s IS AT STARTING POSITON and %s IS AT ENDING POSITION \n\n\t\t\t\t\t\t\t\tTHERE IS %d STEPS DIFFERENCE BETWEEN BOTH THE PLAYER\n\n\nA Player Can Jump At Max 3 Steps\nA Player Can Use PASS only 2 Time \n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tA Player Can Jump At Max 3 Steps\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tA Player Can PASS only 2 Time",ch1,ch2,t);
        
        int ply1=0,p1,p2,ply2=t+1;
        while(1)
        {
            label3 :
            printf("\n\n\n%s ENTER YOUR STEP LENGTH: \a",ch1);
            scanf("%d",&p1);
            
            if(p1>3)
            {
                printf("\n<<!!INPUT EXCEEDED THE LIMIT!!>>\n");
                goto label3;
                
            }
            else
            {
                if(p1==0&&pass1<=2)
                {
                    pass1++;
                }
                else if(p1==0&&pass1>2)
                {
                    printf("\n\n\n\t\t\t\t\t\t\t\t<<<<<YOU HAVE USED YOUR PASS OPTION>>>>>\n");
                    goto label3;
                }
                ply1=ply1+p1;
                flag=1;
            }
            
            printf("\n\n\n\t\t\t\t\t\t\t\t");
            
            if(p1!=0)
            {
                design[ply1]='P';
                design[ply1-p1]='.';
            }
            
            for(int i=0;i<t+2;i++)
            {
            printf("%c ",design[i]);
            }
            
            if(ply1>=ply2)
            {
                break;
            }
            
            printf("\n\n\n\n\t\t\t\t\t\t\t\t\t%s IS AT %d POSITION\n",ch1,ply1);
            
            label4:
            printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t%s ENTER YOUR STEP LENGTH: \a",ch2);
            scanf("%d",&p2);
            
            
            if(p2>3)
            {
                printf("\n<<!!INPUT EXCEEDED THE LIMIT!!>>\n");
                goto label4;
                
            }
            else
            {
                if(p2==0&&pass2<=2)
                {
                    pass2++;
                }
                else if(p2==0&&pass2>2)
                {
                    printf("\n\n\n\n\t\t\t\t\t\t\t\t<<<<<YOU HAVE USED YOUR PASS OPTION>>>>>\n");
                    goto label4;
                }
                ply2=ply2-p2;
                flag=2;
            }
            
            if(p2!=0)
            {
                design[ply2]='d';
                design[ply2+p2]='.';
            }
            
            printf("\n\n\n\n\t\t\t\t\t\t\t\t");
            
            for(int i=0;i<t+2;i++)
            {
            printf("%c ",design[i]);
            }
            
            if(ply1>=ply2)
            {
                break;
            }
            
            printf("\n\n\n\t\t\t\t\t\t\t\t\t%s IS AT %d POSITION\n",ch2,ply2);    
        }
        
        if(flag==1)
            printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\t%s __WINS__\n",ch1);
        else
            printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\t%s __WINS\n",ch2);
        
    }    
    else if(strcasecmp(choice,"hard")==0)
    {
        t=50;
        
         char design[52];
         design[0]='P';
         design[51]='d';
         
         for(int i=1;i<51;i++)
         {
             design[i]='.';
         }
         printf("\n\n\t\t\t\t\t");
         
         for(int i=0;i<t+2;i++)
        {
            printf("%c ",design[i]);
        }
         printf("\n\n\n\n\t\t\t\t\t\t\t\t%s IS AT STARTING POSITON and %s IS AT ENDING POSITION \n\n\t\t\t\t\t\t\t\tTHERE IS %d STEPS DIFFERENCE BETWEEN BOTH THE PLAYER\n\n\nA Player Can Jump At Max 5 Steps\nA Player Can Use PASS only 4 Time \n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tA Player Can Jump At Max 5 Steps\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tA Player Can PASS only 4 Time",ch1,ch2,t);
        
        int ply1=0,p1,p2,ply2=t+1;
        while(1)
        {
    
        label5 :
            printf("\n\n\n%s ENTER YOUR STEP LENGTH: \a",ch1);
            scanf("%d",&p1);
            
            if(p1>5)
            {
                printf("\n<<!!INPUT EXCEEDED THE LIMIT!!>>\n");
                goto label5;
                
            }
            else
            {
                if(p1==0&&pass1<=4)
                {
                    pass1++;
                }
                else if(p1==0&&pass1>4)
                {
                    printf("\n\n\n\n\t\t\t\t\t\t\t\t<<<<<YOU HAVE USED YOUR PASS OPTION>>>>>\n");
                    goto label5;
                }
                ply1=ply1+p1;
                flag=1;
            }
            
            if(p1!=0)
            {
                design[ply1]='P';
                design[ply1-p1]='.';
            }
            
            printf("\n\n\n\t\t\t\t\t");
            
            for(int i=0;i<t+2;i++)
            {
            printf("%c ",design[i]);
            }
            
            if(ply1>=ply2)
            {
                break;
            }
            
            printf("\n\n\n\n\t\t\t\t\t\t\t\t\t%s IS AT %d POSITION\n",ch1,ply1);
            
            label6:
            printf("\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t%s ENTER YOUR STEP LENGTH: \a",ch2);
            scanf("%d",&p2);
            
            
            if(p2>5)
            {
                printf("\n<<!!INPUT EXCEEDED THE LIMIT!!>>\n");
                goto label6;
                
            }
            else
            {
                if(p2==0&&pass2<=4)
                {
                    pass2++;
                }
                else if(p2==0&&pass2>4)
                {
                    printf("\n\n\n\n\t\t\t\t\t\t\t\t<<<<<YOU HAVE USED YOUR PASS OPTION>>>>>\n");
                    goto label6;
                }
                ply2=ply2-p2;
                flag=2;
            }
            
            if(p2!=0)
            {
                design[ply2]='d';
                design[ply2+p2]='.';
            }
            
            printf("\n\n\n\n\t\t\t\t\t");
            
            for(int i=0;i<t+2;i++)
            {
            printf("%c ",design[i]);
            }
            
            if(ply1>=ply2)
            {
                break;
            }
            
            printf("\n\n\n\t\t\t\t\t\t\t\t\t%s IS AT %d POSITION\n",ch2,ply2);    
        }
        
        if(flag==1)
            printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\t%s __WINS__\n",ch1);
        else
            printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\t%s __WINS__\n",ch2);
    }
    
    else
    {
        printf("\n\n\n\n\t\t\t\t\t\t\t\t\t<<WRONG INPUT>>");
        goto label;
        
    }
return 0;
}
