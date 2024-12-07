#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    // Check for correct usage
    if (argc != 2)
    {
        printf("Usage: ./recover IMAGE\n");
        return 1;
    }

    // Open memory card file
    FILE *drive = fopen(argv[1], "r");
    if (drive == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }

    // Array to store a 512-byte block (no need for malloc)
    unsigned char temp[512];
    char filename[8]; // For storing "###.jpg"
    int image_count = 0;
    FILE *imgf = NULL; // Pointer for the current image file

    // Read 512-byte chunks until end of card
    while (fread(temp, sizeof(unsigned char), 512, drive) == 512)
    {
        // Check if we've found the start of a new JPEG
        if (temp[0] == 0xff && temp[1] == 0xd8 && temp[2] == 0xff && (temp[3] & 0xf0) == 0xe0)
        {
            // If already writing a JPEG, close the previous file
            if (imgf != NULL)
            {
                fclose(imgf);
            }

            // Create a new filename for the new JPEG
            sprintf(filename, "%03i.jpg", image_count);
            imgf = fopen(filename, "w");
            if (imgf == NULL)
            {
                printf("Could not create image file.\n");
                fclose(drive);
                return 1;
            }

            // Increment image count
            image_count++;
        }

        // If currently writing a JPEG, write the 512-byte block to it
        if (imgf != NULL)
        {
            fwrite(temp, sizeof(unsigned char), 512, imgf);
        }
    }

    // Clean up
    if (imgf != NULL)
    {
        fclose(imgf);
    }
    fclose(drive);

    return 0;
}
