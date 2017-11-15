//
// Copyright (c) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE.md file in the project root for full license information.
//
// speechapi_cxx_todo_intent.h: Temporary header file // TODO: Remove
//

#pragma once
#include <speechapi_cxx_recognizer.h>


namespace CARBON_NAMESPACE_ROOT {
namespace Recognition {
namespace Intent {


class IntentRecognizer : virtual public AsyncRecognizer<int, int>
{
public:

    IntentRecognizer() : AsyncRecognizer(m_parameters) { throw nullptr; };
    virtual ~IntentRecognizer() = default;

    bool IsEnabled() override { throw nullptr; }
    void Enable() override { throw nullptr; }
    void Disable() override { throw nullptr; }
   
    std::future<std::shared_ptr<int>> RecognizeAsync() override { throw nullptr; };
    std::future<void> StartContinuousRecognitionAsync() override { throw nullptr; };
    std::future<void> StopContinuousRecognitionAsync() override { throw nullptr; };

private:

    RecognizerParameters m_parameters;
};


} } }; // CARBON_NAMESPACE_ROOT :: Recognition :: Intent
