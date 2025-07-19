# 🖼️ ASCII Art Renderer

This is a simple command-line tool that converts grayscale images into ASCII art.

## 🔧 Features

- Converts `.png` or `.jpg` images to `.pgm` (ASCII PGM format)
- Renders the `.pgm` image to ASCII using C
- Minimal dependencies
- Fast and terminal-friendly

---

## 📁 Project Structure

<pre> ascii-art-renderer/ 
├── convert_to_pgm.py 
├── image.pgm 
├── render.c 
└── render </pre>

---

## 🚀 How to Use

### 1. Convert your image to ASCII `.pgm`

Make sure you have Python and `Pillow` installed:

```bash
pip install pillow
```

Then run:

```bash
python convert_to_pgm.py path/to/your/image.jpg
```

### 2. Compile the ASCII renderer

Use gcc to compile the C code:

```bash
gcc render.c -o render
```

### 3. Render the ASCII Art

Use gcc to compile the C code:

```bash
./render
```

This reads image.pgm and prints the ASCII version to the terminal.

### 📸 Example Output

```py
@@@@@@@@@@@@@@%####*++==-::..
@@@@@@@@@@@##**+=--:::......
@@@@@@@##*++=--::::.........
@%%##*+=--:::::.............
```
### 📝 Notes

Only supports ASCII PGM format (P2 magic number).

The character set used is: @%#*+=-:.

Output quality depends on image size and contrast.