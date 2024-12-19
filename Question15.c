#include <stdio.h>
#include <string.h>

void compressString(const char *input, char *output, int index, int count) {
    if (input[index] == '\0') {
        sprintf(output + strlen(output), "%c%d", input[index - 1], count);
        return;
    }
    if (index > 0 && input[index] == input[index - 1]) {
        compressString(input, output, index + 1, count + 1);
    } else {
        if (index > 0) {
            sprintf(output + strlen(output), "%c%d", input[index - 1], count);
        }
        compressString(input, output, index + 1, 1);
    }
}
int main() {
    char input[100], output[200] = "";

    printf("Enter a string: ");
    scanf("%s", input);

    compressString(input, output, 0, 1);

    printf("Compressed string: %s\n", output);
    return 0;
}
