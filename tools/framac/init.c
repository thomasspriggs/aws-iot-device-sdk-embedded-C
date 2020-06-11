#include <string.h>
#include <assert.h>

#include "mqtt.h"
#include "mqtt_state.h"
#include "private/mqtt_internal.h"

MQTTStatus_t MQTT_Init( MQTTContext_t * const pContext,
                        const MQTTTransportInterface_t * const pTransportInterface,
                        const MQTTApplicationCallbacks_t * const pCallbacks,
                        const MQTTFixedBuffer_t * const pNetworkBuffer )
{
    MQTTStatus_t status = MQTTSuccess;

    /* Validate arguments. */
    if( ( pContext == NULL ) || ( pTransportInterface == NULL ) ||
        ( pCallbacks == NULL ) || ( pNetworkBuffer == NULL ) )
    {
        LogError( ( "Argument cannot be NULL: pContext=%p, "
                    "pTransportInterface=%p "
                    "pCallbacks=%p "
                    "pNetworkBuffer=%p.",
                    pContext,
                    pTransportInterface,
                    pCallbacks,
                    pNetworkBuffer ) );
        status = MQTTBadParameter;
    }
    else
    {
        ( void ) memset( pContext, 0x00, sizeof( MQTTContext_t ) );

        pContext->connectStatus = MQTTNotConnected;
        pContext->transportInterface = *pTransportInterface;
        pContext->callbacks = *pCallbacks;
        pContext->networkBuffer = *pNetworkBuffer;

        /* Zero is not a valid packet ID per MQTT spec. Start from 1. */
        pContext->nextPacketId = 1;
    }

    return status;
}

