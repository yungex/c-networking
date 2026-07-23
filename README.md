# C Networking Practice

Working through C, Linux systems programming, and networking fundamentals.

## hello.c
First step: verifying the toolchain (gcc, gdb, strace) end to end.

Compiled with '-g' for debug symbols, stepped through with gdb ('break', 'run', 'next'), and traced with 'strace' to see the underlying 'write' syscall beneath 'printf'.

## server.c
A basic TCP echo server using the Berkeley sockets API (socket, bind, listen, accept, read, write). Verified end-to-end with a netcat client, traced at the syscall level with 'strace', and stepped through with 'gdb', including inspecting 'client_fd' and the raw contents of the recieve buffer mid-execution.

## Coming next
- DHCP client (packet construction, DISCOVER/OFFER/REQUEST/ACK)
