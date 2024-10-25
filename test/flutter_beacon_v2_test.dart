// import 'package:flutter_test/flutter_test.dart';
// import 'package:flutter_beacon_v2/flutter_beacon_v2.dart';
// import 'package:flutter_beacon_v2/flutter_beacon_v2_platform_interface.dart';
// import 'package:flutter_beacon_v2/flutter_beacon_v2_method_channel.dart';
// import 'package:plugin_platform_interface/plugin_platform_interface.dart';
//
// class MockFlutterBeaconV2Platform
//     with MockPlatformInterfaceMixin
//     implements FlutterBeaconV2Platform {
//
//   @override
//   Future<String?> getPlatformVersion() => Future.value('42');
// }
//
// void main() {
//   final FlutterBeaconV2Platform initialPlatform = FlutterBeaconV2Platform.instance;
//
//   test('$MethodChannelFlutterBeaconV2 is the default instance', () {
//     expect(initialPlatform, isInstanceOf<MethodChannelFlutterBeaconV2>());
//   });
//
//   test('getPlatformVersion', () async {
//     FlutterBeaconV2 flutterBeaconV2Plugin = FlutterBeaconV2();
//     MockFlutterBeaconV2Platform fakePlatform = MockFlutterBeaconV2Platform();
//     FlutterBeaconV2Platform.instance = fakePlatform;
//
//     expect(await flutterBeaconV2Plugin.getPlatformVersion(), '42');
//   });
// }
