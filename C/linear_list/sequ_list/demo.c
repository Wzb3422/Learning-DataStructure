#include<stdlib.h>
#include<stdio.h>
# define MAX_SIZE 10

typedef int datatype;
typedef struct Node {
  int last;
  datatype Data[MAX_SIZE];
} LNode, *List;

List MakeEmpty ()
{
  List Ptrl;
  Ptrl = (List )malloc(sizeof(LNode));
  Ptrl -> last = -1;
  return Ptrl;
}

int Findnth (int n, List L)
{
  int i = 0;
  while (i <= L -> last && n != L -> Data[i])
  {
    i++;
  }
  if (i > L -> last) {
    return -1;
  } else {
    return i;
  }
}

void InsertOne (datatype data, int index, List L)
{
  // full?
  if (L -> last == MAX_SIZE - 1)
  {
    printf("The list is full");
    return;
  }
  // valid index?
  if (index < 0 || index > MAX_SIZE - 1)
  {
      printf("Invalid index");
      return;
  }
  // insert
  for (int i = L -> last; i >= index; i--)
  {
    L -> Data[i + 1] = L -> Data[i];
  }
  L -> Data[index] = data;
  L -> last++;
  return;
}

void DeleteOne (int index, List L)
{
  // valid index?
  if (index < 0 || index > MAX_SIZE - 1)
  {
      printf("Invalid index");
      return;
  }
  for (int i = index; i <= L -> last; i++)
  {
    L -> Data[i] = L -> Data[i + 1];
  }
  L -> last--;
  return;
}

void PrintList (List L)
{
  for (int i = 0; i <= L -> last; i++)
  {
    printf("%d\n", L -> Data[i]);
  }
}

int main() {
  List list = MakeEmpty();
  InsertOne(1, 0, list);
  InsertOne(2, 0, list);
  InsertOne(4, 0, list);
  PrintList(list);
  printf("删除");
  DeleteOne(0, list);
  PrintList(list);
  return 0;
}