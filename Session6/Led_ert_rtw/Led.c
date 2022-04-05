/*
 * File: Led.c
 *
 * Code generated for Simulink model 'Led'.
 *
 * Model version                  : 1.14
 * Simulink Coder version         : 8.14 (R2018a) 06-Feb-2018
 * C/C++ source code generated on : Mon Apr  4 14:51:03 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Led.h"
#include "Led_private.h"

/* Block signals (default storage) */
B_Led_T Led_B;

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
  /* Chart: '<S1>/Switch controller' incorporates:
   *  Inport: '<Root>/switch'
   */
  /*  check the switch status  */
  if (Led_U.switch_g == 1.0) {
    Led_B.Intermediate_State = 1.0;
  } else {
    if (Led_U.switch_g == 0.0) {
      Led_B.Intermediate_State = 0.0;
    }
  }

  /* End of Chart: '<S1>/Switch controller' */

  /* Chart: '<S1>/Led  controller' */
  /*  check the intermediate status  */
  if (Led_B.Intermediate_State == 1.0) {
    /* Outport: '<Root>/Led' */
    Led_Y.Led_j = 1.0;
  } else {
    if (Led_B.Intermediate_State == 0.0) {
      /* Outport: '<Root>/Led' */
      Led_Y.Led_j = 0.0;
    }
  }

  /* End of Chart: '<S1>/Led  controller' */
  /* End of Outputs for S-Function (fcncallgen): '<Root>/Function-Call Generator' */
}

/* Model initialize function */
void Led_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Led_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &Led_B), 0,
                sizeof(B_Led_T));

  /* external inputs */
  Led_U.switch_g = 0.0;

  /* external outputs */
  Led_Y.Led_j = 0.0;

  /* SystemInitialize for S-Function (fcncallgen): '<Root>/Function-Call Generator' incorporates:
   *  SubSystem: '<Root>/Function-Call Subsystem'
   */
  /* SystemInitialize for Chart: '<S1>/Switch controller' */
  Led_B.Intermediate_State = 0.0;

  /* InitializeConditions for Outport: '<Root>/Led' incorporates:
   *  Chart: '<S1>/Led  controller'
   */
  Led_Y.Led_j = 0.0;

  /* End of SystemInitialize for S-Function (fcncallgen): '<Root>/Function-Call Generator' */
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
