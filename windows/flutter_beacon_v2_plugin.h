#ifndef FLUTTER_PLUGIN_FLUTTER_BEACON_V2_PLUGIN_H_
#define FLUTTER_PLUGIN_FLUTTER_BEACON_V2_PLUGIN_H_

#include <flutter/method_channel.h>
#include <flutter/plugin_registrar_windows.h>

#include <memory>

namespace flutter_beacon_v2 {

class FlutterBeaconV2Plugin : public flutter::Plugin {
 public:
  static void RegisterWithRegistrar(flutter::PluginRegistrarWindows *registrar);

  FlutterBeaconV2Plugin();

  virtual ~FlutterBeaconV2Plugin();

  // Disallow copy and assign.
  FlutterBeaconV2Plugin(const FlutterBeaconV2Plugin&) = delete;
  FlutterBeaconV2Plugin& operator=(const FlutterBeaconV2Plugin&) = delete;

  // Called when a method is called on this plugin's channel from Dart.
  void HandleMethodCall(
      const flutter::MethodCall<flutter::EncodableValue> &method_call,
      std::unique_ptr<flutter::MethodResult<flutter::EncodableValue>> result);
};

}  // namespace flutter_beacon_v2

#endif  // FLUTTER_PLUGIN_FLUTTER_BEACON_V2_PLUGIN_H_
