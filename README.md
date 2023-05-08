<?xml version="1.0" encoding="UTF-8"?>
<readme>
    <title>Neovim Feature Extension: Load All Issue #1785</title>
    <description>
        <![CDATA[
        This is a sample C code project that demonstrates a Neovim feature extension for loading all files in a given directory. The program displays a menu to the user, prompting for input. When the user inputs "!", the program will load all the files by calling an external function named "neo_file_load_hook()". The program can also be run in debug mode by passing the "-D" flag as a command-line argument. In debug mode, the program prints additional information about the loading process.
        ]]>
    </description>
    <usage>
        <![CDATA[
        1. Compile the program using a C compiler, e.g., gcc:
            gcc -o load_all_files main.c

        2. Run the program:
            ./load_all_files

        3. Run the program in debug mode:
            ./load_all_files -D

        4. When prompted, enter "!" to load all files.
        ]]>
    </usage>
    <dependencies>
        <dependency>
            <name>neo_file_load_hook</name>
            <type>function</type>
            <description>
                <![CDATA[
                External function that loads a single file. This function should be implemented by the user or provided by another module.
                ]]>
            </description>
        </dependency>
        <dependency>
            <name>neo_file_num</name>
            <type>variable</type>
            <description>
                <![CDATA[
                External integer variable that holds the number of files to be loaded. This variable should be set by the user or provided by another module.
                ]]>
            </description>
        </dependency>
    </dependencies>
    <limitations>
        <![CDATA[
        The current implementation only supports the Load All (!) option. Other menu options, such as (L)oad File and Load File (a)nd Options, have not been implemented.
        ]]>
    </limitations>
</readme>
