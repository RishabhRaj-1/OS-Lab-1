#include "types.h"
#include "stat.h"
#include "user.h"

//Here , we set the maximum size of the buffer
const int max_size = 1600;

int main(void)
{
    void *draw_buffer = malloc(max_size); // Creating a buffer with the maximum capacity of max_size.  
    int draw_size = draw(draw_buffer, max_size);    // Calling the system call and storing the image size. 

    // If the size of image is in buffer is greater than max_size , then we print an error message
    if (draw_size == -1){
        // file descriptor 1 is used to print on the standard output i.e (stdout)
        printf(1, "Buffer size is too small\n");
    }
    else {
        printf(1, "%s\n", (char *)draw_buffer);
    }
    return 0;
}

