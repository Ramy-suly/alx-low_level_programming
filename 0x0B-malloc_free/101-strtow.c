#include "main.h"
#include <stdlib.h>

char **strtow(char *str) {
  if (str == NULL || str == "") {
    return NULL;
  }

  // Count the number of words in the string.
  int word_count = 0;
  for (int i = 0; str[i] != '\0'; i++) {
    if (str[i] == ' ') {
      word_count++;
    }
  }

  // Allocate memory for the array of strings.
  char **words = malloc((word_count + 1) * sizeof(char *));
  if (words == NULL) {
    return NULL;
  }

  // Split the string into words.
  int word_index = 0;
  char *current_word = str;
  for (int i = 0; str[i] != '\0'; i++) {
    if (str[i] == ' ') {
      *current_word = '\0';
      words[word_index] = current_word;
      word_index++;
      current_word = str + i + 1;
    }
  }

  // Add the last word to the array.
  *current_word = '\0';
  words[word_index] = current_word;
  words[word_index + 1] = NULL;

  return words;
}
