#include "include/flutter_beacon_v2/flutter_beacon_v2_plugin_c_api.h"

#include <flutter/plugin_registrar_windows.h>

#include "flutter_beacon_v2_plugin.h"

void FlutterBeaconV2PluginCApiRegisterWithRegistrar(
    FlutterDesktopPluginRegistrarRef registrar) {
  flutter_beacon_v2::FlutterBeaconV2Plugin::RegisterWithRegistrar(
      flutter::PluginRegistrarManager::GetInstance()
          ->GetRegistrar<flutter::PluginRegistrarWindows>(registrar));
}
