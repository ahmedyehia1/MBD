/*
 * File: Claculator_subsystem.c
 *
 * Code generated for Simulink model 'Claculator_subsystem'.
 *
 * Model version                  : 1.11
 * Simulink Coder version         : 8.14 (R2018a) 06-Feb-2018
 * C/C++ source code generated on : Fri Mar  4 01:11:04 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Claculator_subsystem.h"
#include "Claculator_subsystem_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_Claculator_subsystem_T Claculator_subsystem_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Claculator_subsystem_T Claculator_subsystem_Y;

/* Real-time model */
RT_MODEL_Claculator_subsystem_T Claculator_subsystem_M_;
RT_MODEL_Claculator_subsystem_T *const Claculator_subsystem_M =
  &Claculator_subsystem_M_;

/* Output and update for atomic system: '<Root>/Calculator' */
void Claculator_subsystem_Calculator(real_T rtu_In1, real_T rtu_In2, real_T
  *rty_Out1, real_T *rty_Out2, real_T *rty_Out3, real_T *rty_Out4, boolean_T
  *rty_Out5)
{
  /* Sum: '<S1>/Addition' */
  *rty_Out1 = rtu_In1 + rtu_In2;

  /* Product: '<S1>/Multiplication' */
  *rty_Out3 = rtu_In1 * rtu_In2;

  /* Sum: '<S1>/Subtraction' */
  *rty_Out2 = rtu_In1 - rtu_In2;

  /* If: '<S1>/Less Than or equal 0 checker' incorporates:
   *  Constant: '<S2>/Constant'
   *  Constant: '<S3>/Constant'
   */
  if (rtu_In2 <= 0.0) {
    /* Outputs for IfAction SubSystem: '<S1>/If Action' incorporates:
     *  ActionPort: '<S2>/Action Port'
     */
    *rty_Out5 = true;

    /* End of Outputs for SubSystem: '<S1>/If Action' */
  } else {
    /* Outputs for IfAction SubSystem: '<S1>/else Action' incorporates:
     *  ActionPort: '<S3>/Action Port'
     */
    /* Product: '<S3>/Division' */
    *rty_Out4 = rtu_In1 / rtu_In2;
    *rty_Out5 = false;

    /* End of Outputs for SubSystem: '<S1>/else Action' */
  }

  /* End of If: '<S1>/Less Than or equal 0 checker' */
}

/* Model step function */
void Claculator_subsystem_step(void)
{
  /* Outputs for Atomic SubSystem: '<Root>/Calculator' */

  /* Outport: '<Root>/Divide_by_Zero_Flag' incorporates:
   *  Inport: '<Root>/first_Argument'
   *  Inport: '<Root>/second_Argument'
   *  Outport: '<Root>/Addition_Output'
   *  Outport: '<Root>/Division_Output'
   *  Outport: '<Root>/Multiplication_Output'
   *  Outport: '<Root>/Subtraction_Output'
   */
  Claculator_subsystem_Calculator(Claculator_subsystem_U.first_Argument,
    Claculator_subsystem_U.second_Argument,
    &Claculator_subsystem_Y.Addition_Output,
    &Claculator_subsystem_Y.Subtraction_Output,
    &Claculator_subsystem_Y.Multiplication_Output,
    &Claculator_subsystem_Y.Division_Output,
    &Claculator_subsystem_Y.Divide_by_Zero_Flag);

  /* End of Outputs for SubSystem: '<Root>/Calculator' */
}

/* Model initialize function */
void Claculator_subsystem_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Claculator_subsystem_M, (NULL));

  /* external inputs */
  (void)memset((void *)&Claculator_subsystem_U, 0, sizeof
               (ExtU_Claculator_subsystem_T));

  /* external outputs */
  (void) memset((void *)&Claculator_subsystem_Y, 0,
                sizeof(ExtY_Claculator_subsystem_T));
}

/* Model terminate function */
void Claculator_subsystem_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
