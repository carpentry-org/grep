#include <core.h>

char String_head(string* s) {
  return (*s)[0];
}

string String_tail(string* s) {
  int len = strlen(*s);
  char* news = CARP_MALLOC(len);
  memcpy(news, (*s)+1, len-1);
  news[len-1] = '\0';
  return news;
}
