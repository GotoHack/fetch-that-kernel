#ifndef __DEVICE_INFO_H
#define __DEVICE_INFO_H

#include <string.h>

struct device_info {
	const char* productType;
	const char* displayName;
    
};
static struct device_info device_list[] = {

    // iPod Touch
    {"n102", "iPod touch 6"},
    
    
    // iPad
	{"j71", "iPad Air (WiFi)"},
    
	{"j72", "iPad Air (Cellular)"},
    
	{"j73", "iPad Air (China)"},
    
    {"j81", "iPad Air 2 (WiFi)"},
    
    {"j82", "iPad Air 2 (Cellular)"},
    
    {"j127", "iPad Pro 9.7-inch (WiFi)"},
    
    {"j128", "iPad Pro 9.7-inch (Cellular)"},
    
    {"j98a", "iPad Pro 12.9-inch (WiFi)"},
    
    {"j99a", "iPad Pro 12.9-inch (Cellular)"},
    

    // iPad Mini
	{"j85", "iPad Mini 2 (WiFi)"},
    
    {"j86", "iPad Mini 2 (Cellualr)"},
    
    {"j87", "iPad Mini 2 (China)"},
    
    {"j85m", "iPad Mini 3 (WiFi)"},
    
    {"j86m", "iPad Mini 3 (Cellular)"},
    
    {"j87m", "iPad Mini 3 (China)"},
    
    {"j96", "iPad Mini 4 (WiFi)"},
    
    {"j97", "iPad Mini 4 (Cellular)"},
    
    
    // iPhone
    {"n51", "iPhone 5s (GSM)"},
    
    {"n53", "iPhone 5s (Global)"},
    
    {"n56", "iPhone 6 Plus"},
    
    {"n62", "iPhone 6"},
    
    {"n71", "iPhone 6s (Samsung chip)"},
    
    {"n71m", "iPhone 6s (TSMC chip)"},
    
    {"n66", "iPhone 6s Plus (Samsung Chip)"},
    
    {"n66m", "iPhone 6s Plus (TSMC Chip)"},
    
    {"n69", "iPhone SE (TSMC Chip)"},
    
    {"n69u", "iPhone SE (Samsung Chip)"}
    
};

#endif
