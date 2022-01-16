# OS-Project-Req-2-4
You can use this link to setup MINIX 3.2.1 and 3.3: http://homepages.cs.ncl.ac.uk/nick.cook/csc2025/minix/createvm.html 

REQUIREMENT 2:

Testing Round Robin, Multi-level feedback queue, and priority based scheduling algorithms:

In MINIX 3.2.1 in the directory /usr/src/include/minix/config.h edit the constants MAX_USER_Q and SCHED_POLICY to choose the scheduling algorithm (there are comments next to both of these constants indicating what number corresponds to each algorithm)

To run the source code while running the MINIX 3.2.1 virtual machine, type the following:

1. cd /usr/src/releasetools
2. make clean
3. make hdboot
4. shutdown

To Test the algorithms type this is the MINIX 3.2.1 virtual machine:
1. cd usr/src/servers/sched/test
2. cc mytest.c -o mytest
3. cc longrun1.c -o long1
4. cc longrun2.c -o long2
5. cc longrun3.c -o long3
6. ./mytest
You will then be able to find the test results in test.txt in the same directory

REQUIREMENT 4:


In MINIX 3.2.1 in the directory /usr/src/include/minix/config.h edit the constant NUMBER_OF_BLOCKS to indicate what is the number of blocks you would like to test. 

To run the source code while running the MINIX 3.2.1 virtual machine, type the following to save changes:

1. cd /usr/src/releasetools
2. make clean
3. make hdboot
4. shutdown

To run the test file, type the following in the MINIX 3.2.1 virtual machine:

1. cd /usr/src/servers/ext2/TestFiles
2. cc TestProgram.c -o out
3. ./out
