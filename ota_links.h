#ifndef __OTA_LINKS_H
#define __OTA_LINKS_H

#include <string.h>

int choice;
char d1[37] = "AssetData/boot/kernelcache.release.\0"; // Directory that contains the kernelcache
char d2[45];
char destination[34] = "~/Downloads/kernelcache.release.\0"; 
char d3[39]; // after user selction and the addition of device info

struct ota_link {
    char kernelCache[8];
    char URL[200];
};
static struct ota_link DP1[] = {
    
    
    // iPod Touch
    {"n102", "http://appldnld.apple.com/WWDC_2016/iOS10Seed1/031-62891-20160613-30D6553E-2D91-11E6-B903-AF9EB96A614B/com_apple_MobileAsset_SoftwareUpdate/b7e9541c27b102a096de842ff6b67b13a460175b.zip"},
    
    
    // iPad
	{"j71", "http://appldnld.apple.com/WWDC_2016/iOS10Seed1/031-62901-20160613-D33D63EE-2D91-11E6-8884-DBA1B96A614B/com_apple_MobileAsset_SoftwareUpdate/0e3ec757b94a9c87b2fd1fa7dce2863111302d41.zip"},
    
	{"j72", "http://appldnld.apple.com/WWDC_2016/iOS10Seed1/031-62909-20160613-D49DC47C-2D91-11E6-A29C-47A2B96A614B/com_apple_MobileAsset_SoftwareUpdate/780f7572f050bdf4ce2dc5d97d90bf18035c22e9.zip"},
    
	{"j73", "http://appldnld.apple.com/WWDC_2016/iOS10Seed1/031-62902-20160613-D33D6254-2D91-11E6-8A2B-E3A1B96A614B/com_apple_MobileAsset_SoftwareUpdate/bebb77cd7a10199a0601a84dcdfa8a8b26441823.zip"},
    
    {"j81", "http://appldnld.apple.com/WWDC_2016/iOS10Seed1/031-62869-20160613-30CE7DA0-2D91-11E6-9A7D-9F9EB96A614B/com_apple_MobileAsset_SoftwareUpdate/7545f59984d4bbe387433ccf8fe7dfb04b318bdb.zip"},
    
    {"j82", "http://appldnld.apple.com/WWDC_2016/iOS10Seed1/031-62868-20160613-30CD2248-2D91-11E6-BBA6-9D9EB96A614B/com_apple_MobileAsset_SoftwareUpdate/9fca89ba0f1327c004c1d34b6c6b09be107555bb.zip"},
    
    {"j127", "http://appldnld.apple.com/WWDC_2016/iOS10Seed1/031-62967-20160613-F4D65812-2D91-11E6-B775-22A3B96A614B/com_apple_MobileAsset_SoftwareUpdate/f543385f1cdac53956d50fc5199766cad93c047d.zip"},
    
    {"j128", "http://appldnld.apple.com/WWDC_2016/iOS10Seed1/031-62970-20160613-FDB3B4F2-2D91-11E6-8F15-58A3B96A614B/com_apple_MobileAsset_SoftwareUpdate/51a45f8e638bb181e833c251d040ffde0e206b46.zip"},
    
    {"j98a", "http://appldnld.apple.com/WWDC_2016/iOS10Seed1/031-62865-20160613-30CDF7AE-2D91-11E6-8FEB-979EB96A614B/com_apple_MobileAsset_SoftwareUpdate/7f74e2002babc98eb2baa9720b75dea6c1d75188.zip"},
    
    {"j99a", "http://appldnld.apple.com/WWDC_2016/iOS10Seed1/031-62927-20160613-DE4B8F18-2D91-11E6-B7F0-E2A2B96A614B/com_apple_MobileAsset_SoftwareUpdate/bb7e3995fe9da05c5f655123fa3b878a36e6d251.zip"},
    
    
    // iPad Mini
	{"j85", "http://appldnld.apple.com/WWDC_2016/iOS10Seed1/031-62880-20160613-30CF45B4-2D91-11E6-8E27-A79EB96A614B/com_apple_MobileAsset_SoftwareUpdate/dc4348ee70495811f2ccb79a6b19032b957b3ea0.zip"},
    
    {"j86", "http://appldnld.apple.com/WWDC_2016/iOS10Seed1/031-62864-20160613-30CBAFEE-2D91-11E6-8AA2-959EB96A614B/com_apple_MobileAsset_SoftwareUpdate/7485af5c146b0011daf95ae90e5339ac5d939193.zip"},
    
    {"j87", "http://appldnld.apple.com/WWDC_2016/iOS10Seed1/031-62884-20160613-30D1A9F8-2D91-11E6-A238-AD9EB96A614B/com_apple_MobileAsset_SoftwareUpdate/eb363ace0a83dd02aabc43f0e3a343afef7a82c9.zip"},
    
