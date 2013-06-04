/* Copyright(C) 2013, GaInOS-TK by Fan Wang. All rights reserved.
 * Generated by GaInOS-TK Studio at 2013-06-04:21-38-21.
 * Don't Modify it by hand.
 * Email: parai@foxmail.com
 * URL: https://github.com/parai/gainos-tk  && http://hi.baidu.com/parai
 */

#include "PduR.h"

#if PDUR_CANIF_SUPPORT == STD_ON
#include "CanIf.h"
#endif
#if PDUR_CANTP_SUPPORT == STD_ON
#include "CanTp.h"
#endif
#if PDUR_LINIF_SUPPORT == STD_ON
#include "LinIf.h"
#endif
#if PDUR_COM_SUPPORT == STD_ON
#include "Com.h"
#endif
#if PDUR_DCM_SUPPORT == STD_ON
#include "Dcm.h"
#endif
#if PDUR_J1939TP_SUPPORT == STD_ON
#include "J1939Tp.h"
#endif
#if(PDUR_ZERO_COST_OPERATION == STD_OFF)
//Tp Buffers,not understand by parai
const PduRDestPdu_type vPduR_SrcPath0_PduRDestination[] = {
	{
		/* .DataProvision = */ PDUR_NO_PROVISION,
		/* .DestPduId = */ CANTP_TX_vEcuC_Pdu_1,
		/* .TxBufferRef = */ NULL,
		/* .DestModule = */ ARC_PDUR_CANTP
	},
};
const PduRDestPdu_type * const vPduR_SrcPath0_PduRDestinations[] = {
	&vPduR_SrcPath0_PduRDestination[0],/* vPduR_DestPath0 */
	NULL
};

const PduRDestPdu_type vPduR_SrcPath1_PduRDestination[] = {
	{
		/* .DataProvision = */ PDUR_NO_PROVISION,
		/* .DestPduId = */ DCM_RX_vEcuC_Pdu_1,
		/* .TxBufferRef = */ NULL,
		/* .DestModule = */ ARC_PDUR_DCM
	},
};
const PduRDestPdu_type * const vPduR_SrcPath1_PduRDestinations[] = {
	&vPduR_SrcPath1_PduRDestination[0],/* vPduR_DestPath0 */
	NULL
};

const PduRRoutingPath_type vPduR_SrcPath0_PduRRoutingPath = {
	/* .SduLength = */ 8,
	/* .TpChunkSize = */0xDEAD,
	/* .PduRDefaultValue = */{0xDB,NULL},
	/* .SrcPduId = */ DCM_TX_vEcuC_Pdu_1,
	/* .SrcModule =  */ARC_PDUR_DCM,
	/* .PduRDestPdus = */ vPduR_SrcPath0_PduRDestinations
};
const PduRRoutingPath_type vPduR_SrcPath1_PduRRoutingPath = {
	/* .SduLength = */ 8,
	/* .TpChunkSize = */0xDEAD,
	/* .PduRDefaultValue = */{0xDB,NULL},
	/* .SrcPduId = */ CANTP_RX_vEcuC_Pdu_1,
	/* .SrcModule =  */ARC_PDUR_CANTP,
	/* .PduRDestPdus = */ vPduR_SrcPath1_PduRDestinations
};
const PduRRoutingPath_type * const PduRRoutingPaths[] = { 
	&vPduR_SrcPath0_PduRRoutingPath,
	&vPduR_SrcPath1_PduRRoutingPath,
	NULL
};

const PduR_PBConfigType PduR_Config = {
	/* .PduRConfigurationId = */ 0,
	/* .NRoutingPaths = */ 2,
	/* .RoutingPaths = */ PduRRoutingPaths,
	/* .TpBuffers = */ NULL,
	/* .TpRouteBuffers = */ NULL
};

#endif //(PDUR_ZERO_COST_OPERATION == STD_OFF)
