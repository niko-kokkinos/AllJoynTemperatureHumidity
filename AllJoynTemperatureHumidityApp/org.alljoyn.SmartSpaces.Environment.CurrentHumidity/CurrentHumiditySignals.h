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

namespace org { namespace alljoyn { namespace SmartSpaces { namespace Environment { namespace CurrentHumidity {

ref class CurrentHumiditySignals;

public interface class ICurrentHumiditySignals
{
};

public ref class CurrentHumiditySignals sealed : [Windows::Foundation::Metadata::Default] ICurrentHumiditySignals
{
public:
internal:
    void Initialize(_In_ alljoyn_busobject busObject, _In_ alljoyn_sessionid sessionId);

private:
    alljoyn_busobject m_busObject;
    alljoyn_sessionid m_sessionId;


};

} } } } } 