    {"j85m", "http://appldnld.apple.com/WWDC_2016/iOS10Seed1/031-62874-20160613-30CEC792-2D91-11E6-9947-A39EB96A614B/com_apple_MobileAsset_SoftwareUpdate/5fab52ba2797651cfd02f284fdf39a6ac524abb4.zip"},
    
    {"j86m", "http://appldnld.apple.com/WWDC_2016/iOS10Seed1/031-62889-20160613-30CF226E-2D91-11E6-A826-AE9EB96A614B/com_apple_MobileAsset_SoftwareUpdate/e37a063e67dec5a841a973e92ae0540f9959947c.zip"},
    
    {"j87m", "http://appldnld.apple.com/WWDC_2016/iOS10Seed1/031-62924-20160613-DC061764-2D91-11E6-92A9-CFA2B96A614B/com_apple_MobileAsset_SoftwareUpdate/8ce138d0851e97c18abe0bc15a8d93f249914f3c.zip"},
    
    {"j96", "http://appldnld.apple.com/WWDC_2016/iOS10Seed1/031-62898-20160613-D33D643E-2D91-11E6-8884-CEA1B96A614B/com_apple_MobileAsset_SoftwareUpdate/9d6a71971790019a67f4c1068e8d1865411fbbbf.zip"},
    
    {"j97", "http://appldnld.apple.com/WWDC_2016/iOS10Seed1/031-62928-20160613-E584D050-2D91-11E6-9721-02A3B96A614B/com_apple_MobileAsset_SoftwareUpdate/22f9963b4fdf668a1898003a10cbcdcf68c3d08d.zip"},

    
    // iPhone
    {"n51", "http://appldnld.apple.com/WWDC_2016/iOS10Seed1/031-62882-20160613-30D07B8C-2D91-11E6-A4A4-A99EB96A614B/com_apple_MobileAsset_SoftwareUpdate/9caebbbf1de28005d385b7a4721fa3ae4b2dcaee.zip"},
    
    {"n53", "http://appldnld.apple.com/WWDC_2016/iOS10Seed1/031-62920-20160613-DB23BEC8-2D91-11E6-8FC3-BEA2B96A614B/com_apple_MobileAsset_SoftwareUpdate/7200ba087b9f82133751a03c0e5f7efb3f3607fa.zip"},
    
    {"n56", "http://appldnld.apple.com/WWDC_2016/iOS10Seed1/031-62871-20160613-30CF4E9C-2D91-11E6-8AD9-A19EB96A614B/com_apple_MobileAsset_SoftwareUpdate/ce70a555b1d36898bf48f4c062360989d211847b.zip"},
    
    {"n62", "http://appldnld.apple.com/WWDC_2016/iOS10Seed1/031-62907-20160613-D33D62C2-2D91-11E6-8A2B-EBA1B96A614B/com_apple_MobileAsset_SoftwareUpdate/67eaa45497e9677941b5deb0322990ee45f5eded.zip"},
    
    {"n71", "http://appldnld.apple.com/WWDC_2016/iOS10Seed1/031-62883-20160613-30D67FC8-2D91-11E6-A87D-AB9EB96A614B/com_apple_MobileAsset_SoftwareUpdate/89726bbd8e1ebbb9658961f054a55f64c3fa8d64.zip"},
    
    {"n71m", "http://appldnld.apple.com/WWDC_2016/iOS10Seed1/031-62913-20160613-D6FFAD8E-2D91-11E6-BC26-6EA2B96A614B/com_apple_MobileAsset_SoftwareUpdate/72a76e349c1f6437eb7611ebec7d83e82610c6c9.zip"},
    
    {"n66", "http://appldnld.apple.com/WWDC_2016/iOS10Seed1/031-62895-20160613-D33D6312-2D91-11E6-8A2B-C6A1B96A614B/com_apple_MobileAsset_SoftwareUpdate/65ade8e93639ddd6b74f1e35e316152995e80c97.zip"},
    
    {"n66m", "http://appldnld.apple.com/WWDC_2016/iOS10Seed1/031-62867-20160613-30CBC9D4-2D91-11E6-A860-9A9EB96A614B/com_apple_MobileAsset_SoftwareUpdate/02d0577fa29f263cc4027ac7aaee0f7ce0abf7e8.zip"},
    
    {"n69", "http://appldnld.apple.com/WWDC_2016/iOS10Seed1/031-62919-20160613-D924F01A-2D91-11E6-B1E8-9AA2B96A614B/com_apple_MobileAsset_SoftwareUpdate/e115c891db645b507e5b8894257b98ca16f3472a.zip"},
    
    {"n69u", "http://appldnld.apple.com/WWDC_2016/iOS10Seed1/031-62879-20160613-30CF435C-2D91-11E6-8FCE-A59EB96A614B/com_apple_MobileAsset_SoftwareUpdate/f05a449f8f58b3f4c218d9e8894804e787162633.zip"},
};
#endif