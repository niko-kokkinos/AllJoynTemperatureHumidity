//-----------------------------------------------------------------------------
// <auto-generated>
//   This code was generated by a tool.
//
//   Changes to this file may cause incorrect behavior and will be lost if
//   the code is regenerated.
//
//   For more information, see: http://go.microsoft.com/fwlink/?LinkID=623246
// </auto-generated>
//-----------------------------------------------------------------------------
#pragma once

namespace org { namespace alljoyn { namespace SmartSpaces { namespace Environment { namespace CurrentTemperature {

public interface class ICurrentTemperatureService
{
public:
    // Implement this function to handle requests for the value of the Version property.
    //
    // Currently, info will always be null, because no information is available about the requestor.
    Windows::Foundation::IAsyncOperation<CurrentTemperatureGetVersionResult^>^ GetVersionAsync(Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);

    // Implement this function to handle requests for the value of the CurrentValue property.
    //
    // Currently, info will always be null, because no information is available about the requestor.
    Windows::Foundation::IAsyncOperation<CurrentTemperatureGetCurrentValueResult^>^ GetCurrentValueAsync(Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);

    // Implement this function to handle requests for the value of the Precision property.
    //
    // Currently, info will always be null, because no information is available about the requestor.
    Windows::Foundation::IAsyncOperation<CurrentTemperatureGetPrecisionResult^>^ GetPrecisionAsync(Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);

    // Implement this function to handle requests for the value of the UpdateMinTime property.
    //
    // Currently, info will always be null, because no information is available about the requestor.
    Windows::Foundation::IAsyncOperation<CurrentTemperatureGetUpdateMinTimeResult^>^ GetUpdateMinTimeAsync(Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);

};

} } } } } 
