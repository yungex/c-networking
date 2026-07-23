# C Networking Practice

Working through C, Linux systems programming, and networking fundamentals.

## hello.c
First step: verifying the toolchain (gcc, gdb, strace) end to end.

Compiled with '-g' for debug symbols, stepped through with gdb ('break', 'run', 'next'), and traced with 'strace' to see the underlying 'write' syscall beneath 'printf'.

## Coming next
- TCP client/server
- DHCP client (packet construction, DISCOVER/OFFER/REQUEST/ACK)
