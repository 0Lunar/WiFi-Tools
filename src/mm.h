#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void change_iface_mode(int option, char iface[100]){
    char command[120];
    switch(option){
        case 1:
            strcpy(command, "sudo airmon-ng start ");
            strcat(command, iface);
            system(command);
            break;
        case 2:
            strcpy(command, "sudo airmon-ng stop ");
            strcat(command, iface);
            system(command);
            break;
        default:
            break;
    }
}
