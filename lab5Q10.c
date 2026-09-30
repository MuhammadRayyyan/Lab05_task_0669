#include <stdio.h>

int main() {

    float accuracy, confidence, modelScore;
    int datasetSize, role, statusFlags;

    int TRAINED = 1;      // 0001
    int VALIDATED = 2;    // 0010
    int APPROVED = 4;     // 0100
    int DEPRECATED = 8;   // 1000

    printf("Enter Accuracy (0-100): ");
    scanf("%f", &accuracy);

    printf("Enter Confidence score (0-100): ");
    scanf("%f", &confidence);

    printf("Enter Dataset size (number of samples): ");
    scanf("%d", &datasetSize);

    printf("Enter User role (1 = Intern, 2 = Engineer, 3 = Admin): ");
    scanf("%d", &role);

    printf("Enter Status flags (integer value): ");
    scanf("%d", &statusFlags);

    float datasetFactor = (float)datasetSize / 1000.0;
    if (datasetFactor > 10.0) {
        datasetFactor = 10.0;
    }

    modelScore = (accuracy * 0.5) + (confidence * 0.3) + (datasetFactor * 2);

    printf("\nModel Score: %.2f\n", modelScore);

    printf("Decision: ");
    if (statusFlags & DEPRECATED) {
        printf("Rejected: model deprecated\n");
    } else if (!(statusFlags & TRAINED)) {
        printf("Rejected: not trained\n");
    } else if (!(statusFlags & VALIDATED)) {
        printf("Rejected: not validated\n");
    } else if (!(statusFlags & APPROVED)) {
        printf("Pending: awaiting approval\n");
    } else if (accuracy < 70 || confidence < 60) {
        printf("Rejected: performance too low\n");
    } else if (datasetSize < 5000) {
        printf("Rejected: dataset too small\n");
    } else if (role == 1) {
        printf("Denied: interns cannot deploy\n");
    } else if (role == 2 && modelScore < 80) {
        printf("Denied: engineer needs higher score\n");
    } else {
        printf("Approved for deployment\n");
    }

    float avgAccConf = (accuracy + confidence) / 2.0;
    if (modelScore > avgAccConf) {
        printf("Model score is above the average of accuracy and confidence.\n");
    } else {
        printf("Model score is NOT above the average of accuracy and confidence.\n");
    }

    printf("\n--- Size of Variables Used ---\n");
    printf("sizeof(accuracy): %zu bytes\n", sizeof(accuracy));
    printf("sizeof(confidence): %zu bytes\n", sizeof(confidence));
    printf("sizeof(datasetSize): %zu bytes\n", sizeof(datasetSize));
    printf("sizeof(role): %zu bytes\n", sizeof(role));
    printf("sizeof(statusFlags): %zu bytes\n", sizeof(statusFlags));
    printf("sizeof(modelScore): %zu bytes\n", sizeof(modelScore));

    return 0;
}