/* Nach: An Introductory 4.3BSD IPC Tutorial, S. Sechrest */
/* 03.12.04 / gle */

#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main () {
  pid_t pid;
  int status;
printf( "Hello, my pid is %d\n", getpid() );

  if (fork() == 0) {
    printf ("Child executing \"/bin/date\"\n");
    execl ("/bin/date", "date", 0);
    printf( "Hello I am a child, my pid is %d\n", pid);

    printf ("This should not happen!\n");
  }
  printf ("Parent waiting for child's dead\n");
  printf( "Hello I am a child, my pid is %d\n", pid);
  pid=wait (&status);
  printf ("Parent: Child just died.\n");
  exit(0);
}
