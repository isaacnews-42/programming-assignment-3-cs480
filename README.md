# CS480 Assignment-3
- Zakaria Abdullahi -- cssc3101
- Isaac Afram -- cssc3103

# Files #
- main.cpp: Generates a random sequence of cylinder requests, validates user input, and runs each scheduling algorithm.
- fcfs.cpp: Implements the First Come First Served (FCFS) disk scheduling algorithm.
- sstf.cpp: Implements the Shortest Seek Time First (SSTF) disk scheduling algorithm.
- scan.cpp: Implements the SCAN(Elevator) disk scheduling algorithm.
- diskAlgorithms.h: Function declarations for source files.
- Makefile: Builds the executable file simarm.
- README: Project documentation.

# Compilation & Running #
- Compile the project using "make", which produces the executable file "simarm"
- Clean the build using "make clean"
- Run the simulator using "./simarm <positive_sequence_length>"

# Description #
In this assignment, we implemented a disk scheduling simulator that compares three disk arm scheduling algorithms: First Come First Served (FCFS), Shortest Seek Time First (SSTF), and SCAN (Elevator). The program generates a random sequence of cylinder requests between 0 and 999, then executes each algorithm using the same request sequence and reports the total distance traveled by the disk arm. Since the assignment did not specify an initial disk head location, we used a fixed starting position of cylinder 100 for all three algorithms.
Throughout development, we met periodically over Discord to pair program, discuss implementation details, and test our code on both our local machines and the edoras server. Zakaria primarily implemented the SSTF algorithm. Isaac primarily implemented the FCFS algorithm. Both partners pair programmed the SCAN(Elevator) algorithm together and collaborated on debugging, testing, and integrating the final project.
