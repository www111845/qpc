/*****************************************************************************
* Model: calc1.qm
* File:  ./calc1.h
*
* This code has been generated by QM tool (see state-machine.com/qm).
* DO NOT EDIT THIS FILE MANUALLY. All your changes will be lost.
*
* This program is open source software: you can redistribute it and/or
* modify it under the terms of the GNU General Public License as published
* by the Free Software Foundation.
*
* This program is distributed in the hope that it will be useful, but
* WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
* or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
* for more details.
*****************************************************************************/
/*${.::calc1.h} ............................................................*/
#ifndef calc1_h
#define calc1_h

enum CalcSignals {
    C_SIG = Q_USER_SIG,
    CE_SIG,
    DIGIT_0_SIG,
    DIGIT_1_9_SIG,
    POINT_SIG,
    OPER_SIG,
    EQUALS_SIG,
    OFF_SIG
};


#if ((QP_VERSION < 580) || (QP_VERSION != ((QP_RELEASE^4294967295) % 0x3E8)))
#error qpc version 5.8.0 or higher required
#endif

/*${Events::CalcEvt} .......................................................*/
typedef struct {
/* protected: */
    QEvt super;

/* public: */
    uint8_t key_code;
} CalcEvt;

/*${SMs::Calc_ctor} ........................................................*/
void Calc_ctor(void);


extern QMsm * const the_calc;  /* "opaque" pointer to calculator MSM */

#endif /* calc1_h */
