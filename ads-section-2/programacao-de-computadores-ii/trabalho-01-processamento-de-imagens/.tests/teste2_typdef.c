// FINS de TESTEs
#define typeof(var) _Generic( (var),\
char: "Char",\
int: "Integer",\
float: "Float",\
char *: "String",\
void *: "Pointer",\
default: "Undefined")