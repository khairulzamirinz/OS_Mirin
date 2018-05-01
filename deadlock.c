
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int nop,nor, total,process,count;
    int totalres[15], maxrespro[15][15], allocated[15][15], tt[15],need [15][15];
    int flag[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    
    printf("\n Number of process:");
    scanf("%d",&nop);
    printf("\n Number of resources:");
    scanf("%d",&nor);
    
    printf("\n Total numbers of each resources:");
    for(int i=1;i<= nor;i++){
        scanf("%d",&totalres[i]);
    }
    
    //mapping max matrix
     printf("\n Max resources for each process:");
    for(int i=1;i<= nop;i++)
    {
        printf("\n Process %d:",i);
        for(int j=1;j<= nor;j++){
            scanf("%d",&maxrespro[i][j]);
        }
    }
 
 
    //mapping allocated matrix
    printf("\n Enter allocated resources for each process:");
    for(int i=1;i<= nop;i++)
    {
        printf("\n for process %d:",i);
        for(int j=1;j<= nor;j++){
            scanf("%d",&allocated[i][j]);
 
        }
    }
    
    //printing available resource
    printf("\n Available resources:\n");
    for(int j=1;j<= nor;j++)
    {
        
        total=0;
        for(int i=1;i<= nop;i++)
        {
            total+=allocated[i][j];
        }
        tt[j]=totalres[j]-total;
        printf("     %d \t",tt[j]);
    }
    
    do{
        //mapping need matrix
        for(int i=1;i<= nop;i++)
        {
            for(int j=1;j<= nor;j++)
            {
                need[i][j]=maxrespro[i][j]-allocated[i][j];
            }
        }
        //Printing the three tables
        printf("\n          Allocated             Maximum               Needed");
        for(int i=1;i<= nop;i++)
        {
            printf("\n");
            printf("    |-|");
            for(int j=1;j<= nor;j++)
            {
                printf("%4d",allocated[i][j]);
            }
            printf("    |-|");
            for(int j=1;j<= nor;j++)
            {
                printf("%4d",maxrespro[i][j]);
            }
            printf("    |-|");
            for(int j=1;j<= nor;j++)
            {
                printf("%4d",need[i][j]);
            }
            printf("    |-|");
        }
        
        process=0;
 
        //checks whether the available resource can accommodate he needed resource
        for(int i=1;i<= nop;i++)
        {
            if(flag[i]==0)
            {
                process=i;
 
                for(int j=1;j<= nor;j++)
                {
                    if(tt[j]< need[i][j])
                    {
                        process=0;
                        break;
                    }
                }
            }
 
            if(process!=0){
                break;
            }    
        }
         
        //calculation after a process has finished
        if(process!=0)
        {
            printf("\nProcess %d completed",process);
            count++;
            printf("\nAvailable matrix:");
            for(int j=1;j<= nor;j++)
            {
                tt[j]+=allocated[process][j];
                allocated[process][j]=0;
                maxrespro[process][j]=0;
                flag[process]=1;
                printf("   %d",tt[j]);
            }
        }
    }while(count!=nop&&process!=0);
    
    if (count == nop)
        printf("\n*****The system is in a safe state!!*****");
    else
        printf("\n*****The system is in an unsafe state!!*****");
    
 
    return (0);
}

