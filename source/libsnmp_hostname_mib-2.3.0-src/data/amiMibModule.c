/*
 * Note: this file originally auto-generated by mib2c using
 *        : mib2c.scalar.conf,v 1.7 2003/04/08 14:57:04 dts12 Exp $
 */
#include <stdio.h>

#include <net-snmp/net-snmp-config.h>
#include <net-snmp/net-snmp-includes.h>
#include <net-snmp/agent/net-snmp-agent-includes.h>
#include "hostname.h"
#include "amiMibModule.h"


/** Initializes the amiMibModule module */
void
init_libsnmp_hostname_mib(void)
{
    static oid amiHostname_oid[] = { 1,3,6,1,4,1,20974,554,1 };

  DEBUGMSGTL(("amiMibModule", "Initializing\n"));

    netsnmp_register_scalar(
        netsnmp_create_handler_registration("amiHostname", handle_amiHostname,
                               amiHostname_oid, OID_LENGTH(amiHostname_oid),
                               HANDLER_CAN_RWRITE
        ));
}

#define HOST_NAME_FILE	"/conf/hostname"

int handle_amiHostname(netsnmp_mib_handler *handler,
                          netsnmp_handler_registration *reginfo,
                          netsnmp_agent_request_info   *reqinfo,
                          netsnmp_request_info         *requests)
{
    /* We are never called for a GETNEXT if it's registered as a
       "instance", as it's "magically" handled for us.  */

    /* a instance handler also only hands us one request at a time, so
       we don't need to loop over a list of requests; we'll only get one. */

    char amiData[MAX_HOSTNAME_LEN] = {0};
    if(0)
    {
        handler=handler;    /*-Wextra: Flag added for Compilation*/
	reginfo=reginfo;
    }

	if (reqinfo->mode == MODE_GET)
	{
		
		GetHostName(amiData);
		
        snmp_set_var_typed_value(requests->requestvb, ASN_OCTET_STR,
                                 (u_char *)amiData,	/* a pointer to the scalar's data */
                                 strlen(amiData));	/* length of the data in bytes */
	}
	else if (MODE_IS_SET(reqinfo->mode))
	{
		SetHostName((char *)requests->requestvb->val.string);
	}
	else
	{
		/* we should never get here, so this is a really bad error */
		printf("amiMibModule: error, request mode = %d\n", reqinfo->mode);
		return SNMP_ERR_GENERR;
	}

    return SNMP_ERR_NOERROR;
}
