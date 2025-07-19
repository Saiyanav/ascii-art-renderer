from PIL import Image

# Load and convert to grayscale
img = Image.open("input.jpg").convert("L")

# Resize if needed (optional)
img = img.resize((80, 40))  # Width x Height

# Save as PGM (ASCII, not binary)
with open("image.pgm", "w") as f:
    f.write("P2\n")
    f.write(f"# Converted from input.png\n")
    f.write(f"{img.width} {img.height}\n")
    f.write("255\n")

    pixels = list(img.getdata())
    for i in range(img.height):
        row = pixels[i*img.width:(i+1)*img.width]
        f.write(" ".join(str(p) for p in row) + "\n")
