# Neovim Feature Extension: Load All Issue #1785 Sample Proposal

## Description

This is a sample C code project that demonstrates a Neovim feature extension for loading all files in a given directory, or autoloading all files when files suddenly appear on-disk after opening a buffer. The program displays a menu to the user, prompting for input. When the user inputs "!", the program will load all the files by calling an external function named `neo_file_load_hook()`. This function represents the file load function in the neovim codebase. The program can also be run in debug mode by passing the "-D" flag as a command-line argument. In debug mode, the program prints additional information about the loading process.

## Usage

1. Compile the program using a C compiler, e.g., gcc:
    ```
    gcc -o load_all_files main.c
    ```

2. Run the program:
    ```
    ./load_all_files
    ```

3. Run the program in debug mode:
    ```
    ./load_all_files -D
    ```

4. When prompted, enter "!" to load all files.

## Dependencies

- **neo_file_load_hook**: External function that loads a single file. This function should be implemented by the external codebase.

- **neo_file_num**: External integer variable that holds the number of files to be loaded. This variable should be implemented by the external codebase.

## Limitations

The current implementation only supports the Load All (!) option. Other menu options, such as (L)oad File and Load File (a)nd Options, have not been implemented.
