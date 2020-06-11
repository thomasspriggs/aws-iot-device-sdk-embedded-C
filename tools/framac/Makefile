SOURCES = \
	libraries/standard/mqtt/src/mqtt.c \
	libraries/standard/mqtt/src/mqtt_state.c \
	libraries/standard/mqtt/src/mqtt_lightweight.c \

DEFINES = \
	-Dmqtt_EXPORTS \

INCLUDES = \
	-I/home/ubuntu/mqtt/libraries/standard/mqtt/include \
	-I/home/ubuntu/mqtt/libraries/standard/utilities/include \
	-I/home/ubuntu/mqtt/libraries/standard/mqtt/src \
	-I/home/ubuntu/mqtt/demos/logging-stack \
	-I/home/ubuntu/mqtt/demos/mqtt/mqtt_demo_basic_tls \
	-I/home/ubuntu/mqtt/demos/mqtt/mqtt_demo_lightweight \
	-I/home/ubuntu/mqtt/demos/mqtt/mqtt_demo_plaintext \

CFLAGS = \
	-fPIC \
	-std=gnu90 \


default:
	frama-c -wp init.c -then -report
