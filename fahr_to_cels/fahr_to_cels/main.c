//
//  main.c
//  fahr_to_cels
//
//  Created by Katelyn Stamas on 3/26/16.
//  Copyright © 2016 x. All rights reserved.
//

#include <stdio.h>

/* print Celcius-Fahrenheit table
    for fahr = 0, 20, ..., 300 */

main ()
{
    float fahr, celsius;
    float lower, upper, step;
    
    lower = 0;      // lower limit of temperature scale
    upper = 300;    // upper limit
    step = 20;      // step size
    
    fahr = lower;
    
    printf("Celcius\tFahrenheit\n");
    
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%5.1f %8.0f\n", celsius, fahr);
        fahr = fahr + step;
    }
}