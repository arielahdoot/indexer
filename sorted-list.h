#ifndef SORTEDLIST_H
#define SORTEDLIST_H

#include <stdio.h>
#include <stdlib.h>
#include "arraylist.h"

typedef char* String;

typedef struct Occurrence{
  int freq;
  char* filename;
 struct  Occurrence* next;
 }Occurrence;

typedef struct OccList{
  Occurrence* head;
}OccList;

/*void addToSL(EList* list, int index, const char* filename, int freq);

void printSL(EList list, int index);

void freeSL(EList list, int index);
*/

int SLInsert(OccList* list, char* filename, char* directory);

int SLRemove(OccList*  list, char* filename, int freq);

Occurrence* createOccurrence(char* filename, char* directory);

int search(OccList* list, char* filename);

//there's something up with the definition of OccCompare, seems not used?

//int OccCompare(Occurrence* occ1, Occurrence* occ2);

//int OccCompare(String filename, int freq, Occurrence * occ);

#endif
