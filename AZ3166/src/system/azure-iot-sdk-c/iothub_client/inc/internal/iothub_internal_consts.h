// Copyright (c) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

#ifndef IOTHUB_INTERNAL_CONST_H
#define IOTHUB_INTERNAL_CONST_H

#ifdef __cplusplus
extern "C"
{
#endif

    #define IOTHUB_API_VERSION "2019-07-01-preview"

    #define SECURITY_INTERFACE_INTERNAL_ID "iothub-interface-internal-id"
    #define SECURITY_INTERFACE_INTERNAL_ID_VALUE "security*azureiot*com^SecurityAgent^1*0*0"
    #define SECURITY_INTERFACE_ID "iothub-interface-id"
    #define SECURITY_INTERFACE_ID_MQTT "ifid"
    #define SECURITY_INTERFACE_ID_VALUE "http://security.azureiot.com/SecurityAgent/1.0.0"
    #define SECURITY_MESSAGE_SCHEMA "iothub-message-schema"
    #define SECURITY_MESSAGE_SCHEMA_VALUE "sevent"

#ifdef __cplusplus
}
#endif

#endif /* IOTHUB_INTERNAL_CONST_H */