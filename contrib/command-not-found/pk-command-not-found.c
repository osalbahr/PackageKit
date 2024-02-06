#include <glib.h>
#include <unistd.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	FILE *fp = fopen("pk-command-not-found.c", "r");
	int fd = fileno(fp);
	g_spawn_async_with_fds (NULL, argv + 1, NULL, G_SPAWN_SEARCH_PATH, NULL, NULL, NULL,
											fd, STDOUT_FILENO, STDERR_FILENO, NULL);
											// STDIN_FILENO, STDOUT_FILENO, STDERR_FILENO, NULL);
	fclose(fp);
}
