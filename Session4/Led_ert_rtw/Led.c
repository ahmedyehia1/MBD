/*
 * File: Led.c
 *
 * Code generated for Simulink model 'Led'.
 *
 * Model version                  : 1.5
 * Simulink Coder version         : 8.14 (R2018a) 06-Feb-2018
 * C/C++ source code generated on : Mon Apr  4 14:52:11 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Led.h"
#include "Led_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_Led_T Led_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Led_T Led_Y;

/* Real-time model */
RT_MODEL_Led_T Led_M_;
RT_MODEL_Led_T *const Led_M = &Led_M_;

/* Model step function */
void Led_step(void)
{
  /* S-Function (fcncallgen): '<Root>/Function-Call Generator' incorporates:
   *  SubSystem: '<Root>/Function-Call Subsystem'
   */
  /* Outport: '<Root>/Led' incorporates:
   *  Inport: '<Root>/Switch'
   *  Inport: '<S1>/In1'
   */
  Led_Y.Led_j = Led_U.Switch;

  /* End of Outputs for S-Function (fcncallgen): '<Root>/Function-Call Generator' */
}

/* Model initialize function */
void Led_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Led_M, (NULL));

  /* external inputs */
  Led_U.Switch = 0.0;

  /* external outputs */
  Led_Y.Led_j = 0.0;
}

/* Model terminate function */
void Led_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
