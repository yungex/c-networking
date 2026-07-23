#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>

int main(void) {
	int server_fd = socket(AF_INET, SOCK_STREAM, 0);

	struct sockaddr_in addr;
	addr.sin_family = AF_INET;
	addr.sin_addr.s_addr = INADDR_ANY;
	addr.sin_port = htons(8080);

	bind(server_fd, (struct sockaddr *)&addr, sizeof(addr));
	listen(server_fd, 3);

	printf("Listening on port 8080...\n");

	int client_fd = accept(server_fd, NULL, NULL);

	char buffer[1024] = {0};
	read(client_fd, buffer, 1024);
	printf("Received: %s\n", buffer);

	char *reply = "Hello from server\n";
	write(client_fd, reply, strlen(reply));

	close(client_fd);
	close(server_fd);
	return 0;
}
