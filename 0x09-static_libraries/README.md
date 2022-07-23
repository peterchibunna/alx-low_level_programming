0x09-static_libraries

## HOW TO
1. gcc -c prototypes/*.c  # this compiles the definitions
2. ar -cvq libmy.a *.o  # this creates the static library
3. ar -t libmy.a  # this lists the linked files

## Read more
https://www.systutorials.com/how-to-make-a-static-library-a-on-linux/
