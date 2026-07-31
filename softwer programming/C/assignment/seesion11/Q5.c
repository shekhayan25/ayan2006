// 5. Draw a simple memory diagram (on paper or using any drawing tool) showing how a pointer references the address of a variable, using the variables from your likes and ptrLikes example; label the variable, pointer, and address.

#include<stdio.h>

void main(){
    int like = 500;
    int *ptrLikes;

    ptrLikes=&like;

}

                        // Variable

                        //     +-----------+
                        // likes |    500    |
                        //     +-----------+
                        // Address = 1000


                        //             ▲
                        //             │
                        //             │ (stores address 1000)
                        //             │

                        //     +-----------+
                        // ptrLikes|  1000   |
                        //     +-----------+
                        // Address = 2000


