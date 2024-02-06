#include <glib.h>

int main(int argc, char *argv[])
{
	gint wait_status;
	GError error;
	GError *errorp = &error;

	g_spawn_sync (NULL, argv + 1, NULL, G_SPAWN_SEARCH_PATH, NULL, NULL,
											NULL, NULL, &wait_status, &errorp);
}
