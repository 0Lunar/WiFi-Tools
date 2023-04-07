#include <stdio.h>
#include <unistd.h>

void scan(char iface[100]){
    char command[120];
    strcpy(command, "sudo airodump-ng ");
    strcat(command, iface);
    system(command);
}
