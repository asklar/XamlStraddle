// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

#pragma once

#ifdef USE_WINUI3
#include <winrt/Microsoft.UI.Xaml.Controls.Primitives.h>
namespace winrt::Microsoft::UI::Xaml::Controls::Primitives {
using IFlyoutBase5 = ::winrt::Microsoft::UI::Xaml::Controls::Primitives::IFlyoutBase;
using IFlyoutBase6 = ::winrt::Microsoft::UI::Xaml::Controls::Primitives::IFlyoutBase;
}; // namespace winrt::Microsoft::UI::Xaml::Controls::Primitives
#else
#include <winrt/Windows.UI.Xaml.Controls.Primitives.h>
#endif //  USE_WINUI3
