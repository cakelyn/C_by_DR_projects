//
//  main.c
//  fahr_to_cels
//
//  Created by Katelyn Stamas on 3/26/16.
//  Copyright © 2016 x. All rights reserved.
//

#include <stdio.h>

/* print Celcius-Fahrenheit table */

main ()
{
    int fahr;
    
    printf("Fahrenheit\tCelcius\n");
    
    for (fahr = 0; fahr <= 300; fahr += 20) {
        printf("%6d %10.1f\n", fahr, (5.0/9.0) * (fahr-32));
    }
}