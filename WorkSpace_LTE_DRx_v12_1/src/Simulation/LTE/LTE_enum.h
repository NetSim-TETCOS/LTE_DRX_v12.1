/************************************************************************************
 * Copyright (C) 2014
 * TETCOS, Bangalore. India															*

 * Tetcos owns the intellectual property rights in the Product and its content.     *
 * The copying, redistribution, reselling or publication of any or all of the       *
 * Product or its content without express prior written consent of Tetcos is        *
 * prohibited. Ownership and / or any other right relating to the software and all  *
 * intellectual property rights therein shall remain at all times with Tetcos.      *
 * Author:	Shashi Kant Suman														*
 * ---------------------------------------------------------------------------------*/

#include "EnumString.h"

BEGIN_ENUM(LTE_Subevent)
{
	DECL_ENUM_ELEMENT_WITH_VAL(LTE_TXNEXTFRAME,MAC_PROTOCOL_LTE*100),
	DECL_ENUM_ELEMENT(LTE_T300_Expire),//RRC connection retransmit request timer
	DECL_ENUM_ELEMENT(UPDATE_D2D_PEERS),
    //DRX SUBEVENTS
        DECL_ENUM_ELEMENT(DRX_SHORT_SLEEP),
        DECL_ENUM_ELEMENT(DRX_INACTIVITY_TIMER_EXPIRE),
        DECL_ENUM_ELEMENT(DRX_TIMER_ON),
        DECL_ENUM_ELEMENT(DRX_LONG_SLEEP),
        DECL_ENUM_ELEMENT(DRX_CHECK_BUFFER_STATUS),
}
END_ENUM(LTE_Subevent);
