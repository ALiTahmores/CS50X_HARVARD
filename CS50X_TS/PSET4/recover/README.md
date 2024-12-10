# Recover

## Overview
This program is designed to recover JPEG images from a forensic memory card dump. It demonstrates the use of file I/O, byte-level operations, and pattern recognition in C, as part of Harvard's CS50 course.

## How It Works
The program scans a raw memory card file for JPEG file signatures and reconstructs the images, saving them as separate files. Each JPEG file starts with a unique header pattern, which the program identifies to locate and extract the images.

## Features
- Identifies JPEG files using their header:
