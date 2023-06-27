

#include<stdio.h>

int main(){
 
    int block_size[10],process_size[10],allocated_block[10];
    int no_of_blocks,no_of_processes;
    for(int i =0;i< 10; i++)
        allocated_block[i] = -1;
  
    printf("Enter the number of blocks: ");
    scanf("%d",&no_of_blocks);
    printf("Enter the size of each block: ");
    for(int i = 0; i < no_of_blocks;i++)
        scanf("%d",&block_size[i]);
    printf("Enter the number of process: ");
    scanf("%d",&no_of_processes);
    printf("Enter the size of each process: ");
    for(int i = 0; i < no_of_processes;i++)
        scanf("%d",&process_size[i]);

    for(int i = 0; i < no_of_processes ;i++ ){
        for(int j = 0; j< no_of_blocks ;j++)
            if(process_size[i] <= block_size[j]){
                allocated_block[i] = j;
                block_size[j] -= process_size[i];
                break; 
            }
    }
  
    printf("\nProcess No.\tProcess size\tBlock No\n");
    for(int i = 0; i < no_of_processes ;i++ ){
        printf("  %d\t\t  %d\t\t",i+1,process_size[i]);
        if(allocated_block[i] !=-1)
            printf("  %d\n",allocated_block[i]+1);
        else
            printf("Not allocated\n");
    }
    return 0;
}

