/*
 * Generated by asn1c-0.9.22.1409 (http://lionet.info/asn1c)
 * From ASN.1 module "MCS-PROTOCOL-3"
 * 	found in "mcs.asn1"
 * 	`asn1c -fnative-types -fskeletons-copy -fcompound-names -gen-PER`
 */

#include <asn_internal.h>

#include "DomainMCSPDU.h"

static asn_per_constraints_t asn_PER_type_DomainMCSPDU_constr_1 = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  6,  6,  0,  43 }	/* (0..43,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_DomainMCSPDU_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DomainMCSPDU, choice.plumbDomainIndication),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PlumbDomainIndication,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"plumbDomainIndication"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DomainMCSPDU, choice.erectDomainRequest),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ErectDomainRequest,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"erectDomainRequest"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DomainMCSPDU, choice.mergeChannelsRequest),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MergeChannelsRequest,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"mergeChannelsRequest"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DomainMCSPDU, choice.mergeChannelsConfirm),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MergeChannelsConfirm,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"mergeChannelsConfirm"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DomainMCSPDU, choice.purgeChannelsIndication),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PurgeChannelsIndication,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"purgeChannelsIndication"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DomainMCSPDU, choice.mergeTokensRequest),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MergeTokensRequest,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"mergeTokensRequest"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DomainMCSPDU, choice.mergeTokensConfirm),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MergeTokensConfirm,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"mergeTokensConfirm"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DomainMCSPDU, choice.purgeTokensIndication),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PurgeTokensIndication,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"purgeTokensIndication"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DomainMCSPDU, choice.disconnectProviderUltimatum),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DisconnectProviderUltimatum,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"disconnectProviderUltimatum"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DomainMCSPDU, choice.rejectMCSPDUUltimatum),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RejectMCSPDUUltimatum,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rejectMCSPDUUltimatum"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DomainMCSPDU, choice.attachUserRequest),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AttachUserRequest,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"attachUserRequest"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DomainMCSPDU, choice.attachUserConfirm),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AttachUserConfirm,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"attachUserConfirm"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DomainMCSPDU, choice.detachUserRequest),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DetachUserRequest,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"detachUserRequest"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DomainMCSPDU, choice.detachUserIndication),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DetachUserIndication,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"detachUserIndication"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DomainMCSPDU, choice.channelJoinRequest),
		(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ChannelJoinRequest,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"channelJoinRequest"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DomainMCSPDU, choice.channelJoinConfirm),
		(ASN_TAG_CLASS_CONTEXT | (15 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ChannelJoinConfirm,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"channelJoinConfirm"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DomainMCSPDU, choice.channelLeaveRequest),
		(ASN_TAG_CLASS_CONTEXT | (16 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ChannelLeaveRequest,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"channelLeaveRequest"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DomainMCSPDU, choice.channelConveneRequest),
		(ASN_TAG_CLASS_CONTEXT | (17 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ChannelConveneRequest,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"channelConveneRequest"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DomainMCSPDU, choice.channelConveneConfirm),
		(ASN_TAG_CLASS_CONTEXT | (18 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ChannelConveneConfirm,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"channelConveneConfirm"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DomainMCSPDU, choice.channelDisbandRequest),
		(ASN_TAG_CLASS_CONTEXT | (19 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ChannelDisbandRequest,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"channelDisbandRequest"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DomainMCSPDU, choice.channelDisbandIndication),
		(ASN_TAG_CLASS_CONTEXT | (20 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ChannelDisbandIndication,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"channelDisbandIndication"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DomainMCSPDU, choice.channelAdmitRequest),
		(ASN_TAG_CLASS_CONTEXT | (21 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ChannelAdmitRequest,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"channelAdmitRequest"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DomainMCSPDU, choice.channelAdmitIndication),
		(ASN_TAG_CLASS_CONTEXT | (22 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ChannelAdmitIndication,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"channelAdmitIndication"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DomainMCSPDU, choice.channelExpelRequest),
		(ASN_TAG_CLASS_CONTEXT | (23 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ChannelExpelRequest,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"channelExpelRequest"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DomainMCSPDU, choice.channelExpelIndication),
		(ASN_TAG_CLASS_CONTEXT | (24 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ChannelExpelIndication,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"channelExpelIndication"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DomainMCSPDU, choice.sendDataRequest),
		(ASN_TAG_CLASS_CONTEXT | (25 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SendDataRequest,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sendDataRequest"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DomainMCSPDU, choice.sendDataIndication),
		(ASN_TAG_CLASS_CONTEXT | (26 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SendDataIndication,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sendDataIndication"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DomainMCSPDU, choice.uniformSendDataRequest),
		(ASN_TAG_CLASS_CONTEXT | (27 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UniformSendDataRequest,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"uniformSendDataRequest"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DomainMCSPDU, choice.uniformSendDataIndication),
		(ASN_TAG_CLASS_CONTEXT | (28 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UniformSendDataIndication,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"uniformSendDataIndication"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DomainMCSPDU, choice.tokenGrabRequest),
		(ASN_TAG_CLASS_CONTEXT | (29 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TokenGrabRequest,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tokenGrabRequest"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DomainMCSPDU, choice.tokenGrabConfirm),
		(ASN_TAG_CLASS_CONTEXT | (30 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TokenGrabConfirm,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tokenGrabConfirm"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DomainMCSPDU, choice.tokenInhibitRequest),
		(ASN_TAG_CLASS_CONTEXT | (31 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TokenInhibitRequest,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tokenInhibitRequest"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DomainMCSPDU, choice.tokenInhibitConfirm),
		(ASN_TAG_CLASS_CONTEXT | (32 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TokenInhibitConfirm,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tokenInhibitConfirm"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DomainMCSPDU, choice.tokenGiveRequest),
		(ASN_TAG_CLASS_CONTEXT | (33 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TokenGiveRequest,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tokenGiveRequest"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DomainMCSPDU, choice.tokenGiveIndication),
		(ASN_TAG_CLASS_CONTEXT | (34 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TokenGiveIndication,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tokenGiveIndication"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DomainMCSPDU, choice.tokenGiveResponse),
		(ASN_TAG_CLASS_CONTEXT | (35 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TokenGiveResponse,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tokenGiveResponse"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DomainMCSPDU, choice.tokenGiveConfirm),
		(ASN_TAG_CLASS_CONTEXT | (36 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TokenGiveConfirm,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tokenGiveConfirm"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DomainMCSPDU, choice.tokenPleaseRequest),
		(ASN_TAG_CLASS_CONTEXT | (37 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TokenPleaseRequest,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tokenPleaseRequest"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DomainMCSPDU, choice.tokenPleaseIndication),
		(ASN_TAG_CLASS_CONTEXT | (38 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TokenPleaseIndication,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tokenPleaseIndication"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DomainMCSPDU, choice.tokenReleaseRequest),
		(ASN_TAG_CLASS_CONTEXT | (39 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TokenReleaseRequest,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tokenReleaseRequest"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DomainMCSPDU, choice.tokenReleaseConfirm),
		(ASN_TAG_CLASS_CONTEXT | (40 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TokenReleaseConfirm,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tokenReleaseConfirm"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DomainMCSPDU, choice.tokenTestRequest),
		(ASN_TAG_CLASS_CONTEXT | (41 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TokenTestRequest,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tokenTestRequest"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DomainMCSPDU, choice.tokenTestConfirm),
		(ASN_TAG_CLASS_CONTEXT | (42 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TokenTestConfirm,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tokenTestConfirm"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DomainMCSPDU, choice.nonStandard),
		(ASN_TAG_CLASS_CONTEXT | (43 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NonStandardPDU,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"nonStandard"
		},
};
static asn_TYPE_tag2member_t asn_MAP_DomainMCSPDU_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* plumbDomainIndication at 704 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* erectDomainRequest at 705 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* mergeChannelsRequest at 706 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* mergeChannelsConfirm at 707 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* purgeChannelsIndication at 708 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* mergeTokensRequest at 709 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* mergeTokensConfirm at 710 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* purgeTokensIndication at 711 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* disconnectProviderUltimatum at 712 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* rejectMCSPDUUltimatum at 713 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* attachUserRequest at 714 */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* attachUserConfirm at 715 */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 }, /* detachUserRequest at 716 */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 13, 0, 0 }, /* detachUserIndication at 717 */
    { (ASN_TAG_CLASS_CONTEXT | (14 << 2)), 14, 0, 0 }, /* channelJoinRequest at 718 */
    { (ASN_TAG_CLASS_CONTEXT | (15 << 2)), 15, 0, 0 }, /* channelJoinConfirm at 719 */
    { (ASN_TAG_CLASS_CONTEXT | (16 << 2)), 16, 0, 0 }, /* channelLeaveRequest at 720 */
    { (ASN_TAG_CLASS_CONTEXT | (17 << 2)), 17, 0, 0 }, /* channelConveneRequest at 721 */
    { (ASN_TAG_CLASS_CONTEXT | (18 << 2)), 18, 0, 0 }, /* channelConveneConfirm at 722 */
    { (ASN_TAG_CLASS_CONTEXT | (19 << 2)), 19, 0, 0 }, /* channelDisbandRequest at 723 */
    { (ASN_TAG_CLASS_CONTEXT | (20 << 2)), 20, 0, 0 }, /* channelDisbandIndication at 724 */
    { (ASN_TAG_CLASS_CONTEXT | (21 << 2)), 21, 0, 0 }, /* channelAdmitRequest at 725 */
    { (ASN_TAG_CLASS_CONTEXT | (22 << 2)), 22, 0, 0 }, /* channelAdmitIndication at 726 */
    { (ASN_TAG_CLASS_CONTEXT | (23 << 2)), 23, 0, 0 }, /* channelExpelRequest at 727 */
    { (ASN_TAG_CLASS_CONTEXT | (24 << 2)), 24, 0, 0 }, /* channelExpelIndication at 728 */
    { (ASN_TAG_CLASS_CONTEXT | (25 << 2)), 25, 0, 0 }, /* sendDataRequest at 729 */
    { (ASN_TAG_CLASS_CONTEXT | (26 << 2)), 26, 0, 0 }, /* sendDataIndication at 730 */
    { (ASN_TAG_CLASS_CONTEXT | (27 << 2)), 27, 0, 0 }, /* uniformSendDataRequest at 731 */
    { (ASN_TAG_CLASS_CONTEXT | (28 << 2)), 28, 0, 0 }, /* uniformSendDataIndication at 732 */
    { (ASN_TAG_CLASS_CONTEXT | (29 << 2)), 29, 0, 0 }, /* tokenGrabRequest at 733 */
    { (ASN_TAG_CLASS_CONTEXT | (30 << 2)), 30, 0, 0 }, /* tokenGrabConfirm at 734 */
    { (ASN_TAG_CLASS_CONTEXT | (31 << 2)), 31, 0, 0 }, /* tokenInhibitRequest at 735 */
    { (ASN_TAG_CLASS_CONTEXT | (32 << 2)), 32, 0, 0 }, /* tokenInhibitConfirm at 736 */
    { (ASN_TAG_CLASS_CONTEXT | (33 << 2)), 33, 0, 0 }, /* tokenGiveRequest at 737 */
    { (ASN_TAG_CLASS_CONTEXT | (34 << 2)), 34, 0, 0 }, /* tokenGiveIndication at 738 */
    { (ASN_TAG_CLASS_CONTEXT | (35 << 2)), 35, 0, 0 }, /* tokenGiveResponse at 739 */
    { (ASN_TAG_CLASS_CONTEXT | (36 << 2)), 36, 0, 0 }, /* tokenGiveConfirm at 740 */
    { (ASN_TAG_CLASS_CONTEXT | (37 << 2)), 37, 0, 0 }, /* tokenPleaseRequest at 741 */
    { (ASN_TAG_CLASS_CONTEXT | (38 << 2)), 38, 0, 0 }, /* tokenPleaseIndication at 742 */
    { (ASN_TAG_CLASS_CONTEXT | (39 << 2)), 39, 0, 0 }, /* tokenReleaseRequest at 743 */
    { (ASN_TAG_CLASS_CONTEXT | (40 << 2)), 40, 0, 0 }, /* tokenReleaseConfirm at 744 */
    { (ASN_TAG_CLASS_CONTEXT | (41 << 2)), 41, 0, 0 }, /* tokenTestRequest at 745 */
    { (ASN_TAG_CLASS_CONTEXT | (42 << 2)), 42, 0, 0 }, /* tokenTestConfirm at 746 */
    { (ASN_TAG_CLASS_CONTEXT | (43 << 2)), 43, 0, 0 } /* nonStandard at 747 */
};
static asn_CHOICE_specifics_t asn_SPC_DomainMCSPDU_specs_1 = {
	sizeof(struct DomainMCSPDU),
	offsetof(struct DomainMCSPDU, _asn_ctx),
	offsetof(struct DomainMCSPDU, present),
	sizeof(((struct DomainMCSPDU *)0)->present),
	asn_MAP_DomainMCSPDU_tag2el_1,
	44,	/* Count of tags in the map */
	0,
	44	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_DomainMCSPDU = {
	"DomainMCSPDU",
	"DomainMCSPDU",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	&asn_PER_type_DomainMCSPDU_constr_1,
	asn_MBR_DomainMCSPDU_1,
	44,	/* Elements count */
	&asn_SPC_DomainMCSPDU_specs_1	/* Additional specs */
};

