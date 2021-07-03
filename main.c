#include <stdio.h>
#include <fcntl.h>
#include "get_next_line.h"
#define ROW (20)

int main(void)
{
    int fd1, eof;
    int cnt = 0;
    char *line[ROW + 1];

    line[ROW] = NULL;  // 마지막줄 확인용으로 NULL포인터지정
    fd1 = open("test1.txt", O_RDONLY);

    while(&line[cnt] != NULL)
    {
        
        if ((eof = (get_next_line(fd1, &line[cnt]))) <= 0)
            break;
        cnt++;
    }
    
    close(fd1);
    for (int i = 0; i <= cnt; i++)
    {
        printf("%d: %s\n", i, line[i]);
        free(line[i]);
    }
}
