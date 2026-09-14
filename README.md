**WTracer**

This is a simple C project that reads a text file and counts how many times a specific word appears in it.

The program asks the user for the file name and the word they want to search for. It then reads the file word by word and compares each word with the one provided by the user.
It also removes punctuation and converts the words to uppercase, so words like "Hello", "hello," and "HELLO!" are treated as the same word.

**How to Run**

**Compile:**
git clone https://github.com/VonFallen/WTracer.git
cd WTracer

**RUN**
./wtracer

**Windows (compiled with MinGW/gcc):**

wtracer.exe


**Note:** The text file must be either in the same directory as the executable, or you must provide its relative or absolute path.

Examples:

Same folder: sample.txt
Relative path: ../texts/book.txt
Absolute path: /home/user/Documents/book.txt

This happens because fopen() looks for the file relative to your terminal's current working directory (check it with pwd), not the location of the source code or executable.



