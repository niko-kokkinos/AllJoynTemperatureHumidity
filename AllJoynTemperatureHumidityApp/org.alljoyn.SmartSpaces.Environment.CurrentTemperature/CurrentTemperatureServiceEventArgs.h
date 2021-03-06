//-----------------------------------------------------------------------------
// <auto-generated> 
//   This code was generated by a tool. 
// 
//   Changes to this file may cause incorrect behavior and will be lost if  
//   the code is regenerated.
//
//   Tool: AllJoynCodeGenerator.exe
//
//   This tool is located in the Windows 10 SDK and the Windows 10 AllJoyn 
//   Visual Studio Extension in the Visual Studio Gallery.  
//
//   The generated code should be packaged in a Windows 10 C++/CX Runtime  
//   Component which can be consumed in any UWP-supported language using 
//   APIs that are available in Windows.Devices.AllJoyn.
//
//   Using AllJoynCodeGenerator - Invoke the following command with a valid 
//   Introspection XML file and a writable output directory:
//     AllJoynCodeGenerator -i <INPUT XML FILE> -o <OUTPUT DIRECTORY>
// </auto-generated>
//-----------------------------------------------------------------------------
#pragma once

namespace org { namespace alljoyn { namespace SmartSpaces { namespace Environment { namespace CurrentTemperature {

// Methods
// Readable Properties
public ref class CurrentTemperatureGetVersionRequestedEventArgs sealed
{
public:
    CurrentTemperatureGetVersionRequestedEventArgs(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);

    property Windows::Devices::AllJoyn::AllJoynMessageInfo^ MessageInfo
    {
        Windows::Devices::AllJoyn::AllJoynMessageInfo^ get() { return m_messageInfo; }
    }

    property CurrentTemperatureGetVersionResult^ Result
    {
        CurrentTemperatureGetVersionResult^ get() { return m_result; }
        void set(_In_ CurrentTemperatureGetVersionResult^ value) { m_result = value; }
    }

    Windows::Foundation::Deferral^ GetDeferral();

    static Windows::Foundation::IAsyncOperation<CurrentTemperatureGetVersionResult^>^ GetResultAsync(CurrentTemperatureGetVersionRequestedEventArgs^ args)
    {
        args->InvokeAllFinished();
        auto t = concurrency::create_task(args->m_tce);
        return concurrency::create_async([t]() -> concurrency::task<CurrentTemperatureGetVersionResult^>
        {
            return t;
        });
    }

private:
    void Complete();
    void InvokeAllFinished();
    void InvokeCompleteHandler();

    bool m_raised;
    int m_completionsRequired;
    concurrency::task_completion_event<CurrentTemperatureGetVersionResult^> m_tce;
    std::mutex m_lock;
    Windows::Devices::AllJoyn::AllJoynMessageInfo^ m_messageInfo;
    CurrentTemperatureGetVersionResult^ m_result;
};

public ref class CurrentTemperatureGetCurrentValueRequestedEventArgs sealed
{
public:
    CurrentTemperatureGetCurrentValueRequestedEventArgs(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);

    property Windows::Devices::AllJoyn::AllJoynMessageInfo^ MessageInfo
    {
        Windows::Devices::AllJoyn::AllJoynMessageInfo^ get() { return m_messageInfo; }
    }

    property CurrentTemperatureGetCurrentValueResult^ Result
    {
        CurrentTemperatureGetCurrentValueResult^ get() { return m_result; }
        void set(_In_ CurrentTemperatureGetCurrentValueResult^ value) { m_result = value; }
    }

    Windows::Foundation::Deferral^ GetDeferral();

    static Windows::Foundation::IAsyncOperation<CurrentTemperatureGetCurrentValueResult^>^ GetResultAsync(CurrentTemperatureGetCurrentValueRequestedEventArgs^ args)
    {
        args->InvokeAllFinished();
        auto t = concurrency::create_task(args->m_tce);
        return concurrency::create_async([t]() -> concurrency::task<CurrentTemperatureGetCurrentValueResult^>
        {
            return t;
        });
    }

private:
    void Complete();
    void InvokeAllFinished();
    void InvokeCompleteHandler();

    bool m_raised;
    int m_completionsRequired;
    concurrency::task_completion_event<CurrentTemperatureGetCurrentValueResult^> m_tce;
    std::mutex m_lock;
    Windows::Devices::AllJoyn::AllJoynMessageInfo^ m_messageInfo;
    CurrentTemperatureGetCurrentValueResult^ m_result;
};

public ref class CurrentTemperatureGetPrecisionRequestedEventArgs sealed
{
public:
    CurrentTemperatureGetPrecisionRequestedEventArgs(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);

    property Windows::Devices::AllJoyn::AllJoynMessageInfo^ MessageInfo
    {
        Windows::Devices::AllJoyn::AllJoynMessageInfo^ get() { return m_messageInfo; }
    }

    property CurrentTemperatureGetPrecisionResult^ Result
    {
        CurrentTemperatureGetPrecisionResult^ get() { return m_result; }
        void set(_In_ CurrentTemperatureGetPrecisionResult^ value) { m_result = value; }
    }

    Windows::Foundation::Deferral^ GetDeferral();

    static Windows::Foundation::IAsyncOperation<CurrentTemperatureGetPrecisionResult^>^ GetResultAsync(CurrentTemperatureGetPrecisionRequestedEventArgs^ args)
    {
        args->InvokeAllFinished();
        auto t = concurrency::create_task(args->m_tce);
        return concurrency::create_async([t]() -> concurrency::task<CurrentTemperatureGetPrecisionResult^>
        {
            return t;
        });
    }

private:
    void Complete();
    void InvokeAllFinished();
    void InvokeCompleteHandler();

    bool m_raised;
    int m_completionsRequired;
    concurrency::task_completion_event<CurrentTemperatureGetPrecisionResult^> m_tce;
    std::mutex m_lock;
    Windows::Devices::AllJoyn::AllJoynMessageInfo^ m_messageInfo;
    CurrentTemperatureGetPrecisionResult^ m_result;
};

public ref class CurrentTemperatureGetUpdateMinTimeRequestedEventArgs sealed
{
public:
    CurrentTemperatureGetUpdateMinTimeRequestedEventArgs(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);

    property Windows::Devices::AllJoyn::AllJoynMessageInfo^ MessageInfo
    {
        Windows::Devices::AllJoyn::AllJoynMessageInfo^ get() { return m_messageInfo; }
    }

    property CurrentTemperatureGetUpdateMinTimeResult^ Result
    {
        CurrentTemperatureGetUpdateMinTimeResult^ get() { return m_result; }
        void set(_In_ CurrentTemperatureGetUpdateMinTimeResult^ value) { m_result = value; }
    }

    Windows::Foundation::Deferral^ GetDeferral();

    static Windows::Foundation::IAsyncOperation<CurrentTemperatureGetUpdateMinTimeResult^>^ GetResultAsync(CurrentTemperatureGetUpdateMinTimeRequestedEventArgs^ args)
    {
        args->InvokeAllFinished();
        auto t = concurrency::create_task(args->m_tce);
        return concurrency::create_async([t]() -> concurrency::task<CurrentTemperatureGetUpdateMinTimeResult^>
        {
            return t;
        });
    }

private:
    void Complete();
    void InvokeAllFinished();
    void InvokeCompleteHandler();

    bool m_raised;
    int m_completionsRequired;
    concurrency::task_completion_event<CurrentTemperatureGetUpdateMinTimeResult^> m_tce;
    std::mutex m_lock;
    Windows::Devices::AllJoyn::AllJoynMessageInfo^ m_messageInfo;
    CurrentTemperatureGetUpdateMinTimeResult^ m_result;
};

// Writable Properties
} } } } } 
