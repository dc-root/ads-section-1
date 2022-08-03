#include <mysql.h>
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv) {
    printf("MySQL client ersion: %s", mysql_get_client_info());

    exit(0);
};