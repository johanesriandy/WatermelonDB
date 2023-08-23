#include "pch.h"
#include "ReactPackageProvider.h"
#if __has_include("ReactPackageProvider.g.cpp")
#include "ReactPackageProvider.g.cpp"
#endif

#include "ReactNativeModule.h"

// NOTE: You must include the headers of your native modules here in
// order for the AddAttributedModules call below to find them.
#include "WMDatabaseBridge.h"

using namespace winrt::Microsoft::ReactNative;

namespace winrt::NozbeWatermelondb::implementation
{

void ReactPackageProvider::CreatePackage(IReactPackageBuilder const &packageBuilder) noexcept
{
    AddAttributedModules(packageBuilder);
}

} // namespace winrt::NozbeWatermelondb::implementation
