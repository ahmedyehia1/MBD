/*
 * File: Grading_system.h
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

#ifndef RTW_HEADER_Grading_system_h_
#define RTW_HEADER_Grading_system_h_
#include <stddef.h>
#ifndef Grading_system_COMMON_INCLUDES_
# define Grading_system_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Grading_system_COMMON_INCLUDES_ */

#include "Grading_system_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with default storage) */
typedef struct {
  int16_T Grade;                       /* '<Root>/Grade' */
} ExtU_Grading_system_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T State;                        /* '<Root>/State' */
} ExtY_Grading_system_T;

/* Real-time Model Data Structure */
struct tag_RTM_Grading_system_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_Grading_system_T Grading_system_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Grading_system_T Grading_system_Y;

/* Model entry point functions */
extern void Grading_system_initialize(void);
extern void Grading_system_step(void);
extern void Grading_system_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Grading_system_T *const Grading_system_M;

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
 * '<Root>' : 'Grading_system'
 * '<S1>'   : 'Grading_system/If Action Subsystem'
 * '<S2>'   : 'Grading_system/If Action Subsystem2'
 */
#endif                                 /* RTW_HEADER_Grading_system_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
