/*
 * File: Factorial_function.c
 *
 * Code generated for Simulink model 'Factorial_function'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 8.14 (R2018a) 06-Feb-2018
 * C/C++ source code generated on : Fri Mar  4 01:01:45 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Factorial_function.h"
#include "Factorial_function_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_Factorial_function_T Factorial_function_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Factorial_function_T Factorial_function_Y;

/* Real-time model */
RT_MODEL_Factorial_function_T Factorial_function_M_;
RT_MODEL_Factorial_function_T *const Factorial_function_M =
  &Factorial_function_M_;

/* Model step function */
void Factorial_function_step(void)
{
  int32_T it;

  /* MATLAB Function: '<Root>/MATLAB Function' incorporates:
   *  Inport: '<Root>/num'
   */
  Factorial_function_Y.factorial = 1.0;
  for (it = 0; it < (int32_T)Factorial_function_U.num; it++) {
    Factorial_function_Y.factorial *= 1.0 + (real_T)it;
  }

  /* End of MATLAB Function: '<Root>/MATLAB Function' */
}

/* Model initialize function */
void Factorial_function_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Factorial_function_M, (NULL));

  /* external inputs */
  Factorial_function_U.num = 0.0;

  /* external outputs */
  Factorial_function_Y.factorial = 0.0;
}

/* Model terminate function */
void Factorial_function_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
