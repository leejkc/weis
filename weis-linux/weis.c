#include <stdio.h>
#include <stdlib.h>

// sudo code --> will probably rewrite most
int main() {
    const char *usb_path = "/mnt/usb/password.txt";
    const char *password = "yourPasswordString";

    FILE *f = fopen(usb_path, "w");
    if (!f) {
        perror("Failed to open file for writing");
        return 1;
    }
    fprintf(f, "%s", password);
    fclose(f);

    printf("Password written to %s\n", usb_path);
    return 0;
}
