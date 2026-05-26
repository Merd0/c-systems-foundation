/*
 * Study navigation:
 * Back to Learning Path: https://github.com/Merd0/c-systems-foundation/blob/main/en/LEARNING_PATH.md
 * Next step: https://github.com/Merd0/c-systems-foundation/blob/main/en/modular_design/README.md
 */

#include <errno.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int id;
    char name[32];
    int score;
} StudentRecord;

static int parse_int_field(const char *text, int *out_value) {
    char *end = NULL;
    errno = 0;
    long value = strtol(text, &end, 10);

    if (text == end || *end != '\0' || errno == ERANGE ||
        value < INT_MIN || value > INT_MAX) {
        return 0;
    }

    *out_value = (int)value;
    return 1;
}

static int parse_student_record(char *line, StudentRecord *record) {
    char *id_text = strtok(line, ",");
    char *name_text = strtok(NULL, ",");
    char *score_text = strtok(NULL, ",");
    char *extra = strtok(NULL, ",");

    if (id_text == NULL || name_text == NULL || score_text == NULL || extra != NULL) {
        return 0;
    }

    if (!parse_int_field(id_text, &record->id) ||
        !parse_int_field(score_text, &record->score)) {
        return 0;
    }

    snprintf(record->name, sizeof(record->name), "%s", name_text);
    return 1;
}

int main(void) {
    char line[] = "101,Ada,95";
    StudentRecord record = {0};

    if (!parse_student_record(line, &record)) {
        puts("invalid record");
        return 1;
    }

    printf("%d %s %d\n", record.id, record.name, record.score);
    return 0;
}
