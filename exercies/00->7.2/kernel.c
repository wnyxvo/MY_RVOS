extern void uart_init(void);
extern void uart_puts(char *s);
extern char uart_getc();
extern void regression();

void start_kernel(void)
{
    uart_init();
    uart_puts("Hello, RVOS!\n");
    regression();

    while (1)
    {
        
    };
}