#ifndef binary_expression_trees_H
#define binary_expression_trees_H


#include "shunting_yard.h"
#include "my_c_functions.h"

#define ERROR_DIVISION "Division by zero is not supported"
#define ROOT 0
#define RIGHT 1
#define LEFT 2
#define DECIMAL_BASE 10


typedef struct tree
{
    char *value;
    int use;
    struct tree *left;
    struct tree *right;
} my_tree;

my_tree* node_error(my_tree* node);

int division_error(my_tree* node);

int tree_error(my_tree* expression_tree_root);

int leaves_division(int left, int right, int result);

my_tree **pop_tree_array(my_tree **tree_array, int size);

int leaves_checker(my_tree* node);

int tree_index_evaluation(int tree_index);

my_tree* node_solver(my_tree* node);

void free_tree(my_tree** tree_array, int tree_size, my_tree* root);

my_tree *tree_initializer(char *value);

my_tree* tree_expression_solver(shunting_yard* syd);

int tree_solver(my_tree* expression_tree_root);

char* expression_resolver(char* left_leaf, char* root, char* right_leaf);

my_tree* tree_pointer_finder(my_tree** tree_array, int size);

void leaves_init(my_tree **tree_array, int index);

my_tree **tree_array_initializer(shunting_yard* syd);

#endif