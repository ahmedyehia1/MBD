/*
 * File: Grading_system.c
 *
 * Code generated for Simulink model 'Grading_system'.
 *
 * Model version                  : 1.23
 * Simulink Coder version         : 8.14 (R2018a) 06-Feb-2018
 * C/C++ source code generated on : Fri Mar  4 01:44:45 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Grading_system.h"
#include "Grading_system_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_Grading_system_T Grading_system_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Grading_system_T Grading_system_Y;

/* Real-time model */
RT_MODEL_Grading_system_T Grading_system_M_;
RT_MODEL_Grading_system_T *const Grading_system_M = &Grading_system_M_;

/* Model step function */
void Grading_system_step(void)
{
  /* If: '<Root>/If' incorporates:
   *  Inport: '<Root>/Grade'
   *  Outport: '<Root>/State'
   */
  Grading_system_Y.State = (Grading_system_U.Grade >= 60);
}

/* Model initialize function */
void Grading_system_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Grading_system_M, (NULL));

  /* external inputs */
  Grading_system_U.Grade = 0;

  /* external outputs */
  Grading_system_Y.State = 0.0;
}

/* Model terminate function */
void Grading_system_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
