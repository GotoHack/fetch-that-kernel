//
//  main.c
//  fetch-that-kernel
//
//  Created by Michael Woolweaver on 6/29/16.
//  Copyright © 2016 Michael Woolweaver. All rights reserved.
//

#include <stdbool.h>
#include "partialzip.h"


int main(int argc, char* argv[]) {
    
    int choice;
    char d1[37] = "AssetData/boot/kernelcache.release.\0"; // Directory that contains the kernelcache
    char d2[50];
    int kG;
    char* destination = "~/Downloads/j71";
    
    do{
    puts("Choose device from the list below: ");
        
    for(int i = 0; i < 28; i++)
    {
        printf("%d. %s\n", i, device_list[i].displayName);
    }
    scanf("%d", &choice);
    
        
    printf("Is this all correct?\n device: %s\n save to %s\n 1 = yes or 0 = no\n", device_list[choice].displayName, destination);
        scanf("%d", &kG);
        
    }while(kG != 1);
    
    // these two values need to be passed to partialzip.c but how??
    
    strcpy (d2, d1);
    strcat(d2, DP1[choice].kernelCache); // takes user selction and add it to the end of the containing directory
    
    
    printf("\n\n %s, %s, %s \n\n\n", DP1[choice].otaURL, destination, d2);
    
    
    fetch(4, DP1[choice].otaURL, d2, destination);
    
    
    return 0;
}
