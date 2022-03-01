/*
 * File: Task.c
 *
 * Code generated for Simulink model 'Task'.
 *
 * Model version                  : 1.10
 * Simulink Coder version         : 8.14 (R2018a) 06-Feb-2018
 * C/C++ source code generated on : Tue Mar  1 12:41:29 2022
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
  /* Outport: '<Root>/Addition_Output' incorporates:
   *  Inport: '<Root>/first_Argument'
   *  Inport: '<Root>/second_Argument'
   *  Sum: '<Root>/Addition'
   */
  Task_Y.Addition_Output = Task_U.first_Argument + Task_U.second_Argument;

  /* Outport: '<Root>/Subtraction_Output' incorporates:
   *  Inport: '<Root>/first_Argument'
   *  Inport: '<Root>/second_Argument'
   *  Sum: '<Root>/Subtraction'
   */
  Task_Y.Subtraction_Output = Task_U.first_Argument - Task_U.second_Argument;

  /* Outport: '<Root>/Multiplication_Output' incorporates:
   *  Inport: '<Root>/first_Argument'
   *  Inport: '<Root>/second_Argument'
   *  Product: '<Root>/Multiplication'
   */
  Task_Y.Multiplication_Output = Task_U.first_Argument * Task_U.second_Argument;

  /* If: '<Root>/Less Than or equal 0 checker' incorporates:
   *  Inport: '<Root>/second_Argument'
   */
  if (Task_U.second_Argument <= 0.0) {
    /* Outputs for IfAction SubSystem: '<Root>/If Action' incorporates:
     *  ActionPort: '<S1>/Action Port'
     */
    /* Outport: '<Root>/Divide_by_Zero_Flag' incorporates:
     *  Constant: '<S1>/Constant'
     */
    Task_Y.Divide_by_Zero_Flag = true;

    /* End of Outputs for SubSystem: '<Root>/If Action' */
  } else {
    /* Outputs for IfAction SubSystem: '<Root>/else Action' incorporates:
     *  ActionPort: '<S2>/Action Port'
     */
    /* Outport: '<Root>/Division_Output' incorporates:
     *  Inport: '<Root>/first_Argument'
     *  Product: '<S2>/Division'
     */
    Task_Y.Division_Output = Task_U.first_Argument / Task_U.second_Argument;

    /* Outport: '<Root>/Divide_by_Zero_Flag' incorporates:
     *  Constant: '<S2>/Constant'
     */
    Task_Y.Divide_by_Zero_Flag = false;

    /* End of Outputs for SubSystem: '<Root>/else Action' */
  }

  /* End of If: '<Root>/Less Than or equal 0 checker' */
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
