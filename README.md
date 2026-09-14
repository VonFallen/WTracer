**WTracer**

This is a simple C project that reads a text file and counts how many times a specific word appears in it.

The program asks the user for the file name and the word they want to search for. It then reads the file word by word and compares each word with the one provided by the user.
It also removes punctuation and converts the words to uppercase, so words like "Hello", "hello," and "HELLO!" are treated as the same word.

This project was made to practice working with files, strings, functions, and basic C programming concepts.

bash
gcc main.c -o wtracer
./wtracer
