// DIS ESP Servo Layout
#define SERVO1_FB   (34)
#define SERVO1_CTRL (32)
#define SERVO1_CHANNEL LEDC_CHANNEL_0

#define SERVO2_FB   (35)
#define SERVO2_CTRL (33)
#define SERVO2_CHANNEL LEDC_CHANNEL_1

#define SERVO3_FB   (25)
#define SERVO3_CTRL (26)
#define SERVO3_CHANNEL LEDC_CHANNEL_2

#define SERVO4_FB   (27)
#define SERVO4_CTRL (14)
#define SERVO4_CHANNEL LEDC_CHANNEL_3

#define SERVO5_FB   (12)
#define SERVO5_CTRL (13)
#define SERVO5_CHANNEL LEDC_CHANNEL_4

#define SERVO6_FB   (5)
#define SERVO6_CTRL (18)
#define SERVO6_CHANNEL LEDC_CHANNEL_5

#define SERVO7_CTRL (15)
#define SERVO7_CHANNEL LEDC_CHANNEL_6

#define SERVO8_CTRL (4)
#define SERVO8_CHANNEL LEDC_CHANNEL_7

void initControllerBoard();
void mainController();