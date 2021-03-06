//  main.c
//  fetch-that-kernel
//  Created by Michael Woolweaver
// depends on the partial-zip https://github.com/Neal/partial-zip branch updated by @iNeal

#include "partial_zip/partialzip.h"

int main(int argc, char* argv[]) {
    
    puts("Choose device from the list below: ");
        
    for(int i = 0; i < 28; i++)
    {
        printf("%d. %s\n", i, device_list[i].displayName);
    }
    scanf("%d", &choice);
    
    // adds proper device info
    
    strcpy (d2, d1);
    strcat(d2, DP1[choice].kernelCache); // takes user selction and adds it to the end of the containing directory
    
    strcpy (d3, destination);
    strcat (d3, DP1[choice].kernelCache);
    
    printf("\n\nBefore passing to fetch().\n\n\n%s, %s, %s, \n\n\n", DP1[choice].URL, d3, d2); // just used for debuging to make sure proper values are being used before passing to fetch();
    
    fetch(DP1[choice].URL, d2, d3); // This function is declared in partialzip.h
    
    return 0;
}