// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

#pragma once

#ifdef USE_WINUI3
#include <winrt/Microsoft.UI.Xaml.Controls.h>
namespace winrt::Microsoft::UI::Xaml::Controls {
    using IPasswordBox4 = ::winrt::Microsoft::UI::Xaml::Controls::IPasswordBox;
    using ITextBox6 = ::winrt::Microsoft::UI::Xaml::Controls::ITextBox;
    using IButtonWithFlyout = ::winrt::Microsoft::UI::Xaml::Controls::IButton;
}; // namespace winrt::Microsoft::UI::Xaml::Controls
#else
#include <winrt/Windows.UI.Xaml.Controls.h>
#endif //  USE_WINUI3
