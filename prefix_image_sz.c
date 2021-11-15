#include <stdio.h>
#include <stdint.h>

int main(int ac, char **v)
{
    char c;
    uint32_t sz = 0;

    if (ac < 3) {
        printf("USAGE: %s <old_image_name> <new_image_name>\n", v[0]);
        return 1;
    }

    FILE *fd = fopen(v[1], "rb");
    if (!fd) {
        return 1;
    }

    fseek(fd, 0, SEEK_END);
    sz = ftell(fd);
    fseek(fd, 0, SEEK_SET);

    printf("Image Size %u bytes\n", sz);

    FILE *bin_fd = fopen(v[2], "wb");
    if (!bin_fd) {
        fclose(fd);
        return 1;
    }

    fwrite(&sz, sizeof(sz), 1, bin_fd);
    sz = sizeof(sz);

    while (fread(&c, sizeof(c), 1, fd)) {
        sz++;
        fwrite(&c, sizeof(c), 1, bin_fd);
    }

    printf("Image Size after prefixing image size %u bytes\n", sz);

    fclose(bin_fd);
    fclose(fd);
    return 0;
}
