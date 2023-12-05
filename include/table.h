typedef enum column_type {
    COLUMN_TYPE_INT = 0,  // числа с плавающей точкой
    COLUMN_TYPE_FLOAT = 1,  // четырехбайтовые целые числа
    COLUMN_TYPE_STRING = 2,  // bool
    COLUMN_TYPE_BOOL = 3  // строка
};

typedef struct column {
    column_type column_type;
    int32_t index;
    char * name;
};

typedef union value {
    float float_value;  // числа с плавающей точкой
    int32_t int32_value;  // четырехбайтовые целые числа
    uint8_t bool_value;  // bool
    char * string_value;  // строка
};

typedef struct partition {
    value value;
    column column;
};

typedef struct row {
    partition * partitions;
    size_t size;
};

typedef struct table {
    row * rows;
    column * columns;
    char * name;
    size_t row_size;
    site_t column_size;
};

typedef struct schema {
    table * tables;
    char * name;
    site_t size;
};