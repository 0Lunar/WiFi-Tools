#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void beacon(char iface[100]){
    char command[150];
    system("clear");
    printf("Using ssid_list.txt\n\n");
    strcpy(command, "sudo mdk4 ");
    strcat(command, iface);
    strcat(command, " b -f ssid_list.txt -s 10000");
    system(command);
}
