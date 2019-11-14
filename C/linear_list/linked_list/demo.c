# include <stddef.h>
# include <stdio.h>

typedef struct LNode *List;
typedef int DataType;

struct LNode
{
  DataType data;
  List next;
  int last;
};

List CreatHead ()
{
  List head;
  head -> next = NULL;
  head -> last = 0;
  return head;
}

int GetLength(List list)
{
  List p;
  int count = 0;
  while (p != NULL)
  {
    p = list -> next;
    count++;
  }
  return count; 
}

List InsertOne (DataType value, int index, List list)
{
  
}

List FindByIndex(int index, List list)
{
  if (index < 0 && index > list -> last)
  {
    printf("Invalid index");
    return NULL;
  }
  for (int i = 0; i <= list -> last; i++)
  { 
    List ret, current;
    if (i == 0) {
      current = list;
    } else {
      current = ret;
    }
  }
  
}

List FindByValue(DataType value, List list)
{

}

int main()
{
  struct LNode list;
  List Ptrl = &list;
  return 0;
}
