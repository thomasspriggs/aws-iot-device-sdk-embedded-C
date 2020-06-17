/*
 * Insert copyright notice
 */

/**
 * @file MQTT_Init_harness.c
 * @brief Implements the proof harness for MQTT_Init function.
 */

/*
 * Insert project header files that
 *   - include the declaration of the function
 *   - include the types needed to declare function arguments
 */

#include "mqtt.h"

void harness()
{

  MQTTContext_t Context;
  MQTTTransportInterface_t TransportInterface;
  MQTTApplicationCallbacks_t Callbacks;
  MQTTFixedBuffer_t NetworkBuffer;

  MQTT_Init( &Context, &TransportInterface, &Callbacks, &NetworkBuffer );
}
