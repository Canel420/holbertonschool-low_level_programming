list_t *add_node(list_t **head, const char *str)
{
	/* Guardar espacio en memoria para el nodo */
	list_t *new_node = new_node = (list_t *)malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL || new_node->next == NULL)
		return (NULL);
	new_node->len = strlen(new_node->str);
	new_node->next = (*head);

	(*head) = new_node;

	return (new_node)

}








typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
