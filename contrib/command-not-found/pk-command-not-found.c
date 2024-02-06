#include <glib.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	g_spawn_async_with_fds (NULL, argv + 1, NULL, G_SPAWN_SEARCH_PATH, NULL, NULL, NULL,
											STDIN_FILENO, STDOUT_FILENO, STDERR_FILENO, NULL);
}
