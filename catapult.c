#define CATAPULT_POSITION 3000

task
catapult_task() {
	while (true) {
		if (vexRT[Btn5D]) {
			catapult(127);
			delay(100);
		}
		else {
			if (SensorValue[catapult_sensor] > CATAPULT_POSITION+300) {
				catapult(127);
			}
			else if (SensorValue[catapult_sensor] > CATAPULT_POSITION) {
				catapult(50);
			}
			else {
				catapult(15);
			}
		}

		delay(20);
	}
}
