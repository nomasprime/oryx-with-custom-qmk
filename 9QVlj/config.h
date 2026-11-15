#undef TAPPING_TERM
#define TAPPING_TERM 100

#define USB_SUSPEND_WAKEUP_DELAY 0
#define HOLD_ON_OTHER_KEY_PRESS
#define SERIAL_NUMBER "9QVlj/MaePyL"
#define LAYER_STATE_8BIT
#define HSS(report) host_system_send(record->event.pressed ? report : 0); return false
#define HCS(report) host_consumer_send(record->event.pressed ? report : 0); return false
#define SYSTEM_CONTROL_USAGE_MAXIMUM 0x009B
