/* SPDX-License-Identifier: GPL-2.0-only                             */
/* SPDX-FileCopyrightText: Copyright (C) 2022-2024 Manuel Sanmartín  */
/* SPDX-FileContributor: Manuel Sanmartín <manuel.luis at gmail.com> */

#pragma once

enum {
    FAM_HAPROXY_FRONTEND_CURRENT_SESSIONS,
    FAM_HAPROXY_FRONTEND_MAX_SESSIONS,
    FAM_HAPROXY_FRONTEND_LIMIT_SESSION,
    FAM_HAPROXY_FRONTEND_SESSIONS,
    FAM_HAPROXY_FRONTEND_BYTES_IN,
    FAM_HAPROXY_FRONTEND_BYTES_OUT,
    FAM_HAPROXY_FRONTEND_REQUESTS_DENIED,
    FAM_HAPROXY_FRONTEND_RESPONSES_DENIED,
    FAM_HAPROXY_FRONTEND_REQUEST_ERRORS,
    FAM_HAPROXY_FRONTEND_STATUS,
    FAM_HAPROXY_FRONTEND_LIMIT_SESSION_RATE,
    FAM_HAPROXY_FRONTEND_MAX_SESSION_RATE,
    FAM_HAPROXY_FRONTEND_HTTP_RESPONSES,
    FAM_HAPROXY_FRONTEND_HTTP_REQUESTS_RATE_MAX,
    FAM_HAPROXY_FRONTEND_HTTP_REQUESTS,
    FAM_HAPROXY_FRONTEND_HTTP_COMP_BYTES_IN,
    FAM_HAPROXY_FRONTEND_HTTP_COMP_BYTES_OUT,
    FAM_HAPROXY_FRONTEND_HTTP_COMP_BYTES_BYPASSED,
    FAM_HAPROXY_FRONTEND_HTTP_COMP_RESPONSES,
    FAM_HAPROXY_FRONTEND_CONNECTIONS_RATE_MAX,
    FAM_HAPROXY_FRONTEND_CONNECTIONS,
    FAM_HAPROXY_FRONTEND_INTERCEPTED_REQUESTS,
    FAM_HAPROXY_FRONTEND_DENIED_CONNECTIONS,
    FAM_HAPROXY_FRONTEND_DENIED_SESSIONS,
    FAM_HAPROXY_FRONTEND_FAILED_HEADER_REWRITING,
    FAM_HAPROXY_FRONTEND_HTTP_CACHE_LOOKUPS,
    FAM_HAPROXY_FRONTEND_HTTP_CACHE_HITS,
    FAM_HAPROXY_FRONTEND_INTERNAL_ERRORS,
    FAM_HAPROXY_FRONTEND_SSL_SESSIONS,
    FAM_HAPROXY_FRONTEND_SSL_REUSE_SESSIONS,
    FAM_HAPROXY_FRONTEND_SSL_FAILED_HANDSHAKE,
    FAM_HAPROXY_FRONTEND_H2_HEADERS_RCVD,
    FAM_HAPROXY_FRONTEND_H2_DATA_RCVD,
    FAM_HAPROXY_FRONTEND_H2_SETTINGS_RCVD,
    FAM_HAPROXY_FRONTEND_H2_RST_STREAM_RCVD,
    FAM_HAPROXY_FRONTEND_H2_GOAWAY_RCVD,
    FAM_HAPROXY_FRONTEND_H2_DETECTED_CONNECTION_PROTOCOL_ERRORS,
    FAM_HAPROXY_FRONTEND_H2_DETECTED_STREAM_PROTOCOL_ERRORS,
    FAM_HAPROXY_FRONTEND_H2_RST_STREAM_RESP,
    FAM_HAPROXY_FRONTEND_H2_GOAWAY_RESP,
    FAM_HAPROXY_FRONTEND_H2_OPEN_CONNECTIONS,
    FAM_HAPROXY_FRONTEND_H2_BACKEND_OPEN_STREAMS,
    FAM_HAPROXY_FRONTEND_H2_CONNECTIONS,
    FAM_HAPROXY_FRONTEND_H2_BACKEND_STREAMS,
    FAM_HAPROXY_FRONTEND_H1_OPEN_CONNECTIONS,
    FAM_HAPROXY_FRONTEND_H1_OPEN_STREAMS,
    FAM_HAPROXY_FRONTEND_H1_CONNECTIONS,
    FAM_HAPROXY_FRONTEND_H1_STREAMS,
    FAM_HAPROXY_FRONTEND_H1_IN_BYTES,
    FAM_HAPROXY_FRONTEND_H1_OUT_BYTES,
    FAM_HAPROXY_FRONTEND_H1_SPLICED_IN_BYTES,
    FAM_HAPROXY_FRONTEND_H1_SPLICED_OUT_BYTES,
    FAM_HAPROXY_FRONTEND_H3_DATA,
    FAM_HAPROXY_FRONTEND_H3_HEADERS,
    FAM_HAPROXY_FRONTEND_H3_CANCEL_PUSH,
    FAM_HAPROXY_FRONTEND_H3_PUSH_PROMISE,
    FAM_HAPROXY_FRONTEND_H3_MAX_PUSH_ID,
    FAM_HAPROXY_FRONTEND_H3_GOAWAY,
    FAM_HAPROXY_FRONTEND_H3_SETTINGS,
    FAM_HAPROXY_FRONTEND_H3_NO_ERROR,
    FAM_HAPROXY_FRONTEND_H3_GENERAL_PROTOCOL_ERROR,
    FAM_HAPROXY_FRONTEND_H3_INTERNAL_ERROR,
    FAM_HAPROXY_FRONTEND_H3_STREAM_CREATION_ERROR,
    FAM_HAPROXY_FRONTEND_H3_CLOSED_CRITICAL_STREAM,
    FAM_HAPROXY_FRONTEND_H3_FRAME_UNEXPECTED,
    FAM_HAPROXY_FRONTEND_H3_FRAME_ERROR,
    FAM_HAPROXY_FRONTEND_H3_EXCESSIVE_LOAD,
    FAM_HAPROXY_FRONTEND_H3_ID_ERROR,
    FAM_HAPROXY_FRONTEND_H3_SETTINGS_ERROR,
    FAM_HAPROXY_FRONTEND_H3_MISSING_SETTINGS,
    FAM_HAPROXY_FRONTEND_H3_REQUEST_REJECTED,
    FAM_HAPROXY_FRONTEND_H3_REQUEST_CANCELLED,
    FAM_HAPROXY_FRONTEND_H3_REQUEST_INCOMPLETE,
    FAM_HAPROXY_FRONTEND_H3_MESSAGE_ERROR,
    FAM_HAPROXY_FRONTEND_H3_CONNECT_ERROR,
    FAM_HAPROXY_FRONTEND_H3_VERSION_FALLBACK,
    FAM_HAPROXY_FRONTEND_H3_QPACK_DECOMPRESSION_FAILED,
    FAM_HAPROXY_FRONTEND_H3_QPACK_ENCODER_STREAM_ERROR,
    FAM_HAPROXY_FRONTEND_H3_QPACK_DECODER_STREAM_ERROR,
    FAM_HAPROXY_FRONTEND_QUIC_DROPPED_PACKET,
    FAM_HAPROXY_FRONTEND_QUIC_DROPPED_PARSING,
    FAM_HAPROXY_FRONTEND_QUIC_LOST_PACKET,
    FAM_HAPROXY_FRONTEND_QUIC_TOO_SHORT_INITIAL_DGRAM,
    FAM_HAPROXY_FRONTEND_QUIC_RETRY_SENT,
    FAM_HAPROXY_FRONTEND_QUIC_RETRY_VALIDATED,
    FAM_HAPROXY_FRONTEND_QUIC_RETRY_ERRORS,
    FAM_HAPROXY_FRONTEND_QUIC_HALF_OPEN_CONN,
    FAM_HAPROXY_FRONTEND_QUIC_HDSHK_FAIL,
    FAM_HAPROXY_FRONTEND_QUIC_STATELESS_RESET_SENT,
    FAM_HAPROXY_FRONTEND_QUIC_TRANSP_ERR_NO_ERROR,
    FAM_HAPROXY_FRONTEND_QUIC_TRANSP_ERR_INTERNAL_ERROR,
    FAM_HAPROXY_FRONTEND_QUIC_TRANSP_ERR_CONNECTION_REFUSED,
    FAM_HAPROXY_FRONTEND_QUIC_TRANSP_ERR_FLOW_CONTROL_ERROR,
    FAM_HAPROXY_FRONTEND_QUIC_TRANSP_ERR_STREAM_LIMIT_ERROR,
    FAM_HAPROXY_FRONTEND_QUIC_TRANSP_ERR_STREAM_STATE_ERROR,
    FAM_HAPROXY_FRONTEND_QUIC_TRANSP_ERR_FINAL_SIZE_ERROR,
    FAM_HAPROXY_FRONTEND_QUIC_TRANSP_ERR_FRAME_ENCODING_ERROR,
    FAM_HAPROXY_FRONTEND_QUIC_TRANSP_ERR_TRANSPORT_PARAMETER_ERROR,
    FAM_HAPROXY_FRONTEND_QUIC_TRANSP_ERR_CONNECTION_ID_LIMIT_ERROR,
    FAM_HAPROXY_FRONTEND_QUIC_TRANSP_ERR_PROTOCOL_VIOLATION,
    FAM_HAPROXY_FRONTEND_QUIC_TRANSP_ERR_INVALID_TOKEN,
    FAM_HAPROXY_FRONTEND_QUIC_TRANSP_ERR_APPLICATION_ERROR,
    FAM_HAPROXY_FRONTEND_QUIC_TRANSP_ERR_CRYPTO_BUFFER_EXCEEDED,
    FAM_HAPROXY_FRONTEND_QUIC_TRANSP_ERR_KEY_UPDATE_ERROR,
    FAM_HAPROXY_FRONTEND_QUIC_TRANSP_ERR_AEAD_LIMIT_REACHED,
    FAM_HAPROXY_FRONTEND_QUIC_TRANSP_ERR_NO_VIABLE_PATH,
    FAM_HAPROXY_FRONTEND_QUIC_TRANSP_ERR_CRYPTO_ERROR,
    FAM_HAPROXY_FRONTEND_QUIC_TRANSP_ERR_UNKNOWN_ERROR,
    FAM_HAPROXY_FRONTEND_QUIC_DATA_BLOCKED,
    FAM_HAPROXY_FRONTEND_QUIC_STREAM_DATA_BLOCKED,
    FAM_HAPROXY_FRONTEND_QUIC_STREAMS_DATA_BLOCKED_BIDI,
    FAM_HAPROXY_FRONTEND_QUIC_STREAMS_DATA_BLOCKED_UNI,
    FAM_HAPROXY_LISTENER_CURRENT_SESSIONS,
    FAM_HAPROXY_LISTENER_MAX_SESSIONS,
    FAM_HAPROXY_LISTENER_LIMIT_SESSIONS,
    FAM_HAPROXY_LISTENER_SESSIONS,
    FAM_HAPROXY_LISTENER_BYTES_IN,
    FAM_HAPROXY_LISTENER_BYTES_OUT,
    FAM_HAPROXY_LISTENER_REQUESTS_DENIED,
    FAM_HAPROXY_LISTENER_RESPONSES_DENIED,
    FAM_HAPROXY_LISTENER_REQUEST_ERRORS,
    FAM_HAPROXY_LISTENER_STATUS,
    FAM_HAPROXY_LISTENER_DENIED_CONNECTIONS,
    FAM_HAPROXY_LISTENER_DENIED_SESSIONS,
    FAM_HAPROXY_LISTENER_FAILED_HEADER_REWRITING,
    FAM_HAPROXY_LISTENER_INTERNAL_ERRORS,
    FAM_HAPROXY_LISTENER_SSL_SESSIONS,
    FAM_HAPROXY_LISTENER_SSL_REUSE_SESSIONS,
    FAM_HAPROXY_LISTENER_SSL_FAILED_HANDSHAKE,
    FAM_HAPROXY_BACKEND_CURRENT_QUEUE,
    FAM_HAPROXY_BACKEND_MAX_QUEUE,
    FAM_HAPROXY_BACKEND_CURRENT_SESSIONS,
    FAM_HAPROXY_BACKEND_MAX_SESSIONS,
    FAM_HAPROXY_BACKEND_LIMIT_SESSIONS,
    FAM_HAPROXY_BACKEND_SESSIONS,
    FAM_HAPROXY_BACKEND_BYTES_IN,
    FAM_HAPROXY_BACKEND_BYTES_OUT,
    FAM_HAPROXY_BACKEND_REQUESTS_DENIED,
    FAM_HAPROXY_BACKEND_RESPONSES_DENIED,
    FAM_HAPROXY_BACKEND_CONNECTION_ERRORS,
    FAM_HAPROXY_BACKEND_RESPONSE_ERRORS,
    FAM_HAPROXY_BACKEND_RETRY_WARNINGS,
    FAM_HAPROXY_BACKEND_REDISPATCH_WARNINGS,
    FAM_HAPROXY_BACKEND_STATUS,
    FAM_HAPROXY_BACKEND_WEIGHT,
    FAM_HAPROXY_BACKEND_ACTIVE_SERVERS,
    FAM_HAPROXY_BACKEND_BACKUP_SERVERS,
    FAM_HAPROXY_BACKEND_CHECK_FAILURES,
    FAM_HAPROXY_BACKEND_CHECK_UP_DOWN,
    FAM_HAPROXY_BACKEND_CHECK_LAST_CHANGE_SECONDS,
    FAM_HAPROXY_BACKEND_DOWNTIME_SECONDS,
    FAM_HAPROXY_BACKEND_LOADBALANCED,
    FAM_HAPROXY_BACKEND_MAX_SESSION_RATE,
    FAM_HAPROXY_BACKEND_HTTP_RESPONSES,
    FAM_HAPROXY_BACKEND_HTTP_REQUESTS,
    FAM_HAPROXY_BACKEND_CLIENT_ABORTS,
    FAM_HAPROXY_BACKEND_SERVER_ABORTS,
    FAM_HAPROXY_BACKEND_HTTP_COMP_BYTES_IN,
    FAM_HAPROXY_BACKEND_HTTP_COMP_BYTES_OUT,
    FAM_HAPROXY_BACKEND_HTTP_COMP_BYTES_BYPASSED,
    FAM_HAPROXY_BACKEND_HTTP_COMP_RESPONSES,
    FAM_HAPROXY_BACKEND_LAST_SESSION_SECONDS,
    FAM_HAPROXY_BACKEND_QUEUE_TIME_AVERAGE_SECONDS,
    FAM_HAPROXY_BACKEND_CONNECT_TIME_AVERAGE_SECONDS,
    FAM_HAPROXY_BACKEND_RESPONSE_TIME_AVERAGE_SECONDS,
    FAM_HAPROXY_BACKEND_TOTAL_TIME_AVERAGE_SECONDS,
    FAM_HAPROXY_BACKEND_FAILED_HEADER_REWRITING,
    FAM_HAPROXY_BACKEND_CONNECTION_ATTEMPTS,
    FAM_HAPROXY_BACKEND_CONNECTION_REUSES,
    FAM_HAPROXY_BACKEND_HTTP_CACHE_LOOKUPS,
    FAM_HAPROXY_BACKEND_HTTP_CACHE_HITS,
    FAM_HAPROXY_BACKEND_MAX_QUEUE_TIME_SECONDS,
    FAM_HAPROXY_BACKEND_MAX_CONNECT_TIME_SECONDS,
    FAM_HAPROXY_BACKEND_MAX_RESPONSE_TIME_SECONDS,
    FAM_HAPROXY_BACKEND_MAX_TOTAL_TIME_SECONDS,
    FAM_HAPROXY_BACKEND_INTERNAL_ERRORS,
    FAM_HAPROXY_BACKEND_UWEIGHT,
    FAM_HAPROXY_BACKEND_SERVER_CHECK_STATUS,
    FAM_HAPROXY_BACKEND_SSL_SESSIONS,
    FAM_HAPROXY_BACKEND_SSL_REUSE_SESSIONS,
    FAM_HAPROXY_BACKEND_SSL_FAILED_HANDSHAKE,
    FAM_HAPROXY_BACKEND_H2_HEADERS_RCVD,
    FAM_HAPROXY_BACKEND_H2_DATA_RCVD,
    FAM_HAPROXY_BACKEND_H2_SETTINGS_RCVD,
    FAM_HAPROXY_BACKEND_H2_RST_STREAM_RCVD,
    FAM_HAPROXY_BACKEND_H2_GOAWAY_RCVD,
    FAM_HAPROXY_BACKEND_H2_DETECTED_CONNECTION_PROTOCOL_ERRORS,
    FAM_HAPROXY_BACKEND_H2_DETECTED_STREAM_PROTOCOL_ERRORS,
    FAM_HAPROXY_BACKEND_H2_RST_STREAM_RESP,
    FAM_HAPROXY_BACKEND_H2_GOAWAY_RESP,
    FAM_HAPROXY_BACKEND_H2_OPEN_CONNECTIONS,
    FAM_HAPROXY_BACKEND_H2_BACKEND_OPEN_STREAMS,
    FAM_HAPROXY_BACKEND_H2_CONNECTIONS,
    FAM_HAPROXY_BACKEND_H2_BACKEND_STREAMS,
    FAM_HAPROXY_BACKEND_H1_OPEN_CONNECTIONS,
    FAM_HAPROXY_BACKEND_H1_OPEN_STREAMS,
    FAM_HAPROXY_BACKEND_H1_CONNECTIONS,
    FAM_HAPROXY_BACKEND_H1_STREAMS,
    FAM_HAPROXY_BACKEND_H1_IN_BYTES,
    FAM_HAPROXY_BACKEND_H1_OUT_BYTES,
    FAM_HAPROXY_BACKEND_H1_SPLICED_IN_BYTES,
    FAM_HAPROXY_BACKEND_H1_SPLICED_OUT_BYTES,
    FAM_HAPROXY_SERVER_CURRENT_QUEUE,
    FAM_HAPROXY_SERVER_MAX_QUEUE,
    FAM_HAPROXY_SERVER_CURRENT_SESSIONS,
    FAM_HAPROXY_SERVER_MAX_SESSIONS,
    FAM_HAPROXY_SERVER_LIMIT_SESSIONS,
    FAM_HAPROXY_SERVER_SESSIONS,
    FAM_HAPROXY_SERVER_BYTES_IN,
    FAM_HAPROXY_SERVER_BYTES_OUT,
    FAM_HAPROXY_SERVER_RESPONSES_DENIED,
    FAM_HAPROXY_SERVER_CONNECTION_ERRORS,
    FAM_HAPROXY_SERVER_RESPONSE_ERRORS,
    FAM_HAPROXY_SERVER_RETRY_WARNINGS,
    FAM_HAPROXY_SERVER_REDISPATCH_WARNINGS,
    FAM_HAPROXY_SERVER_STATUS,
    FAM_HAPROXY_SERVER_WEIGHT,
    FAM_HAPROXY_SERVER_CHECK_FAILURES,
    FAM_HAPROXY_SERVER_CHECK_UP_DOWN,
    FAM_HAPROXY_SERVER_CHECK_LAST_CHANGE_SECONDS,
    FAM_HAPROXY_SERVER_DOWNTIME_SECONDS,
    FAM_HAPROXY_SERVER_QUEUE_LIMIT,
    FAM_HAPROXY_SERVER_CURRENT_THROTTLE,
    FAM_HAPROXY_SERVER_LOADBALANCED,
    FAM_HAPROXY_SERVER_MAX_SESSION_RATE,
    FAM_HAPROXY_SERVER_CHECK_STATUS,
    FAM_HAPROXY_SERVER_CHECK_CODE,
    FAM_HAPROXY_SERVER_CHECK_DURATION_SECONDS,
    FAM_HAPROXY_SERVER_HTTP_RESPONSES,
    FAM_HAPROXY_SERVER_CLIENT_ABORTS,
    FAM_HAPROXY_SERVER_SERVER_ABORTS,
    FAM_HAPROXY_SERVER_LAST_SESSION_SECONDS,
    FAM_HAPROXY_SERVER_QUEUE_TIME_AVERAGE_SECONDS,
    FAM_HAPROXY_SERVER_CONNECT_TIME_AVERAGE_SECONDS,
    FAM_HAPROXY_SERVER_RESPONSE_TIME_AVERAGE_SECONDS,
    FAM_HAPROXY_SERVER_TOTAL_TIME_AVERAGE_SECONDS,
    FAM_HAPROXY_SERVER_FAILED_HEADER_REWRITING,
    FAM_HAPROXY_SERVER_CONNECTION_ATTEMPTS,
    FAM_HAPROXY_SERVER_CONNECTION_REUSES,
    FAM_HAPROXY_SERVER_IDLE_CONNECTIONS_CURRENT,
    FAM_HAPROXY_SERVER_IDLE_CONNECTIONS_LIMIT,
    FAM_HAPROXY_SERVER_MAX_QUEUE_TIME_SECONDS,
    FAM_HAPROXY_SERVER_MAX_CONNECT_TIME_SECONDS,
    FAM_HAPROXY_SERVER_MAX_RESPONSE_TIME_SECONDS,
    FAM_HAPROXY_SERVER_MAX_TOTAL_TIME_SECONDS,
    FAM_HAPROXY_SERVER_INTERNAL_ERRORS,
    FAM_HAPROXY_SERVER_UNSAFE_IDLE_CONNECTIONS_CURRENT,
    FAM_HAPROXY_SERVER_SAFE_IDLE_CONNECTIONS_CURRENT,
    FAM_HAPROXY_SERVER_USED_CONNECTIONS_CURRENT,
    FAM_HAPROXY_SERVER_NEED_CONNECTIONS_CURRENT,
    FAM_HAPROXY_SERVER_UWEIGHT,
    FAM_HAPROXY_SERVER_SSL_SESSIONS,
    FAM_HAPROXY_SERVER_SSL_REUSE_SESSIONS,
    FAM_HAPROXY_SERVER_SSL_FAILED_HANDSHAKE,
    FAM_HAPROXY_STAT_MAX,
};

