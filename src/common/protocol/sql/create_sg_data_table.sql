CREATE TABLE sg_data (
    uid BIGINT UNSIGNED NOT NULL PRIMARY KEY,
    password_hash BIGINT UNSIGNED NOT NULL,
    account CHAR(32),
    delete_flag TINYINT DEFAULT 0,
    update_time TIMESTAMP NOT NULL DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
    reg_time TIMESTAMP NOT NULL,
    player_data BLOB,
    UNIQUE INDEX (uid)
)ENGINE=INNODB DEFAULT CHARSET=UTF8;
