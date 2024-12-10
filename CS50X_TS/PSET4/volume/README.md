# Volume Modifier

## Overview
This program modifies the volume of an audio file in the `.wav` format. It takes an input `.wav` file, applies a scaling factor to adjust the volume of its audio samples, and writes the modified data to an output `.wav` file. This process preserves the file's header while scaling the amplitude of the audio samples.

## Features
- Reads the **WAV file header** to preserve metadata.
- Adjusts the amplitude of audio samples by a user-specified factor.
- Ensures that scaled audio samples remain within the valid 16-bit range.
- Provides error handling for file operations and command-line arguments.

## How to Use
1. **Compile the Program**  
   Use the following command to compile the program:
   ```bash
   make volume
