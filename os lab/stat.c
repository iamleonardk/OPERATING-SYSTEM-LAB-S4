#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdlib.h>
int main(void)
{
char*path,path1[10];
struct stat *nfile;
nfile=(struct stat *)malloc(sizeof(struct stat));
printf("Enter the name of the file:");
scanf("%s",path1);
stat(path1,nfile);
printf("User id:%d\n",nfile->st_uid);
printf("Block size:%ld\n",nfile->st_blksize);
printf("Last acess time:%ld\n",nfile->st_atime);
printf("Last modification:%ld\n",nfile->st_atime);
printf("Production mode:%d\n",nfile->st_mode);
printf("Sizeof file:%ld\n",nfile->st_size); 
printf("Number of links:%ld\n",nfile->st_nlink);
}

