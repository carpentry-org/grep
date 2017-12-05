#include <core.h>

char String_head(string* s) {
  assert(s != NULL);
  return (*s)[0];
}

string String_tail(string* s) {
  assert(s != NULL);
  int len = strlen(*s);
  assert(len != 0);
  char* news = CARP_MALLOC(len);
  memcpy(news, (*s)+1, len-1);
  news[len-1] = '\0';
  return news;
}
