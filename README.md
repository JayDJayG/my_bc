# my_bc

# How to write githuh Readmes
https://docs.github.com/en/github/writing-on-github/getting-started-with-writing-and-formatting-on-github/basic-writing-and-formatting-syntax

# lexer information
https://en.wikipedia.org/wiki/Lexical_analysis

# Parser information
https://en.wikipedia.org/wiki/Parsing


Abstract syntax tree struct
struct ast_node {
  enum { CONSTANT, ADD, SUB, ASSIGNMENT } class;
  union { int                                 value;
          struct { struct ast_node* left;    
                   struct ast_node* right;  } op;
};