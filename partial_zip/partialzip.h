// Originally named partialzip.c but for xcode to properly accept it i had changed to patialzip.h
// Gotta love Xcode . . .

#include "partial_2.h"


void callback(ZipInfo* info, CDFile* file, size_t progress) {
	int percentDone = progress * 100/file->compressedSize;
	printf("\rDownloading: %d%%", percentDone);
}

int fetch(char* url, char* remotefile, char* localpath) {
    
    /*
    // not used any more since we are controlling the values being used
     
    if (argc < 4 || argc > 5)
    {
        printf("usage: %s <ZipURL> <RemotePath> <LocalPath> [numBytes]\n", argv[0]);
        return 1;
    }
    
    char* url = argv[1];
    char* remotefile = argv[2];
    char* localpath = argv[3];
    char* sizeToDownload = argv[4];
    */

    printf("\n\nAfter Passing to fetch()\n\n%s, %s, %s\n\n", url, remotefile, localpath); // just used for debuging to make sure proper values are used after passing

	printf("Initializing download for %s\n", remotefile);

	ZipInfo* info = PartialZipInit(url);
	if(!info)
	{
		printf("Cannot find %s\n", url);
		return 0;
	}

	PartialZipSetProgressCallback(info, callback);

	CDFile* file = PartialZipFindFile(info, remotefile);
	if(!file)
	{
		printf("Cannot find %s in %s\n", remotefile, url);
		return 0;
	}

	unsigned char* data = PartialZipGetFile(info, file);
	int dataLen = file->size;

	PartialZipRelease(info);

	printf("\n");

	data = realloc(data, dataLen + 1);
	data[dataLen] = '\0';

    printf("\n\n %s \n\n ", localpath);
    
	FILE* out = fopen(localpath, "wb");
	if (out == NULL)
	{
		printf("Failed to open %s\n\n\n", localpath);
		return 1;
	}

	fwrite(data, sizeof(char), dataLen, out);

	fclose(out);

	free(data);

	return 0;
}
