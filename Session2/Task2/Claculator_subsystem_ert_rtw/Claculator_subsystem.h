/*
 * File: Claculator_subsystem.h
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

#ifndef RTW_HEADER_Claculator_subsystem_h_
#define RTW_HEADER_Claculator_subsystem_h_
#include <string.h>
#include <stddef.h>
#ifndef Claculator_subsystem_COMMON_INCLUDES_
# define Claculator_subsystem_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Claculator_subsystem_COMMON_INCLUDES_ */

#include "Claculator_subsystem_types.h"

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
} ExtU_Claculator_subsystem_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Addition_Output;              /* '<Root>/Addition_Output' */
  real_T Subtraction_Output;           /* '<Root>/Subtraction_Output' */
  real_T Multiplication_Output;        /* '<Root>/Multiplication_Output' */
  boolean_T Divide_by_Zero_Flag;       /* '<Root>/Divide_by_Zero_Flag' */
  real_T Division_Output;              /* '<Root>/Division_Output' */
} ExtY_Claculator_subsystem_T;

/* Real-time Model Data Structure */
struct tag_RTM_Claculator_subsystem_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_Claculator_subsystem_T Claculator_subsystem_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Claculator_subsystem_T Claculator_subsystem_Y;

/* Model entry point functions */
extern void Claculator_subsystem_initialize(void);
extern void Claculator_subsystem_step(void);
extern void Claculator_subsystem_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Claculator_subsystem_T *const Claculator_subsystem_M;

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
 * '<Root>' : 'Claculator_subsystem'
 * '<S1>'   : 'Claculator_subsystem/Calculator'
 * '<S2>'   : 'Claculator_subsystem/Calculator/If Action'
 * '<S3>'   : 'Claculator_subsystem/Calculator/else Action'
 */
#endif                                 /* RTW_HEADER_Claculator_subsystem_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
