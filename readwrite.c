#include<stdio.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<unistd.h>
int main()
{
int fd;
char buf[1024];
char *myfifo="/tmp/myfifo";
mkfifo(myfifo,0666);
printf("Run reader process to read the FIFO file\n");
fd=open(myfifo,O_WRONLY);
write(fd,"HI",sizeof("HI"));
close(fd);
unlink(myfifo);
return 0;
}
