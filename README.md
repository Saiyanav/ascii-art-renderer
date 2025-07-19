# ASCII Art Renderer

This project converts an image to ASCII art.

## Files

- `convert_to_pgm.py` — Converts a `.png` image to a `.pgm` file (P2 format).
- `render.c` — Reads the `.pgm` and prints ASCII art to terminal.
- `image.pgm` — Sample grayscale PGM file.

## Usage

1. Convert image:
   ```bash
   python convert_to_pgm.py input.png
