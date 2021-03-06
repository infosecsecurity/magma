/*
 * @file /check/magma/servers/camel/camel_check.h
 *
 * @brief Camelface test functions.
 */

#ifndef CAMEL_CHECK_H
#define CAMEL_CHECK_H

/// camel_check_network.c
bool_t check_camel_status(client_t *client);
client_t * check_camel_connect(bool_t secure);
int32_t check_camel_folder_id(stringer_t *name, stringer_t *cookie, bool_t secure);
int32_t check_camel_msg_id(uint32_t folder_id, stringer_t *cookie, bool_t secure);
stringer_t* check_camel_json_read(client_t *client, size_t length);
bool_t check_camel_auth_sthread(bool_t secure, stringer_t *errmsg);
bool_t check_camel_basic_sthread(bool_t secure, stringer_t *errmsg);
bool_t check_camel_login(stringer_t *user, stringer_t *pass, stringer_t *cookie, bool_t secure);
stringer_t * check_camel_print(stringer_t *json, stringer_t *cookie, bool_t secure);
bool_t check_camel_json_write(client_t *client, stringer_t *json, stringer_t *cookie, bool_t keep_alive);
bool_t check_camel_send_mail(stringer_t *to, stringer_t *from, stringer_t *subject, stringer_t *body, stringer_t *cookie, bool_t secure);

/// pop_check.c
Suite * suite_check_camel(void);

#endif
