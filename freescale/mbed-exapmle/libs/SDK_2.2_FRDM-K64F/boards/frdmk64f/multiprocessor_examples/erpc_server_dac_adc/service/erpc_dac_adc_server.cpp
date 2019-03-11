/*
 * Generated by erpcgen 1.4.0 on Fri Jan 20 08:45:13 2017.
 *
 * AUTOGENERATED - DO NOT EDIT
 */

#include "erpc_dac_adc_server.h"
#include <new>
#include "erpc_port.h"

using namespace erpc;
#if !(__embedded_cplusplus)
using namespace std;
#endif

// Constant variable definitions
const uint8_t StringMaxSize = 11;

//! @brief Function to write struct AdcConfig
static int32_t write_AdcConfig_struct(erpc::Codec * codec, const AdcConfig * data);

//! @brief Function to write struct Vector
static int32_t write_Vector_struct(erpc::Codec * codec, const Vector * data);

// Write struct AdcConfig function implementation
static int32_t write_AdcConfig_struct(erpc::Codec * codec, const AdcConfig * data)
{
    erpc_status_t err = codec->startWriteStruct();
    if (!err)
    {
        err = codec->write(data->vref);
    }

    if (!err)
    {
        err = codec->write(data->atomicSteps);
    }

    if (!err)
    {
        err = codec->endWriteStruct();
    }
    return err;
}

// Write struct Vector function implementation
static int32_t write_Vector_struct(erpc::Codec * codec, const Vector * data)
{
    erpc_status_t err = codec->startWriteStruct();
    if (!err)
    {
        err = codec->write(data->A_x);
    }

    if (!err)
    {
        err = codec->write(data->A_y);
    }

    if (!err)
    {
        err = codec->write(data->A_z);
    }

    if (!err)
    {
        err = codec->write(data->M_x);
    }

    if (!err)
    {
        err = codec->write(data->M_y);
    }

    if (!err)
    {
        err = codec->write(data->M_z);
    }

    if (!err)
    {
        err = codec->endWriteStruct();
    }
    return err;
}


// Call the correct server shim based on method unique ID.
erpc_status_t dac_adc_service::handleInvocation(uint32_t methodId, uint32_t sequence, Codec * codec, MessageBufferFactory *messageFactory)
{
    switch (methodId)
    {
        case kdac_adc_adc_get_config_id:
            return adc_get_config_shim(codec, messageFactory, sequence);

        case kdac_adc_convert_dac_adc_id:
            return convert_dac_adc_shim(codec, messageFactory, sequence);

        case kdac_adc_set_led_id:
            return set_led_shim(codec, messageFactory, sequence);

        case kdac_adc_read_senzor_mag_accel_id:
            return read_senzor_mag_accel_shim(codec, messageFactory, sequence);

        case kdac_adc_board_get_name_id:
            return board_get_name_shim(codec, messageFactory, sequence);

        default:
            return kErpcStatus_InvalidArgument;
    }
}

// Server shim for adc_get_config of dac_adc interface.
erpc_status_t dac_adc_service::adc_get_config_shim(Codec * codec, MessageBufferFactory *messageFactory, uint32_t sequence)
{
    erpc_status_t err = kErpcStatus_Success;

    AdcConfig *config = NULL;

    // startReadMessage() was already called before this shim was invoked.

    if (!err)
    {
        err = codec->endReadMessage();
    }

    config = (AdcConfig *) erpc_malloc(sizeof(AdcConfig));
    if (config == NULL)
    {
        err = kErpcStatus_MemoryError;
    }

    // Invoke the actual served function.
    if (!err)
    {
        adc_get_config(config);
    }

    // preparing MessageBuffer for serializing data
    if (!err)
    {
        err = messageFactory->prepareServerBufferForSend(codec->getBuffer());
    }

    // preparing codec for serializing data
    codec->reset();

    // Build response message.
    if (!err)
    {
        err = codec->startWriteMessage(kReplyMessage, kdac_adc_service_id, kdac_adc_adc_get_config_id, sequence);
    }

    if (!err)
    {
        err = write_AdcConfig_struct(codec, config);
    }

    if (!err)
    {
        err = codec->endWriteMessage();
    }

    if (config)
    {
        erpc_free(config);
    }
    return err;
}

