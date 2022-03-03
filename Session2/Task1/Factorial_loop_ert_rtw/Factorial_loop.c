/*
 * File: Factorial_loop.c
 *
 * Code generated for Simulink model 'Factorial_loop'.
 *
 * Model version                  : 1.5
 * Simulink Coder version         : 8.14 (R2018a) 06-Feb-2018
 * C/C++ source code generated on : Fri Mar  4 00:53:59 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Factorial_loop.h"
#include "Factorial_loop_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_Factorial_loop_T Factorial_loop_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Factorial_loop_T Factorial_loop_Y;

/* Real-time model */
RT_MODEL_Factorial_loop_T Factorial_loop_M_;
RT_MODEL_Factorial_loop_T *const Factorial_loop_M = &Factorial_loop_M_;

/* Model step function */
void Factorial_loop_step(void)
{
  int32_T s1_iter;
  real_T UnitDelay_DSTATE;

  /* Outputs for Iterator SubSystem: '<Root>/factorial For loop Subsystem' incorporates:
   *  ForIterator: '<S1>/For Iterator'
   */
  /* InitializeConditions for UnitDelay: '<S1>/Unit Delay' */
  UnitDelay_DSTATE = 1.0;

  /* Inport: '<Root>/num' */
  for (s1_iter = 1; s1_iter <= Factorial_loop_U.num; s1_iter++) {
    /* Outport: '<Root>/factorial' incorporates:
     *  DataTypeConversion: '<S1>/Data Type Conversion'
     *  Product: '<S1>/Multiply'
     *  UnitDelay: '<S1>/Unit Delay'
     */
    Factorial_loop_Y.factorial = UnitDelay_DSTATE * (real_T)s1_iter;

    /* Update for UnitDelay: '<S1>/Unit Delay' incorporates:
     *  Outport: '<Root>/factorial'
     */
    UnitDelay_DSTATE = Factorial_loop_Y.factorial;
  }

  /* End of Inport: '<Root>/num' */
  /* End of Outputs for SubSystem: '<Root>/factorial For loop Subsystem' */
}

/* Model initialize function */
void Factorial_loop_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Factorial_loop_M, (NULL));

  /* external inputs */
  Factorial_loop_U.num = 0;

  /* external outputs */
  Factorial_loop_Y.factorial = 0.0;
}

/* Model terminate function */
void Factorial_loop_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
