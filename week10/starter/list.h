
#define MAX_STR_LENGTH 1024

struct list;

// Creates a new struct list and returns a pointer to it.
struct list *create_list();

// ADDING FUNCTIONS //

// Pushes a new node to the head of a given linked list
void push_head(struct list *list, char *value);

// Pushes a new node to the tail of a given linked list
void push_tail(struct list *list, char *value);

// REMOVING FUNCTIONS //

// Pops the node at the head of a given linked list
void pop_front(struct list *list);

// Pops the node at the tail of a given linked list
void pop_back(struct list *list);

// READ-ONLY FUNCTIONS //

// Checks the length of the linked list
int length(struct list *list);

// Returns the data at the head of the given linked list
char *peek_top(struct list *list);

// Returns the data at the `index` node in the given linked list. Returns
// NULL if index not in range.
char *peek_index(struct list *list, int index);

// Prints a given linked list from head to tail
void print_list(struct list *list);
