# XamlStraddle
A library to dual target system XAML and WinUI

## Description
This is a C++ header-only library that allows your app or library to seamlessly target either UWP XAML and WinUI 3. This is achieved via type and namespace aliases.
Currently the library can target **WinUI 3 Preview 2**.

Your app can switch from UWP XAML to WinUI 3 by defining a pre-processor variable `USE_WINUI3`.

The syntax for `packages.config` does not allow runtime conditional behavior, so your project's `packages.config` will have to include WinUI 3 (and WinUI 2 if you use it) always, and then at build time one or the other will be used.


In your msbuild project (vcxproj) file:
```xml
  <ItemDefinitionGroup>
    <!-- Enlighten C++ code about WinUI3 -->
    <ClCompile>
      <PreprocessorDefinitions>USE_WINUI3;%(PreprocessorDefinitions)</PreprocessorDefinitions>
    </ClCompile>
    <!-- Enlighten IDL interfaces about WinUI3 -->
    <Midl>
      <PreprocessorDefinitions>USE_WINUI3;%(PreprocessorDefinitions)</PreprocessorDefinitions>
    </Midl>
  </ItemDefinitionGroup>
```

