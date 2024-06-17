#include <stdio.h>
#include <unistd.h> // For usleep function

// Function to clear the console screen
void clearScreen() {
    printf("\033[H\033[J");
}

// Function to print a frame of the animation
void printFrame(const char *frame) {
    clearScreen();
    printf("%s\n", frame);
    usleep(200000); // Delay for 200 milliseconds
}

int main() {
    // Define the frames of the animation
    const char *frames[] = {
        "   +-----------+\n"
        "   |           |\n"
        "   |           |\n"
        "   |           |\n"
        "   +-----------+\n",

        "   +-----------+\n"
        "   | T         |\n"
        "   |           |\n"
        "   |           |\n"
        "   +-----------+\n",

        "   +-----------+\n"
        "   | T I       |\n"
        "   |           |\n"
        "   |           |\n"
        "   +-----------+\n",

        "   +-----------+\n"
        "   | T I C     |\n"
        "   |           |\n"
        "   |           |\n"
        "   +-----------+\n",

        "   +-----------+\n"
        "   | T I C     |\n"
        "   | T         |\n"
        "   |           |\n"
        "   +-----------+\n",

        "   +-----------+\n"
        "   | T I C     |\n"
        "   | T A       |\n"
        "   |           |\n"
        "   +-----------+\n",

        "   +-----------+\n"
        "   | T I C     |\n"
        "   | T A C     |\n"
        "   |           |\n"
        "   +-----------+\n",

        "   +-----------+\n"
        "   | T I C     |\n"
        "   | T A C     |\n"
        "   | T         |\n"
        "   +-----------+\n",

        "   +-----------+\n"
        "   | T I C     |\n"
        "   | T A C     |\n"
        "   | T O       |\n"
        "   +-----------+\n",

        "   +-----------+\n"
        "   | T I C     |\n"
        "   | T A C     |\n"
        "   | T O E     |\n"
        "   +-----------+\n",

        "   +-----------+\n"
        "   | T I C     |\n"
        "   | T A C     |\n"
        "   | T O E     |\n"
        "   |           |\n"
        "   +-----------+\n",

        "   +-----------+\n"
        "   | T I C     |\n"
        "   | T A C     |\n"
        "   | T O E     |\n"
        "   |           |\n"
        "   +-----------+\n"
        "   |   START   |\n",

        "   +-----------+\n"
        "   | T I C     |\n"
        "   | T A C     |\n"
        "   | T O E     |\n"
        "   |           |\n"
        "   +-----------+\n"
        "   |   START   |\n"
        "   |           |\n",

        "   +-----------+\n"
        "   | T I C     |\n"
        "   | T A C     |\n"
        "   | T O E     |\n"
        "   |           |\n"
        "   +-----------+\n"
        "   |   START   |\n"
        "   |           |\n"
        "   |           |\n",

        "   +-----------+\n"
        "   |   T I C   |\n"
        "   |   T A C   |\n"
        "   |   T O E   |\n"
        "   |           |\n"
        "   +-----------+\n"
        "   |   START   |\n"
        "   |           |\n"
        "   | PRESS ANY |\n"
        "   |  KEY TO   |\n"
        "   |   START   |\n"
        "   +-----------+\n"
    };

    // Number of frames
    int numFrames = sizeof(frames) / sizeof(frames[0]);

    // Loop through the frames to create animation
    for (int i = 0; i < numFrames; ++i) {
        printFrame(frames[i]);
    }

    // Hold the final frame until a key is pressed
    getchar();

    return 0;
}

