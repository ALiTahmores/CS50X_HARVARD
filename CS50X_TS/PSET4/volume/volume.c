// Modifies the volume of an audio file

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

// Number of bytes in .wav header
const int HEADER_SIZE = 44;

int main(int argc, char *argv[])
{
    // Check command-line arguments
    if (argc != 4)
    {
        printf("Usage: ./volume input.wav output.wav factor\n");
        return 1;
    }

    // Open files and determine scaling factor
    FILE *input = fopen(argv[1], "r");
    if (input == NULL)
    {
        printf("Could not open input file.\n");
        return 1;
    }

    FILE *output = fopen(argv[2], "w");
    if (output == NULL)
    {
        printf("Could not open output file.\n");
        fclose(input);
        return 1;
    }

    float factor = atof(argv[3]);

    // Copy header from input file to output file
    uint8_t header[HEADER_SIZE];
    fread(header, HEADER_SIZE, 1, input);
    fwrite(header, HEADER_SIZE, 1, output);

    // Read samples from input file and write updated data to output file
    int16_t sample;
    while (fread(&sample, sizeof(int16_t), 1, input))
    {
        // Scale sample
        int32_t adjusted = sample * factor;

        // Clip values to ensure they stay within the 16-bit range
        if (adjusted > 32767)
        {
            adjusted = 32767;
        }
        else if (adjusted < -32768)
        {
            adjusted = -32768;
        }

        // Write adjusted sample to output
        int16_t output_sample = (int16_t) adjusted;
        fwrite(&output_sample, sizeof(int16_t), 1, output);
    }

    // Close files
    fclose(input);
    fclose(output);

    return 0;
}
