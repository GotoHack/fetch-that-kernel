//
//  main.c
//  fetch-that-kernel
//
//  Created by Michael Woolweaver on 6/29/16.
//  Copyright © 2016 Michael Woolweaver. All rights reserved.
//

#include <stdio.h>
#include "ota-links.h"
#include "device_info.h"


int main(int argc, const char * argv[]) {
    
    int choice;
    const char* directory = "AssetData/boot/";
    
    puts("Choose from the list below");
    
    for(int i = 0; i < 29; i++)
    {
        printf("%d. ", i);
        printf("%s", device_list[i].displayName);
        printf("\n");
    }
    scanf("%d", &choice);
    
    printf("The device you picked is %s and the URL is %s", device_list[choice].displayName, DP1[choice].otaURL);
    
    
    
    
    return 0;
}
