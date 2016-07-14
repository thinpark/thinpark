/*
 * Example Using popen
 */

#include <stdio.h>
#include <unistd.h>

int main()
{
	FILE *stream = popen("sort", "w");
	fprintf(stream, "This is a test.\n");
	fprintf(stream, "Hello, world.\n");
	fprintf(stream, "My dog has fleas.\n");
	fprintf(stream, "This program is great.\n");
	fprintf(stream, "On fish, two fish.\n");
	return pclose(stream);
}
