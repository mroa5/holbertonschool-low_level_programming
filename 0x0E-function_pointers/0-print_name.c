/**
 *
 **
 *
 */
void print_name(char *name, void (*f)(char *))
{
	void (*ptr)(char *);
	ptr = f;
	ptr(name);

}
