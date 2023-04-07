#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "src/banner.h"
#include "src/mm.h"
#include "src/scan.h"
#include "src/deauth.h"
#include "src/beacon.h"

int main(){
    int option;
    char iface[100], BSSID[100], CHANNEL[4];
    while(1){
		banner();
		printf("\n\n  WiFi-Tools@Attack#~> ");
		scanf("%d", &option);
		if(option <= 5){
			system("sudo bash ./src/ifaces.sh && clear");
			printf(" <---------- Interfaces ---------->\n\n");
			system("cat .iface.tmp");
			printf("\n select@interface#~> ");
			scanf("%s", &iface);
		}
		switch(option){
			case 1:
				change_iface_mode(option, iface);
				break;
			case 2:
				change_iface_mode(option, iface);
				break;
			case 3:
				scan(iface);
				printf("\n\n\n BSSID@Attack#~> ");
				scanf("%s", &BSSID);
				bssid_attack(iface, BSSID);
				break;
			case 4:
				scan(iface);
				printf("\n\n\n CHANNEL@Attack#~> ");
				scanf("%s", &CHANNEL);
				channel_attack(iface, CHANNEL);
				break;
			case 5:
				beacon(iface);
				break;
			case 6:
				printf("\n bye :)");
				break;
			default:
				break;
		}
    }
}
