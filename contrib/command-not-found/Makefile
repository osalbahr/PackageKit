# https://stackoverflow.com/questions/17360635/glibconfig-h-no-such-file-or-directory
CFLAGS = -Wall `pkg-config --cflags glib-2.0`
LDLIBS = `pkg-config --libs glib-2.0`

pk-command-not-found: pk-command-not-found.c
	$(CC) $(CFLAGS) pk-command-not-found.c -o pk-command-not-found $(LDLIBS)

clean:
	$(RM) pk-command-not-found
