typedef struct {
	char name[100], cpf[12], email[200];
	int age;
} tStructData;

typedef struct no {
	tStructData data;

	struct no * nextElement;
	struct no * previousElement;
} tStructPath;

typedef struct list {
	struct no * firstElement;
	struct no * lastElement;
	int sizeList;
} tListDimension;