// Server shim for convert_dac_adc of dac_adc interface.
erpc_status_t dac_adc_service::convert_dac_adc_shim(Codec * codec, MessageBufferFactory *messageFactory, uint32_t sequence)
{
    erpc_status_t err = kErpcStatus_Success;

    uint32_t numberToConvert;
    uint32_t result;

    // startReadMessage() was already called before this shim was invoked.

    if (!err)
    {
        err = codec->read(&numberToConvert);
    }

    if (!err)
    {
        err = codec->endReadMessage();
    }

    // Invoke the actual served function.
    if (!err)
    {
        convert_dac_adc(numberToConvert, &result);
    }

    // preparing MessageBuffer for serializing data
    if (!err)
    {
        err = messageFactory->prepareServerBufferForSend(codec->getBuffer());
    }

    // preparing codec for serializing data
    codec->reset();

    // Build response message.
    if (!err)
    {
        err = codec->startWriteMessage(kReplyMessage, kdac_adc_service_id, kdac_adc_convert_dac_adc_id, sequence);
    }

    if (!err)
    {
        err = codec->write(result);
    }

    if (!err)
    {
        err = codec->endWriteMessage();
    }

    return err;
}

// Server shim for set_led of dac_adc interface.
erpc_status_t dac_adc_service::set_led_shim(Codec * codec, MessageBufferFactory *messageFactory, uint32_t sequence)
{
    erpc_status_t err = kErpcStatus_Success;

    uint8_t whichLed;

    // startReadMessage() was already called before this shim was invoked.

    if (!err)
    {
        err = codec->read(&whichLed);
    }

    if (!err)
    {
        err = codec->endReadMessage();
    }

    // Invoke the actual served function.
    if (!err)
    {
        set_led(whichLed);
    }

    // preparing MessageBuffer for serializing data
    if (!err)
    {
        err = messageFactory->prepareServerBufferForSend(codec->getBuffer());
    }

    // preparing codec for serializing data
    codec->reset();

    // Build response message.
    if (!err)
    {
        err = codec->startWriteMessage(kReplyMessage, kdac_adc_service_id, kdac_adc_set_led_id, sequence);
    }


    if (!err)
    {
        err = codec->endWriteMessage();
    }

    return err;
}

// Server shim for read_senzor_mag_accel of dac_adc interface.
erpc_status_t dac_adc_service::read_senzor_mag_accel_shim(Codec * codec, MessageBufferFactory *messageFactory, uint32_t sequence)
{
    erpc_status_t err = kErpcStatus_Success;

    Vector *results = NULL;

    // startReadMessage() was already called before this shim was invoked.

    if (!err)
    {
        err = codec->endReadMessage();
    }

    results = (Vector *) erpc_malloc(sizeof(Vector));
    if (results == NULL)
    {
        err = kErpcStatus_MemoryError;
    }

    // Invoke the actual served function.
    if (!err)
    {
        read_senzor_mag_accel(results);
    }

    // preparing MessageBuffer for serializing data
    if (!err)
    {
        err = messageFactory->prepareServerBufferForSend(codec->getBuffer());
    }

    // preparing codec for serializing data
    codec->reset();

    // Build response message.
    if (!err)
    {
        err = codec->startWriteMessage(kReplyMessage, kdac_adc_service_id, kdac_adc_read_senzor_mag_accel_id, sequence);
    }

    if (!err)
    {
        err = write_Vector_struct(codec, results);
    }

    if (!err)
    {
        err = codec->endWriteMessage();
    }

    if (results)
    {
        erpc_free(results);
    }
    return err;
}

// Server shim for board_get_name of dac_adc interface.
erpc_status_t dac_adc_service::board_get_name_shim(Codec * codec, MessageBufferFactory *messageFactory, uint32_t sequence)
{
    erpc_status_t err = kErpcStatus_Success;

    char * name = NULL;

    // startReadMessage() was already called before this shim was invoked.

    if (!err)
    {
        err = codec->endReadMessage();
    }

    name = (char *) erpc_malloc((StringMaxSize + 1) * sizeof(char));
    if (name == NULL)
    {
        err = kErpcStatus_MemoryError;
    }
    name[0]='\0';

    // Invoke the actual served function.
    if (!err)
    {
        board_get_name(name);
    }

    // preparing MessageBuffer for serializing data
    if (!err)
    {
        err = messageFactory->prepareServerBufferForSend(codec->getBuffer());
    }

    // preparing codec for serializing data
    codec->reset();

    // Build response message.
    if (!err)
    {
        err = codec->startWriteMessage(kReplyMessage, kdac_adc_service_id, kdac_adc_board_get_name_id, sequence);
    }

    if (!err)
    {
        if (name)
        {
            err = codec->writeString(strlen(name), name);
        }
        else
        {
            err = kErpcStatus_Fail;
        }
    }

    if (!err)
    {
        err = codec->endWriteMessage();
    }

    if (name)
    {
        erpc_free(name);
    }
    return err;
}
erpc_service_t create_dac_adc_service()
{
    return new (nothrow) dac_adc_service();
}
