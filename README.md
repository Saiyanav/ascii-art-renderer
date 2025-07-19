# 🖼️ ASCII Art Renderer

This is a simple command-line tool that converts grayscale images into ASCII art.

## 🔧 Features

- Converts `.png` or `.jpg` images to `.pgm` (ASCII PGM format)
- Renders the `.pgm` image to ASCII using C
- Minimal dependencies
- Fast and terminal-friendly

---

## 📁 Project Structure

ascii-art-renderer/
├── convert_to_pgm.py # Python script to convert image to PGM
├── image.pgm # Output grayscale image (ASCII PGM format)
├── render.c # C program to render ASCII from PGM
└── render # Compiled executable

---

## 🚀 How to Use

### 1. Convert your image to ASCII `.pgm`

Make sure you have Python and `Pillow` installed:

```bash
pip install pillow

Then run:

python convert_to_pgm.py path/to/your/image.jpg