static metric_family_t fams_haproxy_stat[FAM_HAPROXY_STAT_MAX] = {
    [FAM_HAPROXY_FRONTEND_CURRENT_SESSIONS] = {
        .name = "haproxy_frontend_current_sessions",
        .type = METRIC_TYPE_GAUGE,
        .help = "Number of current sessions on the frontend.",
    },
    [FAM_HAPROXY_FRONTEND_MAX_SESSIONS] = {
        .name = "haproxy_frontend_max_sessions",
        .type = METRIC_TYPE_GAUGE,
        .help = "Highest value of current sessions encountered since process started.",
    },
    [FAM_HAPROXY_FRONTEND_LIMIT_SESSION] = {
        .name = "haproxy_frontend_limit_sessions",
        .type = METRIC_TYPE_GAUGE,
        .help = "Frontend's maxconn.",
    },
    [FAM_HAPROXY_FRONTEND_SESSIONS] = {
        .name = "haproxy_frontend_sessions",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of sessions since process started.",
    },
    [FAM_HAPROXY_FRONTEND_BYTES_IN] = {
        .name = "haproxy_frontend_bytes_in",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of request bytes since process started.",
    },
    [FAM_HAPROXY_FRONTEND_BYTES_OUT] = {
        .name = "haproxy_frontend_bytes_out",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of response bytes since process started.",
    },
    [FAM_HAPROXY_FRONTEND_REQUESTS_DENIED] = {
        .name = "haproxy_frontend_requests_denied",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of denied requests since process started.",
    },
    [FAM_HAPROXY_FRONTEND_RESPONSES_DENIED] = {
        .name = "haproxy_frontend_responses_denied",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of denied responses since process started.",
    },
    [FAM_HAPROXY_FRONTEND_REQUEST_ERRORS] = {
        .name = "haproxy_frontend_request_errors",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of invalid requests since process started.",
    },
    [FAM_HAPROXY_FRONTEND_STATUS] = {
        .name = "haproxy_frontend_status",
        .type = METRIC_TYPE_STATE_SET,
        .help = "Current status of the frontend, per state label value.",
    },
    [FAM_HAPROXY_FRONTEND_LIMIT_SESSION_RATE] = {
        .name = "haproxy_frontend_limit_session_rate",
        .type = METRIC_TYPE_GAUGE,
        .help = "Limit on the number of sessions accepted in a second.",
    },
    [FAM_HAPROXY_FRONTEND_MAX_SESSION_RATE] = {
        .name = "haproxy_frontend_max_session_rate",
        .type = METRIC_TYPE_GAUGE,
        .help = "Highest value of sessions per second observed since the worker process started.",
    },
    [FAM_HAPROXY_FRONTEND_HTTP_RESPONSES] = {
        .name = "haproxy_frontend_http_responses",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of HTTP responses with status 100-199 returned by this object.",
    },
    [FAM_HAPROXY_FRONTEND_HTTP_REQUESTS_RATE_MAX] = {
        .name = "haproxy_frontend_http_requests_rate_max",
        .type = METRIC_TYPE_GAUGE,
        .help = "Highest value of http requests observed.",
    },
    [FAM_HAPROXY_FRONTEND_HTTP_REQUESTS] = {
        .name = "haproxy_frontend_http_requests",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of HTTP requests processed by this object.",
    },
    [FAM_HAPROXY_FRONTEND_HTTP_COMP_BYTES_IN] = {
        .name = "haproxy_frontend_http_comp_bytes_in",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of bytes submitted to the HTTP compressor for this object.",
    },
    [FAM_HAPROXY_FRONTEND_HTTP_COMP_BYTES_OUT] = {
        .name = "haproxy_frontend_http_comp_bytes_out",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of bytes emitted by the HTTP compressor for this object.",
    },
    [FAM_HAPROXY_FRONTEND_HTTP_COMP_BYTES_BYPASSED] = {
        .name = "haproxy_frontend_http_comp_bytes_bypassed",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of bytes that bypassed HTTP compression for this object.",
    },
    [FAM_HAPROXY_FRONTEND_HTTP_COMP_RESPONSES] = {
        .name = "haproxy_frontend_http_comp_responses",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of HTTP responses that were compressed for this object.",
    },
    [FAM_HAPROXY_FRONTEND_CONNECTIONS_RATE_MAX] = {
        .name = "haproxy_frontend_connections_rate_max",
        .type = METRIC_TYPE_GAUGE,
        .help = "Highest value of connections per second observed.",
    },
    [FAM_HAPROXY_FRONTEND_CONNECTIONS] = {
        .name = "haproxy_frontend_connections",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of new connections accepted on this frontend.",
    },
    [FAM_HAPROXY_FRONTEND_INTERCEPTED_REQUESTS] = {
        .name = "haproxy_frontend_intercepted_requests",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of HTTP requests intercepted on the frontend "
                "(redirects/stats/services).",
    },
    [FAM_HAPROXY_FRONTEND_DENIED_CONNECTIONS] = {
        .name = "haproxy_frontend_denied_connections",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of incoming connections blocked on a frontend "
                "by a tcp-request connection rule.",
    },
    [FAM_HAPROXY_FRONTEND_DENIED_SESSIONS] = {
        .name = "haproxy_frontend_denied_sessions",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of incoming sessions blocked on a frontend "
                "by a tcp-request connection rule.",
    },
    [FAM_HAPROXY_FRONTEND_FAILED_HEADER_REWRITING] = {
        .name = "haproxy_frontend_failed_header_rewriting",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of failed HTTP header rewrites.",
    },
    [FAM_HAPROXY_FRONTEND_HTTP_CACHE_LOOKUPS] = {
        .name = "haproxy_frontend_http_cache_lookups",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of HTTP requests looked up in the cache on this frontend.",
    },
    [FAM_HAPROXY_FRONTEND_HTTP_CACHE_HITS] = {
        .name = "haproxy_frontend_http_cache_hits",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of HTTP requests not found in the cache on this frontend.",
    },
    [FAM_HAPROXY_FRONTEND_INTERNAL_ERRORS] = {
        .name = "haproxy_frontend_internal_errors",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of internal errors.",
    },
    [FAM_HAPROXY_FRONTEND_SSL_SESSIONS] = {
        .name = "haproxy_frontend_ssl_sessions",
        .type = METRIC_TYPE_COUNTER,
           .help = "Total number of ssl sessions established in this frontend."
    },
    [FAM_HAPROXY_FRONTEND_SSL_REUSE_SESSIONS] = {
        .name = "haproxy_frontend_ssl_reused_sessions",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of ssl sessions reused in this frontend."
    },
    [FAM_HAPROXY_FRONTEND_SSL_FAILED_HANDSHAKE] = {
        .name = "haproxy_frontend_ssl_failed_handshake",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of failed handshake in this frontend."
    },
    [FAM_HAPROXY_FRONTEND_H2_HEADERS_RCVD] = {
        .name = "haproxy_frontend_h2_headers_rcvd",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of received HEADERS frames in this frontend."
    },
    [FAM_HAPROXY_FRONTEND_H2_DATA_RCVD] = {
        .name = "haproxy_frontend_h2_data_rcvd",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of received DATA frames in this frontend."
    },
    [FAM_HAPROXY_FRONTEND_H2_SETTINGS_RCVD] = {
        .name = "haproxy_frontend_h2_settings_rcvd",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of received SETTINGS frames in this frontend."
    },
    [FAM_HAPROXY_FRONTEND_H2_RST_STREAM_RCVD] = {
        .name = "haproxy_frontend_h2_rst_stream_rcvd",
        .type = METRIC_TYPE_COUNTER,
           .help = "Total number of received RST_STREAM frames in this frontend."
    },
    [FAM_HAPROXY_FRONTEND_H2_GOAWAY_RCVD] = {
        .name = "haproxy_frontend_h2_goaway_rcvd",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of received GOAWAY frames in this frontend."
    },
    [FAM_HAPROXY_FRONTEND_H2_DETECTED_CONNECTION_PROTOCOL_ERRORS] = {
        .name = "haproxy_frontend_h2_detected_connection_protocol_errors",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of connection protocol errors in this frontend."
    },
    [FAM_HAPROXY_FRONTEND_H2_DETECTED_STREAM_PROTOCOL_ERRORS] = {
        .name = "haproxy_frontend_h2_detected_stream_protocol_errors",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of stream protocol errors in this frontend."
    },
    [FAM_HAPROXY_FRONTEND_H2_RST_STREAM_RESP] = {
        .name = "haproxy_frontend_h2_rst_stream_resp",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of RST_STREAM sent on detected error in this frontend."
    },
    [FAM_HAPROXY_FRONTEND_H2_GOAWAY_RESP] = {
        .name = "haproxy_frontend_h2_goaway_resp",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of GOAWAY sent on detected error in this frontend."
    },
    [FAM_HAPROXY_FRONTEND_H2_OPEN_CONNECTIONS] = {
        .name = "haproxy_frontend_h2_open_connections",
        .type = METRIC_TYPE_COUNTER,
        .help = "Count of currently open connections in this frontend."
    },
    [FAM_HAPROXY_FRONTEND_H2_BACKEND_OPEN_STREAMS] = {
        .name = "haproxy_frontend_h2_backend_open_streams",
        .type = METRIC_TYPE_GAUGE,
        .help = "Count of currently open streams in this frontend."
    },
    [FAM_HAPROXY_FRONTEND_H2_CONNECTIONS] = {
        .name = "haproxy_frontend_h2_connections",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of connections in this frontend."
    },
    [FAM_HAPROXY_FRONTEND_H2_BACKEND_STREAMS] = {
        .name = "haproxy_frontend_h2_backend_streams",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of streams in this frontend."
    },
    [FAM_HAPROXY_FRONTEND_H1_OPEN_CONNECTIONS] = {
        .name = "haproxy_frontend_h1_open_connections",
        .type = METRIC_TYPE_GAUGE,
        .help = "Count of currently open connections in this frontend."
    },
    [FAM_HAPROXY_FRONTEND_H1_OPEN_STREAMS] = {
        .name = "haproxy_frontend_h1_open_streams",
        .type = METRIC_TYPE_GAUGE,
        .help = "Count of currently open streams in this frontend."
    },
    [FAM_HAPROXY_FRONTEND_H1_CONNECTIONS] = {
        .name = "haproxy_frontend_h1_connections",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of connections in this frontend."
    },
    [FAM_HAPROXY_FRONTEND_H1_STREAMS] = {
        .name = "haproxy_frontend_h1_streams",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of streams in this frontend."
    },
    [FAM_HAPROXY_FRONTEND_H1_IN_BYTES] = {
        .name = "haproxy_frontend_h1_in_bytes",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of bytes received in this frontend."
    },
    [FAM_HAPROXY_FRONTEND_H1_OUT_BYTES] = {
        .name = "haproxy_frontend_h1_out_bytes",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of bytes send in this frontend."
    },
    [FAM_HAPROXY_FRONTEND_H1_SPLICED_IN_BYTES] = {
        .name = "haproxy_frontend_h1_spliced_in_bytes",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of bytes received using kernel splicing in this frontend."
    },
    [FAM_HAPROXY_FRONTEND_H1_SPLICED_OUT_BYTES] = {
        .name = "haproxy_frontend_h1_spliced_out_bytes",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of bytes sendusing kernel splicing in this frontend."
    },
    [FAM_HAPROXY_FRONTEND_H3_DATA] = {
        .name = "haproxy_frontend_h3_data",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of DATA frames received",
    },
    [FAM_HAPROXY_FRONTEND_H3_HEADERS] = {
        .name = "haproxy_frontend_h3_headers",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of HEADERS frames received",
    },
    [FAM_HAPROXY_FRONTEND_H3_CANCEL_PUSH] = {
        .name = "haproxy_frontend_h3_cancel_push",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of CANCEL_PUSH frames received",
    },
    [FAM_HAPROXY_FRONTEND_H3_PUSH_PROMISE] = {
        .name = "haproxy_frontend_h3_push_promise",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of PUSH_PROMISE frames received",
    },
    [FAM_HAPROXY_FRONTEND_H3_MAX_PUSH_ID] = {
        .name = "haproxy_frontend_h3_max_push_id",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of MAX_PUSH_ID frames received",
    },
    [FAM_HAPROXY_FRONTEND_H3_GOAWAY] = {
        .name = "haproxy_frontend_h3_goaway",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of GOAWAY frames received",
    },
    [FAM_HAPROXY_FRONTEND_H3_SETTINGS] = {
        .name = "haproxy_frontend_h3_settings",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of SETTINGS frames received",
    },
    [FAM_HAPROXY_FRONTEND_H3_NO_ERROR] = {
        .name = "haproxy_frontend_h3_no_error",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of H3_NO_ERROR errors received",
    },
    [FAM_HAPROXY_FRONTEND_H3_GENERAL_PROTOCOL_ERROR] = {
        .name = "haproxy_frontend_h3_general_protocol_error",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of H3_GENERAL_PROTOCOL_ERROR errors received",
    },
    [FAM_HAPROXY_FRONTEND_H3_INTERNAL_ERROR] = {
        .name = "haproxy_frontend_h3_internal_error",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of H3_INTERNAL_ERROR errors received",
    },
    [FAM_HAPROXY_FRONTEND_H3_STREAM_CREATION_ERROR] = {
        .name = "haproxy_frontend_h3_stream_creation_error",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of H3_STREAM_CREATION_ERROR errors received",
    },
    [FAM_HAPROXY_FRONTEND_H3_CLOSED_CRITICAL_STREAM] = {
        .name = "haproxy_frontend_h3_closed_critical_stream",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of H3_CLOSED_CRITICAL_STREAM errors received",
    },
    [FAM_HAPROXY_FRONTEND_H3_FRAME_UNEXPECTED] = {
        .name = "haproxy_frontend_h3_frame_unexpected",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of H3_FRAME_UNEXPECTED errors received",
    },
    [FAM_HAPROXY_FRONTEND_H3_FRAME_ERROR] = {
        .name = "haproxy_frontend_h3_frame_error",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of H3_FRAME_ERROR errors received",
    },
    [FAM_HAPROXY_FRONTEND_H3_EXCESSIVE_LOAD] = {
        .name = "haproxy_frontend_h3_excessive_load",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of H3_EXCESSIVE_LOAD errors received",
    },
    [FAM_HAPROXY_FRONTEND_H3_ID_ERROR] = {
        .name = "haproxy_frontend_h3_id_error",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of H3_ID_ERROR errors received",
    },
    [FAM_HAPROXY_FRONTEND_H3_SETTINGS_ERROR] = {
        .name = "haproxy_frontend_h3_settings_error",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of H3_SETTINGS_ERROR errors received",
    },
    [FAM_HAPROXY_FRONTEND_H3_MISSING_SETTINGS] = {
        .name = "haproxy_frontend_h3_missing_settings",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of H3_MISSING_SETTINGS errors received",
    },
    [FAM_HAPROXY_FRONTEND_H3_REQUEST_REJECTED] = {
        .name = "haproxy_frontend_h3_request_rejected",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of H3_REQUEST_REJECTED errors received",
    },
    [FAM_HAPROXY_FRONTEND_H3_REQUEST_CANCELLED] = {
        .name = "haproxy_frontend_h3_request_cancelled",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of H3_REQUEST_CANCELLED errors received",
    },
    [FAM_HAPROXY_FRONTEND_H3_REQUEST_INCOMPLETE] = {
        .name = "haproxy_frontend_h3_request_incomplete",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of H3_REQUEST_INCOMPLETE errors received",
    },
    [FAM_HAPROXY_FRONTEND_H3_MESSAGE_ERROR] = {
        .name = "haproxy_frontend_h3_message_error",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of H3_MESSAGE_ERROR errors received",
    },
    [FAM_HAPROXY_FRONTEND_H3_CONNECT_ERROR] = {
        .name = "haproxy_frontend_h3_connect_error",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of H3_CONNECT_ERROR errors received",
    },
    [FAM_HAPROXY_FRONTEND_H3_VERSION_FALLBACK] = {
        .name = "haproxy_frontend_h3_version_fallback",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of H3_VERSION_FALLBACK errors received",
    },
    [FAM_HAPROXY_FRONTEND_H3_QPACK_DECOMPRESSION_FAILED] = {
        .name = "haproxy_frontend_h3_pack_decompression_failed",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of QPACK_DECOMPRESSION_FAILED errors received",
    },
    [FAM_HAPROXY_FRONTEND_H3_QPACK_ENCODER_STREAM_ERROR] = {
        .name = "haproxy_frontend_h3_qpack_encoder_stream_error",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of QPACK_ENCODER_STREAM_ERROR errors received",
    },
    [FAM_HAPROXY_FRONTEND_H3_QPACK_DECODER_STREAM_ERROR] = {
        .name = "haproxy_frontend_h3_qpack_decoder_stream_error",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of QPACK_DECODER_STREAM_ERROR errors received",
    },
    [FAM_HAPROXY_FRONTEND_QUIC_DROPPED_PACKET] = {
        .name = "haproxy_frontend_quic_dropped_pkt",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of dropped packets",
    },
    [FAM_HAPROXY_FRONTEND_QUIC_DROPPED_PARSING] = {
        .name = "haproxy_frontend_quic_dropped_parsing_pkt",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of dropped packets upon parsing error",
    },
    [FAM_HAPROXY_FRONTEND_QUIC_LOST_PACKET] = {
        .name = "haproxy_frontend_quic_lost_pkt",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of lost sent packets",
    },
    [FAM_HAPROXY_FRONTEND_QUIC_TOO_SHORT_INITIAL_DGRAM] = {
        .name = "haproxy_frontend_quic_too_short_dgram",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of too short dgrams with Initial packets",
    },
    [FAM_HAPROXY_FRONTEND_QUIC_RETRY_SENT] = {
        .name = "haproxy_frontend_quic_retry_sent",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of Retry sent",
    },
    [FAM_HAPROXY_FRONTEND_QUIC_RETRY_VALIDATED] = {
        .name = "haproxy_frontend_quic_retry_validated",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of validated Retry tokens",
    },
    [FAM_HAPROXY_FRONTEND_QUIC_RETRY_ERRORS] = {
        .name = "haproxy_frontend_quic_retry_error",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of Retry tokens errors",
    },
    [FAM_HAPROXY_FRONTEND_QUIC_HALF_OPEN_CONN] = {
        .name = "haproxy_frontend_quic_half_open_conn",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of half open connections",
    },
    [FAM_HAPROXY_FRONTEND_QUIC_HDSHK_FAIL] = {
        .name = "haproxy_frontend_quic_hdshk_fail",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of handshake failures",
    },
    [FAM_HAPROXY_FRONTEND_QUIC_STATELESS_RESET_SENT] = {
        .name = "haproxy_frontend_quic_stless_rst_sent",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of stateless reset packet sent",
    },
    [FAM_HAPROXY_FRONTEND_QUIC_TRANSP_ERR_NO_ERROR] = {
        .name = "haproxy_frontend_quic_transp_err_no_error",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of NO_ERROR errors received",
    },
    [FAM_HAPROXY_FRONTEND_QUIC_TRANSP_ERR_INTERNAL_ERROR] = {
        .name = "haproxy_frontend_quic_transp_err_internal_error",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of INTERNAL_ERROR errors received",
    },
    [FAM_HAPROXY_FRONTEND_QUIC_TRANSP_ERR_CONNECTION_REFUSED] = {
        .name = "haproxy_frontend_quic_transp_err_connection_refused",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of CONNECTION_REFUSED errors received",
    },
    [FAM_HAPROXY_FRONTEND_QUIC_TRANSP_ERR_FLOW_CONTROL_ERROR] = {
        .name = "haproxy_frontend_quic_transp_err_flow_control_error",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of FLOW_CONTROL_ERROR errors received",
    },
    [FAM_HAPROXY_FRONTEND_QUIC_TRANSP_ERR_STREAM_LIMIT_ERROR] = {
        .name = "haproxy_frontend_quic_transp_err_stream_limit_error",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of STREAM_LIMIT_ERROR errors received",
    },
    [FAM_HAPROXY_FRONTEND_QUIC_TRANSP_ERR_STREAM_STATE_ERROR] = {
        .name = "haproxy_frontend_quic_transp_err_stream_state_error",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of STREAM_STATE_ERROR errors received",
    },
    [FAM_HAPROXY_FRONTEND_QUIC_TRANSP_ERR_FINAL_SIZE_ERROR] = {
        .name = "haproxy_frontend_quic_transp_err_final_size_error",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of FINAL_SIZE_ERROR errors received",
    },
    [FAM_HAPROXY_FRONTEND_QUIC_TRANSP_ERR_FRAME_ENCODING_ERROR] = {
        .name = "haproxy_frontend_quic_transp_err_frame_encoding_error",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of FRAME_ENCODING_ERROR errors received",
    },
    [FAM_HAPROXY_FRONTEND_QUIC_TRANSP_ERR_TRANSPORT_PARAMETER_ERROR] = {
        .name = "haproxy_frontend_quic_transp_err_transport_parameter_error",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of TRANSPORT_PARAMETER_ERROR errors received",
    },
    [FAM_HAPROXY_FRONTEND_QUIC_TRANSP_ERR_CONNECTION_ID_LIMIT_ERROR] = {
        .name = "haproxy_frontend_quic_transp_err_connection_id_limit",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of CONNECTION_ID_LIMIT_ERROR errors received",
    },
    [FAM_HAPROXY_FRONTEND_QUIC_TRANSP_ERR_PROTOCOL_VIOLATION] = {
        .name = "haproxy_frontend_quic_transp_err_protocol_violation_error",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of PROTOCOL_VIOLATION errors received",
    },
    [FAM_HAPROXY_FRONTEND_QUIC_TRANSP_ERR_INVALID_TOKEN] = {
        .name = "haproxy_frontend_quic_transp_err_invalid_token",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of INVALID_TOKEN errors received",
    },
    [FAM_HAPROXY_FRONTEND_QUIC_TRANSP_ERR_APPLICATION_ERROR] = {
        .name = "haproxy_frontend_quic_transp_err_application_error",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of APPLICATION_ERROR errors received",
    },
    [FAM_HAPROXY_FRONTEND_QUIC_TRANSP_ERR_CRYPTO_BUFFER_EXCEEDED] = {
        .name = "haproxy_frontend_quic_transp_err_crypto_buffer_exceeded",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of CRYPTO_BUFFER_EXCEEDED errors received",
    },
    [FAM_HAPROXY_FRONTEND_QUIC_TRANSP_ERR_KEY_UPDATE_ERROR] = {
        .name = "haproxy_frontend_quic_transp_err_key_update_error",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of KEY_UPDATE_ERROR errors received",
    },
    [FAM_HAPROXY_FRONTEND_QUIC_TRANSP_ERR_AEAD_LIMIT_REACHED] = {
        .name = "haproxy_frontend_quic_transp_err_aead_limit_reached",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of AEAD_LIMIT_REACHED errors received",
    },
    [FAM_HAPROXY_FRONTEND_QUIC_TRANSP_ERR_NO_VIABLE_PATH] = {
        .name = "haproxy_frontend_quic_transp_err_no_viable_path",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of NO_VIABLE_PATH errors received",
    },
    [FAM_HAPROXY_FRONTEND_QUIC_TRANSP_ERR_CRYPTO_ERROR] = {
        .name = "haproxy_frontend_quic_transp_err_crypto_error",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of CRYPTO_ERROR errors received",
    },
    [FAM_HAPROXY_FRONTEND_QUIC_TRANSP_ERR_UNKNOWN_ERROR] = {
        .name = "haproxy_frontend_quic_transp_err_unknown_error",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of UNKNOWN_ERROR errors received",
    },
    [FAM_HAPROXY_FRONTEND_QUIC_DATA_BLOCKED] = {
        .name = "haproxy_frontend_quic_data_blocked",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of received DATA_BLOCKED frames",
    },
    [FAM_HAPROXY_FRONTEND_QUIC_STREAM_DATA_BLOCKED] = {
        .name = "haproxy_frontend_quic_stream_data_blocked",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of received STREAMS_BLOCKED frames",
    },
    [FAM_HAPROXY_FRONTEND_QUIC_STREAMS_DATA_BLOCKED_BIDI] = {
        .name = "haproxy_frontend_quic_streams_data_blocked_bidi",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of received STREAM_DATA_BLOCKED_BIDI frames",
    },
    [FAM_HAPROXY_FRONTEND_QUIC_STREAMS_DATA_BLOCKED_UNI] = {
        .name = "haproxy_frontend_quic_streams_data_blocked_uni",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of received STREAM_DATA_BLOCKED_UNI frames",
    },
    [FAM_HAPROXY_LISTENER_CURRENT_SESSIONS] = {
        .name = "haproxy_listener_current_sessions",
        .type = METRIC_TYPE_GAUGE,
        .help = "Number of current sessions on the listener",
    },
    [FAM_HAPROXY_LISTENER_MAX_SESSIONS]  = {
        .name = "haproxy_listener_max_sessions",
        .type = METRIC_TYPE_GAUGE,
        .help = "Highest value of current sessions encountered.",
    },
    [FAM_HAPROXY_LISTENER_LIMIT_SESSIONS] = {
        .name = "haproxy_listener_limit_sessions",
        .type = METRIC_TYPE_GAUGE,
        .help = "Listener's maxconn",
    },
    [FAM_HAPROXY_LISTENER_SESSIONS] = {
        .name = "haproxy_listener_sessions",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of sessions.",
    },
    [FAM_HAPROXY_LISTENER_BYTES_IN] = {
        .name = "haproxy_listener_bytes_in",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of request bytes.",
    },
    [FAM_HAPROXY_LISTENER_BYTES_OUT]    = {
        .name = "haproxy_listener_bytes_out",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of response bytes.",
    },
    [FAM_HAPROXY_LISTENER_REQUESTS_DENIED] = {
        .name = "haproxy_listener_requests_denied",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of denied requests.",
    },
    [FAM_HAPROXY_LISTENER_RESPONSES_DENIED] = {
        .name = "haproxy_listener_responses_denied",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of denied responses.",
    },
    [FAM_HAPROXY_LISTENER_REQUEST_ERRORS] = {
        .name = "haproxy_listener_request_errors",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of invalid requests.",
    },
    [FAM_HAPROXY_LISTENER_STATUS] = {
        .name = "haproxy_listener_status",
        .type = METRIC_TYPE_STATE_SET,
        .help = "Current status of the listener, per state label value",
    },
    [FAM_HAPROXY_LISTENER_DENIED_CONNECTIONS] = {
        .name = "haproxy_listener_denied_connections",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of incoming connections blocked on a listener "
                "by a tcp-request connection rule.",
    },
    [FAM_HAPROXY_LISTENER_DENIED_SESSIONS] = {
        .name = "haproxy_listener_denied_sessions",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of incoming sessions blocked on a listener "
                "by a tcp-request connection rule.",
    },
    [FAM_HAPROXY_LISTENER_FAILED_HEADER_REWRITING] = {
        .name = "haproxy_listener_failed_header_rewriting",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of failed HTTP header rewrites.",
    },
    [FAM_HAPROXY_LISTENER_INTERNAL_ERRORS] = {
        .name = "haproxy_listener_internal_errors",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of internal errors.",
    },
    [FAM_HAPROXY_LISTENER_SSL_SESSIONS] = {
        .name = "haproxy_listener_ssl_sessions",
        .type = METRIC_TYPE_COUNTER,
           .help = "Total number of ssl sessions established in this listener."
    },
    [FAM_HAPROXY_LISTENER_SSL_REUSE_SESSIONS] = {
        .name = "haproxy_listener_ssl_reused_sessions",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of ssl sessions reused in this listener."
    },
    [FAM_HAPROXY_LISTENER_SSL_FAILED_HANDSHAKE] = {
        .name = "haproxy_listener_ssl_failed_handshake",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of failed handshake in this listener."
    },
    [FAM_HAPROXY_BACKEND_CURRENT_QUEUE] = {
        .name = "haproxy_backend_current_queue",
        .type = METRIC_TYPE_GAUGE,
        .help = "Number of current queued connections",
    },
    [FAM_HAPROXY_BACKEND_MAX_QUEUE] = {
        .name = "haproxy_backend_max_queue",
        .type = METRIC_TYPE_GAUGE,
        .help = "Highest value of queued connections encountered.",
    },
    [FAM_HAPROXY_BACKEND_CURRENT_SESSIONS] = {
        .name = "haproxy_backend_current_sessions",
        .type = METRIC_TYPE_GAUGE,
        .help = "Number of current sessions on the frontend, backend or server",
    },
    [FAM_HAPROXY_BACKEND_MAX_SESSIONS]  = {
        .name = "haproxy_backend_max_sessions",
        .type = METRIC_TYPE_GAUGE,
        .help = "Highest value of current sessions encountered.",
    },
    [FAM_HAPROXY_BACKEND_LIMIT_SESSIONS] = {
        .name = "haproxy_backend_limit_sessions",
        .type = METRIC_TYPE_GAUGE,
        .help = "Backend's fullconn",
    },
    [FAM_HAPROXY_BACKEND_SESSIONS] = {
        .name = "haproxy_backend_sessions",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of sessions.",
    },
    [FAM_HAPROXY_BACKEND_BYTES_IN] = {
        .name = "haproxy_backend_bytes_in",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of request bytes.",
    },
    [FAM_HAPROXY_BACKEND_BYTES_OUT] = {
        .name = "haproxy_backend_bytes_out",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of response bytes.",
    },
    [FAM_HAPROXY_BACKEND_REQUESTS_DENIED] = {
        .name = "haproxy_backend_requests_denied",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of denied requests.",
    },
    [FAM_HAPROXY_BACKEND_RESPONSES_DENIED] = {
        .name = "haproxy_backend_responses_denied",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of denied responses.",
    },
    [FAM_HAPROXY_BACKEND_CONNECTION_ERRORS] = {
        .name = "haproxy_backend_connection_errors",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of failed connections to server.",
    },
    [FAM_HAPROXY_BACKEND_RESPONSE_ERRORS] = {
        .name = "haproxy_backend_response_errors",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of invalid responses.",
    },
    [FAM_HAPROXY_BACKEND_RETRY_WARNINGS] = {
        .name = "haproxy_backend_retry_warnings",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of server connection retries.",
    },
    [FAM_HAPROXY_BACKEND_REDISPATCH_WARNINGS] = {
        .name = "haproxy_backend_redispatch_warnings",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of server redispatches due to connection failures.",
    },
    [FAM_HAPROXY_BACKEND_STATUS] = {
        .name = "haproxy_backend_status",
        .type = METRIC_TYPE_STATE_SET,
        .help = "Current status of the backend, per state label value",
    },
    [FAM_HAPROXY_BACKEND_WEIGHT] = {
        .name = "haproxy_backend_weight",
        .type = METRIC_TYPE_GAUGE,
        .help = "Server's effective weight, or sum of active servers effective weights for a backend",
    },
    [FAM_HAPROXY_BACKEND_ACTIVE_SERVERS] = {
        .name = "haproxy_backend_active_servers",
        .type = METRIC_TYPE_GAUGE,
        .help = "Total number of active UP servers with a non-zero weight",
    },
    [FAM_HAPROXY_BACKEND_BACKUP_SERVERS] = {
        .name = "haproxy_backend_backup_servers",
        .type = METRIC_TYPE_GAUGE,
        .help = "Total number of backup UP servers with a non-zero weight",
    },
    [FAM_HAPROXY_BACKEND_CHECK_FAILURES] = {
        .name = "haproxy_backend_check_failures",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of failed individual health checks per backend.",
    },
    [FAM_HAPROXY_BACKEND_CHECK_UP_DOWN] = {
        .name = "haproxy_backend_check_up_down",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of failed checks causing UP to DOWN server transitions, per backend.",
    },
    [FAM_HAPROXY_BACKEND_CHECK_LAST_CHANGE_SECONDS] = {
        .name = "haproxy_backend_check_last_change_seconds",
        .type = METRIC_TYPE_GAUGE,
        .help = "How long ago the last server state changed, in seconds",
    },
    [FAM_HAPROXY_BACKEND_DOWNTIME_SECONDS] = {
        .name = "haproxy_backend_downtime_seconds",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total time spent in DOWN state, for server or backend",
    },
    [FAM_HAPROXY_BACKEND_LOADBALANCED] = {
        .name = "haproxy_backend_loadbalanced",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of requests routed by load balancing (ignores queue pop and stickiness)",
    },
    [FAM_HAPROXY_BACKEND_MAX_SESSION_RATE] = {
        .name = "haproxy_backend_max_session_rate",
        .type = METRIC_TYPE_GAUGE,
        .help = "Highest value of sessions per second observed.",
    },
    [FAM_HAPROXY_BACKEND_HTTP_RESPONSES] = {
        .name = "haproxy_backend_http_responses",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of HTTP responses with status 100-199 returned by this object.",
    },
    [FAM_HAPROXY_BACKEND_HTTP_REQUESTS] = {
        .name = "haproxy_backend_http_requests",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of HTTP requests processed by this object.",
    },
    [FAM_HAPROXY_BACKEND_CLIENT_ABORTS] = {
        .name = "haproxy_backend_client_aborts",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of requests or connections aborted by the client.",
    },
    [FAM_HAPROXY_BACKEND_SERVER_ABORTS] = {
        .name = "haproxy_backend_server_aborts",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of requests or connections aborted by the server.",
    },
    [FAM_HAPROXY_BACKEND_HTTP_COMP_BYTES_IN] = {
        .name = "haproxy_backend_http_comp_bytes_in",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of bytes submitted to the HTTP compressor for this object.",
    },
    [FAM_HAPROXY_BACKEND_HTTP_COMP_BYTES_OUT] = {
        .name = "haproxy_backend_http_comp_bytes_out",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of bytes emitted by the HTTP compressor for this object.",
    },
    [FAM_HAPROXY_BACKEND_HTTP_COMP_BYTES_BYPASSED] = {
        .name = "haproxy_backend_http_comp_bytes_bypassed",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of bytes that bypassed HTTP compression for this object "
                "(CPU/memory/bandwidth limitation)",
    },
    [FAM_HAPROXY_BACKEND_HTTP_COMP_RESPONSES] = {
        .name = "haproxy_backend_http_comp_responses",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of HTTP responses that were compressed for this object.",
    },
    [FAM_HAPROXY_BACKEND_LAST_SESSION_SECONDS] = {
        .name = "haproxy_backend_last_session_seconds",
        .type = METRIC_TYPE_GAUGE,
        .help = "How long ago some traffic was seen on this object on this worker process, "
                "in seconds.",
    },
    [FAM_HAPROXY_BACKEND_QUEUE_TIME_AVERAGE_SECONDS] = {
        .name = "haproxy_backend_queue_time_average_seconds",
        .type = METRIC_TYPE_GAUGE,
        .help = "Time spent in the queue, in seconds, averaged over the 1024 last requests",
    },
    [FAM_HAPROXY_BACKEND_CONNECT_TIME_AVERAGE_SECONDS] = {
        .name = "haproxy_backend_connect_time_average_seconds",
        .type = METRIC_TYPE_GAUGE,
        .help = "Time spent waiting for a connection to complete, in seconds, "
                "averaged over the 1024 last requests.",
    },
    [FAM_HAPROXY_BACKEND_RESPONSE_TIME_AVERAGE_SECONDS] = {
        .name = "haproxy_backend_response_time_average_seconds",
        .type = METRIC_TYPE_GAUGE,
        .help = "Time spent waiting for a server response, in seconds, "
                "averaged over the 1024 last requests.",
    },
    [FAM_HAPROXY_BACKEND_TOTAL_TIME_AVERAGE_SECONDS] = {
        .name = "haproxy_backend_total_time_average_seconds",
        .type = METRIC_TYPE_GAUGE,
        .help = "Total request+response time (request+queue+connect+response+processing), "
                "in seconds, averaged over the 1024 last requests.",
    },
    [FAM_HAPROXY_BACKEND_FAILED_HEADER_REWRITING] = {
        .name = "haproxy_backend_failed_header_rewriting",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of failed HTTP header rewrites.",
    },
    [FAM_HAPROXY_BACKEND_CONNECTION_ATTEMPTS] = {
        .name = "haproxy_backend_connection_attempts",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of outgoing connection attempts on this backend.",
    },
    [FAM_HAPROXY_BACKEND_CONNECTION_REUSES] = {
        .name = "haproxy_backend_connection_reuses",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of reused connection on this backend.",
    },
    [FAM_HAPROXY_BACKEND_HTTP_CACHE_LOOKUPS] = {
        .name = "haproxy_backend_http_cache_lookups",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of HTTP requests looked up in the cache on this backend.",
    },
    [FAM_HAPROXY_BACKEND_HTTP_CACHE_HITS] = {
        .name = "haproxy_backend_http_cache_hits",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of HTTP requests not found in the cache on this backend.",
    },
    [FAM_HAPROXY_BACKEND_MAX_QUEUE_TIME_SECONDS] = {
        .name = "haproxy_backend_max_queue_time_seconds",
        .type = METRIC_TYPE_GAUGE,
        .help = "Maximum observed time spent in the queue, in seconds.",
    },
    [FAM_HAPROXY_BACKEND_MAX_CONNECT_TIME_SECONDS] = {
        .name = "haproxy_backend_max_connect_time_seconds",
        .type = METRIC_TYPE_GAUGE,
        .help = "Maximum observed time spent waiting for a connection to complete, in seconds.",
    },
    [FAM_HAPROXY_BACKEND_MAX_RESPONSE_TIME_SECONDS] = {
        .name = "haproxy_backend_max_response_time_seconds",
        .type = METRIC_TYPE_GAUGE,
        .help = "Maximum observed time spent waiting for a server response, in seconds.",
    },
    [FAM_HAPROXY_BACKEND_MAX_TOTAL_TIME_SECONDS] = {
        .name = "haproxy_backend_max_total_time_seconds",
        .type = METRIC_TYPE_GAUGE,
        .help = "Maximum observed total request+response time "
                "(request+queue+connect+response+processing), in seconds.",
    },
    [FAM_HAPROXY_BACKEND_INTERNAL_ERRORS] = {
        .name = "haproxy_backend_internal_errors",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of internal errors.",
    },
    [FAM_HAPROXY_BACKEND_UWEIGHT] = {
        .name = "haproxy_backend_uweight",
        .type = METRIC_TYPE_GAUGE,
        .help = "Server's user weight, or sum of active servers' user weights for a backend.",
    },
    [FAM_HAPROXY_BACKEND_SERVER_CHECK_STATUS] = {
        .name = "haproxy_backend_server_check_status",
        .type = METRIC_TYPE_STATE_SET,
        .help = "Backend's aggregated gauge of servers' state check status.",
    },
    [FAM_HAPROXY_BACKEND_SSL_SESSIONS] = {
        .name = "haproxy_backend_ssl_sessions",
        .type = METRIC_TYPE_COUNTER,
           .help = "Total number of ssl sessions established in this backend."
    },
    [FAM_HAPROXY_BACKEND_SSL_REUSE_SESSIONS] = {
        .name = "haproxy_backend_ssl_reused_sessions",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of ssl sessions reused in this backend."
    },
    [FAM_HAPROXY_BACKEND_SSL_FAILED_HANDSHAKE] = {
        .name = "haproxy_backend_ssl_failed_handshake",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of failed handshake in this backend."
    },
    [FAM_HAPROXY_BACKEND_H2_HEADERS_RCVD] = {
        .name = "haproxy_backend_h2_headers_rcvd",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of received HEADERS frames in this backend."
    },
    [FAM_HAPROXY_BACKEND_H2_DATA_RCVD] = {
        .name = "haproxy_backend_h2_data_rcvd",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of received DATA frames in this backend."
    },
    [FAM_HAPROXY_BACKEND_H2_SETTINGS_RCVD] = {
        .name = "haproxy_backend_h2_settings_rcvd",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of received SETTINGS frames in this backend."
    },
    [FAM_HAPROXY_BACKEND_H2_RST_STREAM_RCVD] = {
        .name = "haproxy_backend_h2_rst_stream_rcvd",
        .type = METRIC_TYPE_COUNTER,
           .help = "Total number of received RST_STREAM frames in this backend."
    },
    [FAM_HAPROXY_BACKEND_H2_GOAWAY_RCVD] = {
        .name = "haproxy_backend_h2_goaway_rcvd",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of received GOAWAY frames in this backend."
    },
    [FAM_HAPROXY_BACKEND_H2_DETECTED_CONNECTION_PROTOCOL_ERRORS] = {
        .name = "haproxy_backend_h2_detected_connection_protocol_errors",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of connection protocol errors in this backend."
    },
    [FAM_HAPROXY_BACKEND_H2_DETECTED_STREAM_PROTOCOL_ERRORS] = {
        .name = "haproxy_backend_h2_detected_stream_protocol_errors",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of stream protocol errors in this backend."
    },
    [FAM_HAPROXY_BACKEND_H2_RST_STREAM_RESP] = {
        .name = "haproxy_backend_h2_rst_stream_resp",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of RST_STREAM sent on detected error in this backend."
    },
    [FAM_HAPROXY_BACKEND_H2_GOAWAY_RESP] = {
        .name = "haproxy_backend_h2_goaway_resp",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of GOAWAY sent on detected error in this backend."
    },
    [FAM_HAPROXY_BACKEND_H2_OPEN_CONNECTIONS] = {
        .name = "haproxy_backend_h2_open_connections",
        .type = METRIC_TYPE_COUNTER,
        .help = "Count of currently open connections in this backend."
    },
    [FAM_HAPROXY_BACKEND_H2_BACKEND_OPEN_STREAMS] = {
        .name = "haproxy_backend_h2_backend_open_streams",
        .type = METRIC_TYPE_GAUGE,
        .help = "Count of currently open streams in this backend."
    },
    [FAM_HAPROXY_BACKEND_H2_CONNECTIONS] = {
        .name = "haproxy_backend_h2_connections",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of connections in this backend."
    },
    [FAM_HAPROXY_BACKEND_H2_BACKEND_STREAMS] = {
        .name = "haproxy_backend_h2_backend_streams",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of streams in this backend."
    },
    [FAM_HAPROXY_BACKEND_H1_OPEN_CONNECTIONS] = {
        .name = "haproxy_backend_h1_open_connections",
        .type = METRIC_TYPE_GAUGE,
        .help = "Count of currently open connections in this backend."
    },
    [FAM_HAPROXY_BACKEND_H1_OPEN_STREAMS] = {
        .name = "haproxy_backend_h1_open_streams",
        .type = METRIC_TYPE_GAUGE,
        .help = "Count of currently open streams in this backend."
    },
    [FAM_HAPROXY_BACKEND_H1_CONNECTIONS] = {
        .name = "haproxy_backend_h1_connections",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of connections in this backend."
    },
    [FAM_HAPROXY_BACKEND_H1_STREAMS] = {
        .name = "haproxy_backend_h1_streams",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of streams in this backend."
    },
    [FAM_HAPROXY_BACKEND_H1_IN_BYTES] = {
        .name = "haproxy_backend_h1_in_bytes",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of bytes received in this backend."
    },
    [FAM_HAPROXY_BACKEND_H1_OUT_BYTES] = {
        .name = "haproxy_backend_h1_out_bytes",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of bytes send in this backend."
    },
    [FAM_HAPROXY_BACKEND_H1_SPLICED_IN_BYTES] = {
        .name = "haproxy_backend_h1_spliced_in_bytes",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of bytes received using kernel splicing in this backend."
    },
    [FAM_HAPROXY_BACKEND_H1_SPLICED_OUT_BYTES] = {
        .name = "haproxy_backend_h1_spliced_out_bytes",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of bytes sendusing kernel splicing in this backend."
    },
    [FAM_HAPROXY_SERVER_CURRENT_QUEUE] = {
        .name = "haproxy_server_current_queue",
        .type = METRIC_TYPE_GAUGE,
        .help = "Number of current queued connections.",
    },
    [FAM_HAPROXY_SERVER_MAX_QUEUE] = {
        .name = "haproxy_server_max_queue",
        .type = METRIC_TYPE_GAUGE,
        .help = "Highest value of queued connections encountered.",
    },
    [FAM_HAPROXY_SERVER_CURRENT_SESSIONS] = {
        .name = "haproxy_server_current_sessions",
        .type = METRIC_TYPE_GAUGE,
        .help = "Number of current sessions on the server",
    },
    [FAM_HAPROXY_SERVER_MAX_SESSIONS] = {
        .name = "haproxy_server_max_sessions",
        .type = METRIC_TYPE_GAUGE,
        .help = "Highest value of current sessions encountered.",
    },
    [FAM_HAPROXY_SERVER_LIMIT_SESSIONS] = {
        .name = "haproxy_server_limit_sessions",
        .type = METRIC_TYPE_GAUGE,
        .help = "Server's maxconn",
    },
    [FAM_HAPROXY_SERVER_SESSIONS] = {
        .name = "haproxy_server_sessions",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of sessions.",
    },
    [FAM_HAPROXY_SERVER_BYTES_IN] = {
        .name = "haproxy_server_bytes_in",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of request bytes.",
    },
    [FAM_HAPROXY_SERVER_BYTES_OUT] = {
        .name = "haproxy_server_bytes_out",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of response bytes.",
    },
    [FAM_HAPROXY_SERVER_RESPONSES_DENIED] = {
        .name = "haproxy_server_responses_denied",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of denied responses.",
    },
    [FAM_HAPROXY_SERVER_CONNECTION_ERRORS] = {
        .name = "haproxy_server_connection_errors",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of failed connections to server.",
    },
    [FAM_HAPROXY_SERVER_RESPONSE_ERRORS] = {
        .name = "haproxy_server_response_errors",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of invalid responses.",
    },
    [FAM_HAPROXY_SERVER_RETRY_WARNINGS] = {
        .name = "haproxy_server_retry_warnings",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of server connection retries.",
    },
    [FAM_HAPROXY_SERVER_REDISPATCH_WARNINGS] = {
        .name = "haproxy_server_redispatch_warnings",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of server redispatches due to connection failures.",
    },
    [FAM_HAPROXY_SERVER_STATUS] = {
        .name = "haproxy_server_status",
        .type = METRIC_TYPE_STATE_SET,
        .help = "Current status of the server, per state label value.",
    },
    [FAM_HAPROXY_SERVER_WEIGHT] = {
        .name = "haproxy_server_weight",
        .type = METRIC_TYPE_GAUGE,
        .help = "Server's effective weight, or sum of active server's "
                "effective weights for a backend.",
    },
    [FAM_HAPROXY_SERVER_CHECK_FAILURES] = {
        .name = "haproxy_server_check_failures",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of failed individual health checks per server.",
    },
    [FAM_HAPROXY_SERVER_CHECK_UP_DOWN] = {
        .name = "haproxy_server_check_up_down",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of failed checks causing UP to DOWN server transitions per server.",
    },
    [FAM_HAPROXY_SERVER_CHECK_LAST_CHANGE_SECONDS] = {
        .name = "haproxy_server_check_last_change_seconds",
        .type = METRIC_TYPE_GAUGE,
        .help = "How long ago the last server state changed, in seconds.",
    },
    [FAM_HAPROXY_SERVER_DOWNTIME_SECONDS] = {
        .name = "haproxy_server_downtime_seconds",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total time spent in DOWN state.",
    },
    [FAM_HAPROXY_SERVER_QUEUE_LIMIT] = {
        .name = "haproxy_server_queue_limit",
        .type = METRIC_TYPE_GAUGE,
        .help = "Limit on the number of connections in queue.",
    },
    [FAM_HAPROXY_SERVER_CURRENT_THROTTLE] = {
        .name = "haproxy_server_current_throttle",
        .type = METRIC_TYPE_GAUGE,
        .help = "Throttling ratio applied to a server's maxconn and weight "
                "during the slowstart period (0 to 100%).",
    },
    [FAM_HAPROXY_SERVER_LOADBALANCED] = {
        .name = "haproxy_server_loadbalanced",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of requests routed by load balancing "
                "(ignores queue pop and stickiness).",
    },
    [FAM_HAPROXY_SERVER_MAX_SESSION_RATE] = {
        .name = "haproxy_server_max_session_rate",
        .type = METRIC_TYPE_GAUGE,
        .help = "Highest value of sessions per second observed.",
    },
    [FAM_HAPROXY_SERVER_CHECK_STATUS] = {
        .name = "haproxy_server_check_status",
        .type = METRIC_TYPE_STATE_SET,
        .help = "Status report of the server's latest health check, per state label value.",
    },
    [FAM_HAPROXY_SERVER_CHECK_CODE] = {
        .name = "haproxy_server_check_code",
        .type = METRIC_TYPE_GAUGE,
        .help = "HTTP/SMTP/LDAP status code reported by the latest server health check.",
    },
    [FAM_HAPROXY_SERVER_CHECK_DURATION_SECONDS] = {
        .name = "haproxy_server_check_duration_seconds",
        .type = METRIC_TYPE_GAUGE,
        .help = "Total duration of the latest server health check, in seconds.",
    },
    [FAM_HAPROXY_SERVER_HTTP_RESPONSES] = {
        .name = "haproxy_server_http_responses",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of HTTP responses with status 100-199 returned by this object.",
    },
    [FAM_HAPROXY_SERVER_CLIENT_ABORTS] = {
        .name = "haproxy_server_client_aborts",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of requests or connections aborted by the client.",
    },
    [FAM_HAPROXY_SERVER_SERVER_ABORTS] = {
        .name = "haproxy_server_server_aborts",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of requests or connections aborted by the server.",
    },
    [FAM_HAPROXY_SERVER_LAST_SESSION_SECONDS] = {
        .name = "haproxy_server_last_session_seconds",
        .type = METRIC_TYPE_GAUGE,
        .help = "How long ago some traffic was seen on this object on this worker process, in seconds",
    },
    [FAM_HAPROXY_SERVER_QUEUE_TIME_AVERAGE_SECONDS] = {
        .name = "haproxy_server_queue_time_average_seconds",
        .type = METRIC_TYPE_GAUGE,
        .help = "Time spent in the queue, in seconds, averaged over the 1024 last requests.",
    },
    [FAM_HAPROXY_SERVER_CONNECT_TIME_AVERAGE_SECONDS] = {
        .name = "haproxy_server_connect_time_average_seconds",
        .type = METRIC_TYPE_GAUGE,
        .help = "Time spent waiting for a connection to complete, in seconds, "
                "averaged over the 1024 last requests.",
    },
    [FAM_HAPROXY_SERVER_RESPONSE_TIME_AVERAGE_SECONDS] = {
        .name = "haproxy_server_response_time_average_seconds",
        .type = METRIC_TYPE_GAUGE,
        .help = "Time spent waiting for a server response, in seconds, "
                "averaged over the 1024 last requests.",
    },
    [FAM_HAPROXY_SERVER_TOTAL_TIME_AVERAGE_SECONDS] = {
        .name = "haproxy_server_total_time_average_seconds",
        .type = METRIC_TYPE_GAUGE,
        .help = "Total request+response time (request+queue+connect+response+processing), "
                "in seconds, averaged over the 1024 last requests.",
    },
    [FAM_HAPROXY_SERVER_FAILED_HEADER_REWRITING] = {
        .name = "haproxy_server_failed_header_rewriting",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of failed HTTP header rewrites.",
    },
    [FAM_HAPROXY_SERVER_CONNECTION_ATTEMPTS] = {
        .name = "haproxy_server_connection_attempts",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of outgoing connection attempts on this server.",
    },
    [FAM_HAPROXY_SERVER_CONNECTION_REUSES] = {
        .name = "haproxy_server_connection_reuses",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of reused connection on this server.",
    },
    [FAM_HAPROXY_SERVER_IDLE_CONNECTIONS_CURRENT] = {
        .name = "haproxy_server_idle_connections_current",
        .type = METRIC_TYPE_GAUGE,
        .help = "Current number of idle connections available for reuse on this server.",
    },
    [FAM_HAPROXY_SERVER_IDLE_CONNECTIONS_LIMIT] = {
        .name = "haproxy_server_idle_connections_limit",
        .type = METRIC_TYPE_GAUGE,
        .help = "Limit on the number of available idle connections on this server.",
    },
    [FAM_HAPROXY_SERVER_MAX_QUEUE_TIME_SECONDS] = {
        .name = "haproxy_server_max_queue_time_seconds",
        .type = METRIC_TYPE_GAUGE,
        .help = "Maximum observed time spent in the queue, in seconds.",
    },
    [FAM_HAPROXY_SERVER_MAX_CONNECT_TIME_SECONDS] = {
        .name = "haproxy_server_max_connect_time_seconds",
        .type = METRIC_TYPE_GAUGE,
        .help = "Maximum observed time spent waiting for a connection to complete, in seconds.",
    },
    [FAM_HAPROXY_SERVER_MAX_RESPONSE_TIME_SECONDS] = {
        .name = "haproxy_server_max_response_time_seconds",
        .type = METRIC_TYPE_GAUGE,
        .help = "Maximum observed time spent waiting for a server response, in seconds.",
    },
    [FAM_HAPROXY_SERVER_MAX_TOTAL_TIME_SECONDS] = {
        .name = "haproxy_server_max_total_time_seconds",
        .type = METRIC_TYPE_GAUGE,
        .help = "Maximum observed total request+response time "
                "(request+queue+connect+response+processing), in seconds.",
    },
    [FAM_HAPROXY_SERVER_INTERNAL_ERRORS] = {
        .name = "haproxy_server_internal_errors",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of internal errors.",
    },
    [FAM_HAPROXY_SERVER_UNSAFE_IDLE_CONNECTIONS_CURRENT] = {
        .name = "haproxy_server_unsafe_idle_connections_current",
        .type = METRIC_TYPE_GAUGE,
        .help = "Current number of unsafe idle connections",
    },
    [FAM_HAPROXY_SERVER_SAFE_IDLE_CONNECTIONS_CURRENT] = {
        .name = "haproxy_server_safe_idle_connections_current",
        .type = METRIC_TYPE_GAUGE,
        .help = "Current number of safe idle connections",
    },
    [FAM_HAPROXY_SERVER_USED_CONNECTIONS_CURRENT] = {
        .name = "haproxy_server_used_connections_current",
        .type = METRIC_TYPE_GAUGE,
        .help = "Current number of connections in use",
    },
    [FAM_HAPROXY_SERVER_NEED_CONNECTIONS_CURRENT] = {
        .name = "haproxy_server_need_connections_current",
        .type = METRIC_TYPE_GAUGE,
        .help = "Estimated needed number of connections",
    },
    [FAM_HAPROXY_SERVER_UWEIGHT] = {
        .name = "haproxy_server_uweight",
        .type = METRIC_TYPE_GAUGE,
        .help = "Server's user weight, or sum of active servers' user weights for a backend",
    },
    [FAM_HAPROXY_SERVER_SSL_SESSIONS] = {
        .name = "haproxy_server_ssl_sessions",
        .type = METRIC_TYPE_COUNTER,
           .help = "Total number of ssl sessions established in this server."
    },
    [FAM_HAPROXY_SERVER_SSL_REUSE_SESSIONS] = {
        .name = "haproxy_server_ssl_reused_sessions",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of ssl sessions reused in this server."
    },
    [FAM_HAPROXY_SERVER_SSL_FAILED_HANDSHAKE] = {
        .name = "haproxy_server_ssl_failed_handshake",
        .type = METRIC_TYPE_COUNTER,
        .help = "Total number of failed handshake in this server."
    },
};
