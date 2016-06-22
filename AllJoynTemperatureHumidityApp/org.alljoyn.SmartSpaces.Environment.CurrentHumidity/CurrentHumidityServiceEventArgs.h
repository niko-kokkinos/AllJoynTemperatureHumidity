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

namespace org { namespace alljoyn { namespace SmartSpaces { namespace Environment { namespace CurrentHumidity {

// Methods
// Readable Properties
public ref class CurrentHumidityGetVersionRequestedEventArgs sealed
{
public:
    CurrentHumidityGetVersionRequestedEventArgs(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);

    property Windows::Devices::AllJoyn::AllJoynMessageInfo^ MessageInfo
    {
        Windows::Devices::AllJoyn::AllJoynMessageInfo^ get() { return m_messageInfo; }
    }

    property CurrentHumidityGetVersionResult^ Result
    {
        CurrentHumidityGetVersionResult^ get() { return m_result; }
        void set(_In_ CurrentHumidityGetVersionResult^ value) { m_result = value; }
    }

    Windows::Foundation::Deferral^ GetDeferral();

    static Windows::Foundation::IAsyncOperation<CurrentHumidityGetVersionResult^>^ GetResultAsync(CurrentHumidityGetVersionRequestedEventArgs^ args)
    {
        args->InvokeAllFinished();
        auto t = concurrency::create_task(args->m_tce);
        return concurrency::create_async([t]() -> concurrency::task<CurrentHumidityGetVersionResult^>
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
    concurrency::task_completion_event<CurrentHumidityGetVersionResult^> m_tce;
    std::mutex m_lock;
    Windows::Devices::AllJoyn::AllJoynMessageInfo^ m_messageInfo;
    CurrentHumidityGetVersionResult^ m_result;
};

public ref class CurrentHumidityGetCurrentValueRequestedEventArgs sealed
{
public:
    CurrentHumidityGetCurrentValueRequestedEventArgs(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);

    property Windows::Devices::AllJoyn::AllJoynMessageInfo^ MessageInfo
    {
        Windows::Devices::AllJoyn::AllJoynMessageInfo^ get() { return m_messageInfo; }
    }

    property CurrentHumidityGetCurrentValueResult^ Result
    {
        CurrentHumidityGetCurrentValueResult^ get() { return m_result; }
        void set(_In_ CurrentHumidityGetCurrentValueResult^ value) { m_result = value; }
    }

    Windows::Foundation::Deferral^ GetDeferral();

    static Windows::Foundation::IAsyncOperation<CurrentHumidityGetCurrentValueResult^>^ GetResultAsync(CurrentHumidityGetCurrentValueRequestedEventArgs^ args)
    {
        args->InvokeAllFinished();
        auto t = concurrency::create_task(args->m_tce);
        return concurrency::create_async([t]() -> concurrency::task<CurrentHumidityGetCurrentValueResult^>
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
    concurrency::task_completion_event<CurrentHumidityGetCurrentValueResult^> m_tce;
    std::mutex m_lock;
    Windows::Devices::AllJoyn::AllJoynMessageInfo^ m_messageInfo;
    CurrentHumidityGetCurrentValueResult^ m_result;
};

public ref class CurrentHumidityGetMaxValueRequestedEventArgs sealed
{
public:
    CurrentHumidityGetMaxValueRequestedEventArgs(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);

    property Windows::Devices::AllJoyn::AllJoynMessageInfo^ MessageInfo
    {
        Windows::Devices::AllJoyn::AllJoynMessageInfo^ get() { return m_messageInfo; }
    }

    property CurrentHumidityGetMaxValueResult^ Result
    {
        CurrentHumidityGetMaxValueResult^ get() { return m_result; }
        void set(_In_ CurrentHumidityGetMaxValueResult^ value) { m_result = value; }
    }

    Windows::Foundation::Deferral^ GetDeferral();

    static Windows::Foundation::IAsyncOperation<CurrentHumidityGetMaxValueResult^>^ GetResultAsync(CurrentHumidityGetMaxValueRequestedEventArgs^ args)
    {
        args->InvokeAllFinished();
        auto t = concurrency::create_task(args->m_tce);
        return concurrency::create_async([t]() -> concurrency::task<CurrentHumidityGetMaxValueResult^>
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
    concurrency::task_completion_event<CurrentHumidityGetMaxValueResult^> m_tce;
    std::mutex m_lock;
    Windows::Devices::AllJoyn::AllJoynMessageInfo^ m_messageInfo;
    CurrentHumidityGetMaxValueResult^ m_result;
};

// Writable Properties
} } } } } 
