@arr      // Load the base address of the array 'arr' into the A register
D=M       // Load the contents of the memory location (base address of 'arr') into the D register

@3        // Load the constant 3 into the A register
A=D+A     // Calculate the address of arr[3] by adding 3 to the current value in D, and store it in A

M=-1      // Set the contents of the memory location whose address is currently in the A register to -1
