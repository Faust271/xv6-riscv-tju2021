#include "kernel/param.h"
#include "kernel/types.h"
#include "user/user.h"
#include "kernel/sysinfo.h"

int main(int argc, char* argv[])
{
    if(argc != 1){
        fprintf(2, "Invalid input!\n", argv[0]);
        exit(1); 
    }

    struct sysinfo info;
    sysinfo(&info);
    printf("free memory: %d, used process num: %d\n", info.freemem, info.nproc);
    
    exit(0);
}