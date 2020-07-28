// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

#pragma once

#include <winrt/Windows.ApplicationModel.Activation.h>

#ifdef USE_WINUI3
#include <winrt/Microsoft.UI.Xaml.h>
namespace activation = winrt::Microsoft::UI::Xaml;
#else
namespace activation = winrt::Windows::ApplicationModel::Activation;
#endif
