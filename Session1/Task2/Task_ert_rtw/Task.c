/*
 * File: Task.c
 *
 * Code generated for Simulink model 'Task'.
 *
 * Model version                  : 1.6
 * Simulink Coder version         : 8.14 (R2018a) 06-Feb-2018
 * C/C++ source code generated on : Tue Mar  1 12:34:56 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Task.h"
#include "Task_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_Task_T Task_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Task_T Task_Y;

/* Real-time model */
RT_MODEL_Task_T Task_M_;
RT_MODEL_Task_T *const Task_M = &Task_M_;

/* Model step function */
void Task_step(void)
{
  /* Outport: '<Root>/AND_Output' incorporates:
   *  Inport: '<Root>/First_argument'
   *  Inport: '<Root>/Second_argument'
   *  S-Function (sfix_bitop): '<Root>/Bitwise_AND'
   */
  Task_Y.AND_Output = Task_U.First_argument & Task_U.Second_argument;

  /* Outport: '<Root>/OR_Output' incorporates:
   *  Inport: '<Root>/First_argument'
   *  Inport: '<Root>/Second_argument'
   *  S-Function (sfix_bitop): '<Root>/Bitwise_OR'
   */
  Task_Y.OR_Output = Task_U.First_argument | Task_U.Second_argument;

  /* S-Function (sfix_bitop): '<Root>/Bitwise_XOR' incorporates:
   *  Inport: '<Root>/First_argument'
   *  Inport: '<Root>/Second_argument'
   *  S-Function (sfix_bitop): '<S1>/Bitwise_XOR'
   */
  Task_Y.XOR_Output = Task_U.First_argument ^ Task_U.Second_argument;

  /* Outport: '<Root>/XNOR_Output' incorporates:
   *  S-Function (sfix_bitop): '<S1>/Bitwise_NOT'
   */
  Task_Y.XNOR_Output = ~Task_Y.XOR_Output;

  /* Outport: '<Root>/First_NOT_Output' incorporates:
   *  Inport: '<Root>/First_argument'
   *  S-Function (sfix_bitop): '<Root>/First_argument_Bitwise_NOT'
   */
  Task_Y.First_NOT_Output = ~Task_U.First_argument;

  /* Outport: '<Root>/Second_NOT_Output' incorporates:
   *  Inport: '<Root>/Second_argument'
   *  S-Function (sfix_bitop): '<Root>/Second_argument_Bitwise_NOT'
   */
  Task_Y.Second_NOT_Output = ~Task_U.Second_argument;
}

/* Model initialize function */
void Task_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Task_M, (NULL));

  /* external inputs */
  (void)memset((void *)&Task_U, 0, sizeof(ExtU_Task_T));

  /* external outputs */
  (void) memset((void *)&Task_Y, 0,
                sizeof(ExtY_Task_T));
}

/* Model terminate function */
void Task_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
