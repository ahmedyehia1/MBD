/*
 * File: Factorial_function.h
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

#ifndef RTW_HEADER_Factorial_function_h_
#define RTW_HEADER_Factorial_function_h_
#include <stddef.h>
#ifndef Factorial_function_COMMON_INCLUDES_
# define Factorial_function_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Factorial_function_COMMON_INCLUDES_ */

#include "Factorial_function_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T num;                          /* '<Root>/num' */
} ExtU_Factorial_function_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T factorial;                    /* '<Root>/factorial' */
} ExtY_Factorial_function_T;

/* Real-time Model Data Structure */
struct tag_RTM_Factorial_function_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_Factorial_function_T Factorial_function_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Factorial_function_T Factorial_function_Y;

/* Model entry point functions */
extern void Factorial_function_initialize(void);
extern void Factorial_function_step(void);
extern void Factorial_function_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Factorial_function_T *const Factorial_function_M;

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
 * '<Root>' : 'Factorial_function'
 * '<S1>'   : 'Factorial_function/MATLAB Function'
 */
#endif                                 /* RTW_HEADER_Factorial_function_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
