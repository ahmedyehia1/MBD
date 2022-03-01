/*
 * File: Task.h
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

#ifndef RTW_HEADER_Task_h_
#define RTW_HEADER_Task_h_
#include <string.h>
#include <stddef.h>
#ifndef Task_COMMON_INCLUDES_
# define Task_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Task_COMMON_INCLUDES_ */

#include "Task_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T first_Argument;               /* '<Root>/first_Argument' */
  real_T second_Argument;              /* '<Root>/second_Argument' */
} ExtU_Task_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Addition_Output;              /* '<Root>/Addition_Output' */
  real_T Subtraction_Output;           /* '<Root>/Subtraction_Output' */
  real_T Multiplication_Output;        /* '<Root>/Multiplication_Output' */
  boolean_T Divide_by_Zero_Flag;       /* '<Root>/Divide_by_Zero_Flag' */
  real_T Division_Output;              /* '<Root>/Division_Output' */
} ExtY_Task_T;

/* Real-time Model Data Structure */
struct tag_RTM_Task_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_Task_T Task_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Task_T Task_Y;

/* Model entry point functions */
extern void Task_initialize(void);
extern void Task_step(void);
extern void Task_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Task_T *const Task_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'Task'
 * '<S1>'   : 'Task/If Action'
 * '<S2>'   : 'Task/else Action'
 */
#endif                                 /* RTW_HEADER_Task_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
