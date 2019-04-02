#include "node.h"

struct node {
  int key;
  Node left;
  Node right;
  int height;
};

int 	get_key (Node node)
{
  if(node != 0)
  {
    return node -> key;
  }
  return 0;
}

Node 	get_left (Node node)
{
  if(node != 0)
  {
    return node -> left;
  }
  return 0;
}

void 	set_left (Node node, Node left_node)
{
  if(node != 0)
  {
    node -> left = left_node;
  }
}

Node 	get_right (Node node)
{
  if(node != 0)
  {
    return node -> right;
  }
  return 0;
}

void 	set_right (Node node, Node right_node)
{
  if(node != 0)
  {
    node -> right = right_node;
  }
}

int 	get_height (Node node)
{
  return 0;
}

void 	set_height (Node node, int height)
{
  if(node != 0)
  {
    if(height > 0)
    {
      node -> height = height;
    }
  }
}

Node 	create_node (int key)
{
  Node new_Node = (Node) malloc(sizeof(Node));
  new_Node -> height = 1;
  return new_Node;
}
