#include <stdio.h>
#include <stdlib.h>

const char *ASCII_CHARS = "@%#*+=-:. "; 

int main() {
    FILE *fp = fopen("image.pgm", "r");
    if (!fp) {
        perror("File opening failed");
        return 1;
    }

    char line[256];

    fgets(line, sizeof(line), fp);
    if (line[0] != 'P' || line[1] != '2') {
        printf("Not a valid ASCII PGM file.\n");
        fclose(fp);
        return 1;
    }

    do {
        fgets(line, sizeof(line), fp);
    } while (line[0] == '#');

    int width, height;
    sscanf(line, "%d %d", &width, &height);

    int max_val;
    fscanf(fp, "%d", &max_val); 

    printf("Image loaded: %d x %d, max pixel = %d\n", width, height, max_val);

    int pixel;
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (fscanf(fp, "%d", &pixel) != 1) {
                printf("Failed to read pixel at (%d, %d)\n", i, j);
                break;
            }
            int index = (pixel * 9) / max_val;  
            printf("%c", ASCII_CHARS[index]);
        }
        printf("\n");
    }

    fclose(fp);
    return 0;
}
