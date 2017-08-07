/******************************************************************************
 * (18-578 / 16-778 / 24-778) MECHATRONIC DESIGN
 * TEAM F: [RACER]
 * MEMBERS:
 *          - CHOO, FOO LAI
 *          - EREBOR, TELSON
 *          - FLAREAU, JOSHUA
 *          - KALOUCHE, SIMON
 *          - TAN, NICHOLAS
 *
 * LAST REVISION: 04/03/2015
 *
 * IO pins assignment
 *
 *****************************************************************************/

/*
  Assigned motor/edf numbers for RACER
               90
            (front)
              EDF1
               |
               |
    0  M1 |---------| M2  0
               |
               |
              EDF2
             (back)
              -90
*/

// Assigned pin numbers
// For Motors
#define PIN_MOTOR_1_1 10
#define PIN_MOTOR_1_2 5
#define PIN_MOTOR_2_1 2
#define PIN_MOTOR_2_2 3
// EDFs
#define PIN_EDF_1 11
#define PIN_EDF_2 12
// Switches
#define PIN_IMUSW 40    // Recalibrate IMU
#define PIN_PATHFINDSW 38  // Activate pathfind
#define PIN_EDFSW 36      // Kill switch
// Sensors
#define PIN_IR A7
// LEDs
#define PIN_RED2 53
#define PIN_RED1 51
#define PIN_BLUE 47
#define PIN_GREEN2 49
#define PIN_GREEN1 45
