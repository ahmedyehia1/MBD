/*
 * File: Factorial_loop.h
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

#ifndef RTW_HEADER_Factorial_loop_h_
#define RTW_HEADER_Factorial_loop_h_
#include <stddef.h>
#ifndef Factorial_loop_COMMON_INCLUDES_
# define Factorial_loop_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Factorial_loop_COMMON_INCLUDES_ */

#include "Factorial_loop_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with default storage) */
typedef struct {
  int32_T num;                         /* '<Root>/num' */
} ExtU_Factorial_loop_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T factorial;                    /* '<Root>/factorial' */
} ExtY_Factorial_loop_T;

/* Real-time Model Data Structure */
struct tag_RTM_Factorial_loop_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_Factorial_loop_T Factorial_loop_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Factorial_loop_T Factorial_loop_Y;

/* Model entry point functions */
extern void Factorial_loop_initialize(void);
extern void Factorial_loop_step(void);
extern void Factorial_loop_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Factorial_loop_T *const Factorial_loop_M;

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
 * '<Root>' : 'Factorial_loop'
 * '<S1>'   : 'Factorial_loop/factorial For loop Subsystem'
 */
#endif                                 /* RTW_HEADER_Factorial_loop_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
