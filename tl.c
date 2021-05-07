#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>
#include<strings.h>
#include<string.h>
#include<ctype.h>
#include <readline/readline.h>
/* A static variable for holding the line. */
static char *line_read = (char *)NULL;
/* Read a string, and return a pointer to it.  Returns NULL on EOF. */
char* rl_gets (char*prompt,char*line_read){
  /* If the buffer has already been allocated, return the memory
     to the free pool. */
  if (line_read){
    free (line_read);
    line_read = (char *)NULL;
  }
  /* Get a line from the user. */
  line_read = readline(prompt);
  /* If the line has any text in it, save it on the history. */
  if (line_read && *line_read)
    add_history(line_read);
  return line_read;
}
long sym_len = 0;
char sym_str[256];
int parse_item(char *s){
  return 0;
}
int parse_list(char *s, char*eol){
  return 0;
}
char*gets2(char*s,int size){
  if(s)free(s);
  if(!size)size=1024;
  char buf[size];
  return strdup(fgets(buf, sizeof(buf), stdin));
}
int main(){
  char *s = gets2(0, 0); 
  //char b[1024], *s = fgets(b, sizeof(b), stdin);
  //char b[1024], *s = gets(b);
  printf("[[%s]]\n", s);

  //line_read = rl_gets(">>", line_read);
  //printf("[[%s]]\n", s);
  //readline
 
}
