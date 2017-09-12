# Tokenizer Lab

This directory contians:
* Code that creates a simple tokenizer.
* A test program to verify that the inner workings of said code are doing their job.

The test program executes the tokenizer on 5 different test cases provided by the instructor.
It the proceed to loop in which it tokenizes the strings inputed by the user until said user inputs exit.
If the analized string has no tokens, nothing will be printed.

This directory contains the following files:
     mytoc.c: File thatcontains the methods used to tokenize a string.
     mytoc.h: File to be able to link said tokenizer to the test program.
     test.c: The code to test the implementation.
     Makefile: Standard Makefile.

To compile:
~~~
$ make all
~~~

To test it:
~~~
$ make demo
~~~

To delete binaries:
~~~
$ make clean
~~~

Important/interesting(IMO) notes:
*The most trouble I found while coding this was understanding the use of the read() and write() system calls. After a while of trying to understand them, I gave up and used scanf and printf.
*Finding the bug was incredibly difficult as I could not understand why a segmentation fault would occur given my logic. After doubting mypointer handling skills for about 2 days, I learned how to use the GDB, so that's great.