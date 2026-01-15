#include <stdio.h>
#include <math.h>

/**
 *
 *
*/

int main(void)
{
double t;
double lambda;
double N;
double N0;
double percentage;
double half_life;
double total_time;
double time_step;

  printf("\n--- Welcome to the Decay simulator---\n");
  /* asks for inputs initial number of atoms */
  printf("Enter the initial Number of atoms: \n");
  scanf("%lf", &N0);
  printf("You entered: %.2f\n", N0);

  /* asks for the half life in second */
  printf("Enter the half life in second: \n");
  scanf("%lf", &half_life);
  printf("You entered: %.2f\n", half_life);

  /* asks for the total time t in second */
  printf("Enter the total time in second: \n");
  scanf("%lf", &total_time);
  printf("You entered: %.2f\n", total_time);

  /* asks for the time step in second */
  printf("Enter the time step in second: \n");
  scanf("%lf", &time_step);
  printf("You entered: %.2f\n", time_step);

  /* a header */

  printf("Time('s'), Remaining, Percentage(%%) \n");
  printf("----------------------------------------\n");

  /* loop start here */
  lambda = log(2) / half_life;
  for (t = 0; t <= total_time; t+= time_step)
    {
      N = N0 * exp(- lambda * t);
      percentage = (N / N0) * 100;
      printf("%8.2f  %10.2f  %10.2f\n", t, N, percentage);
    }
   
  return (0);
}
