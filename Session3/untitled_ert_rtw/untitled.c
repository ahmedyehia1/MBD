/*
 * File: untitled.c
 *
 * Code generated for Simulink model 'untitled'.
 *
 * Model version                  : 1.8
 * Simulink Coder version         : 8.14 (R2018a) 06-Feb-2018
 * C/C++ source code generated on : Tue Apr  5 23:33:20 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "untitled.h"
#include "untitled_private.h"

/* Named constants for Chart: '<Root>/Traffic Light' */
#define untitled_IN_GreenState         ((uint8_T)1U)
#define untitled_IN_NO_ACTIVE_CHILD    ((uint8_T)0U)
#define untitled_IN_RedState           ((uint8_T)2U)
#define untitled_IN_YellowState        ((uint8_T)3U)

/* Block states (default storage) */
DW_untitled_T untitled_DW;

/* External outputs (root outports fed by signals with default storage) */
ExtY_untitled_T untitled_Y;

/* Real-time model */
RT_MODEL_untitled_T untitled_M_;
RT_MODEL_untitled_T *const untitled_M = &untitled_M_;

/* Model step function */
void untitled_step(void)
{
  uint32_T qY;

  /* Chart: '<Root>/Traffic Light' */
  if (untitled_DW.is_active_c3_untitled == 0U) {
    untitled_DW.is_active_c3_untitled = 1U;
    untitled_DW.is_c3_untitled = untitled_IN_GreenState;
    untitled_DW.Counter = 5U;

    /* Outport: '<Root>/Green' */
    untitled_Y.Green = 1U;
  } else {
    switch (untitled_DW.is_c3_untitled) {
     case untitled_IN_GreenState:
      if (untitled_DW.Counter == 0) {
        /* Outport: '<Root>/Green' */
        untitled_Y.Green = 0U;
        untitled_DW.is_c3_untitled = untitled_IN_YellowState;
        untitled_DW.Counter = 2U;

        /* Outport: '<Root>/Yellow' */
        untitled_Y.Yellow = 1U;
      } else {
        qY = untitled_DW.Counter - /*MW:OvSatOk*/ 1U;
        if (qY > untitled_DW.Counter) {
          qY = 0U;
        }

        untitled_DW.Counter = (uint16_T)qY;
      }
      break;

     case untitled_IN_RedState:
      if (untitled_DW.Counter == 0) {
        /* Outport: '<Root>/Red' */
        untitled_Y.Red = 0U;
        untitled_DW.is_c3_untitled = untitled_IN_GreenState;
        untitled_DW.Counter = 5U;

        /* Outport: '<Root>/Green' */
        untitled_Y.Green = 1U;
      } else {
        qY = untitled_DW.Counter - /*MW:OvSatOk*/ 1U;
        if (qY > untitled_DW.Counter) {
          qY = 0U;
        }

        untitled_DW.Counter = (uint16_T)qY;
      }
      break;

     default:
      if (untitled_DW.Counter == 0) {
        /* Outport: '<Root>/Yellow' */
        untitled_Y.Yellow = 0U;
        untitled_DW.is_c3_untitled = untitled_IN_RedState;
        untitled_DW.Counter = 3U;

        /* Outport: '<Root>/Red' */
        untitled_Y.Red = 1U;
      } else {
        qY = untitled_DW.Counter - /*MW:OvSatOk*/ 1U;
        if (qY > untitled_DW.Counter) {
          qY = 0U;
        }

        untitled_DW.Counter = (uint16_T)qY;
      }
      break;
    }
  }

  /* End of Chart: '<Root>/Traffic Light' */
}

/* Model initialize function */
void untitled_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(untitled_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&untitled_DW, 0,
                sizeof(DW_untitled_T));

  /* external outputs */
  (void) memset((void *)&untitled_Y, 0,
                sizeof(ExtY_untitled_T));

  /* SystemInitialize for Chart: '<Root>/Traffic Light' */
  untitled_DW.is_active_c3_untitled = 0U;
  untitled_DW.is_c3_untitled = untitled_IN_NO_ACTIVE_CHILD;
}

/* Model terminate function */
void untitled_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
