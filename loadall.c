#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// Function prototypes
void display_menu(bool debug_mode);
void load_all_files(bool debug_mode);

// External functions and variables
extern void neo_file_load_hook();
extern int neo_file_num;

int main(int argc, char *argv[]) {
    bool debug_mode = false;

    // Check for debug mode flag
    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "-D") == 0) {
            debug_mode = true;
            break;
        }
    }

    // Display menu and prompt user for input
    display_menu(debug_mode);

    return 0;
}

// Function to display the menu and handle user input
void display_menu(bool debug_mode) {
    char user_input;

    printf("[O]K, (L)oad File, Load All(!), Load File (a)nd Options: ");
    scanf(" %c", &user_input);

    // Check for Load All input
    if (user_input == '!') {
        load_all_files(debug_mode);
    } else {
        printf("Invalid input. Only Load All(!) is supported in this implementation.\n");
    }
}

// Function to load all files
void load_all_files(bool debug_mode) {
    // Loop through the number of files and call the neo_file_load_hook for each
    for (int i = 0; i < neo_file_num; i++) {
        neo_file_load_hook();

        // If in debug mode, print a message when a file is loaded
        if (debug_mode) {
            printf("Debug: File %d loaded.\n", i + 1);
        }
    }

    // If in debug mode, print a message once all files have been loaded
    if (debug_mode) {
        printf("Debug: All files have been loaded.\n");
    }
}
