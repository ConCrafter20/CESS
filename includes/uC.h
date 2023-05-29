//  uC stands for usefulCode smart i know!


//  ##################
//  #    INCLUDES    #
//  ##################

#include <stdio.h>

int emptyLines(int amount) {

    amount = amount - 1;

    for (int i; i < amount; i++) {
        printf("\n");
    }
}