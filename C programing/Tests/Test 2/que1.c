//WAP to calculate electicity bill for 1-50 units - 30rs/unit, for 51-150 units - 40rs/unit, for 151 and above units - 50rs/unit

void main() {
	int units;
	float bill;

	printf("Enter electricity units consumed: ");
	scanf("%d", &units);

	if (units >= 1 && units <= 50) {
		bill = units * 30;
	} else if (units >= 51 && units <= 150) {
		bill = units * 40;
	} else if (units >= 151) {
		bill = units * 50;
	} else {
		bill = 0;
		printf("Invalid units!\n");
	}

	printf("Total Electricity Bill = ?%.2f", bill);


}
