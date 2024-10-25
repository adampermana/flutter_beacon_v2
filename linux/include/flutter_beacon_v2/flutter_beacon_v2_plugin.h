#ifndef FLUTTER_PLUGIN_FLUTTER_BEACON_V2_PLUGIN_H_
#define FLUTTER_PLUGIN_FLUTTER_BEACON_V2_PLUGIN_H_

#include <flutter_linux/flutter_linux.h>

G_BEGIN_DECLS

#ifdef FLUTTER_PLUGIN_IMPL
#define FLUTTER_PLUGIN_EXPORT __attribute__((visibility("default")))
#else
#define FLUTTER_PLUGIN_EXPORT
#endif

typedef struct _FlutterBeaconV2Plugin FlutterBeaconV2Plugin;
typedef struct {
  GObjectClass parent_class;
} FlutterBeaconV2PluginClass;

FLUTTER_PLUGIN_EXPORT GType flutter_beacon_v2_plugin_get_type();

FLUTTER_PLUGIN_EXPORT void flutter_beacon_v2_plugin_register_with_registrar(
    FlPluginRegistrar* registrar);

G_END_DECLS

#endif  // FLUTTER_PLUGIN_FLUTTER_BEACON_V2_PLUGIN_H_
